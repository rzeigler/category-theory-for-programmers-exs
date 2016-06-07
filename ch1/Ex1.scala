package ch1

object Ex1 {
  def identity[A](a: A): A = a
  def main(args: Array[String]) {
    println(identity(42))
    println(identity("Hi!"))
  }
}
