#include <erl_nif.h>
#include "lib_calc.h"

static ERL_NIF_TERM somar_nif(ErlNifEnv* env, int argc, const ERL_NIF_TERM argv[])
{
  int a, b, result;
  enif_get_int(env, argv[0], &a);
  enif_get_int(env, argv[1], &b);
  result = somar(a, b);
  return enif_make_int(env, result);
}

static ERL_NIF_TERM subtrair_nif(ErlNifEnv* env, int argc, const ERL_NIF_TERM argv[])
{
  int a, b, result;
  enif_get_int(env, argv[0], &a);
  enif_get_int(env, argv[1], &b);
  result = subtrair(a, b);
  return enif_make_int(env, result);
}

static ERL_NIF_TERM multiplicar_nif(ErlNifEnv* env, int argc, const ERL_NIF_TERM argv[])
{
  int a, b, result;
  enif_get_int(env, argv[0], &a);
  enif_get_int(env, argv[1], &b);
  result = multiplicar(a, b);
  return enif_make_int(env, result);
}

static ERL_NIF_TERM dividir_nif(ErlNifEnv* env, int argc, const ERL_NIF_TERM argv[])
{
  int a, b, result;
  enif_get_int(env, argv[0], &a);
  enif_get_int(env, argv[1], &b);
  result = dividir(a, b);
  return enif_make_int(env, result);
}

static ErlNifFunc nif_funcs[] = {
  {"somar", 2, somar_nif},
  {"subtrair", 2, subtrair_nif},
  {"multiplicar", 2, multiplicar_nif},
  {"dividir", 2, dividir_nif},
};

ERL_NIF_INIT(Elixir.Calc, nif_funcs, NULL, NULL, NULL, NULL)

