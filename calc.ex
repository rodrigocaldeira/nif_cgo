defmodule Calc do
  @on_load :load_nifs

  def load_nifs do
    :erlang.load_nif('./lib_calc_nif', 0)
  end

  def somar(_a, _b) do
    raise "NIF somar not implemented"
  end

  def subtrair(_a, _b) do
    raise "NIF subtrair not implemented"
  end

  def multiplicar(_a, _b) do
    raise "NIF multiplicar not implemented"
  end

  def dividir(_a, _b) do
    raise "NIF dividir not implemented"
  end
end
