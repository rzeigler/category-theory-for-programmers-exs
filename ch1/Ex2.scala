package ch1

object Ex2 {
  def comp[A, B, C](g: B => C, f: A => B): A => C = (a: A) => g(f(a))
}
