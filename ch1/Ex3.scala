package ch1

object Ex3 {
  def add(x: Int)(y: Int): Int = x + y

  def main(args: Array[String]) {
    println(Ex2.comp(add(1), Ex1.identity[Int])(1) == add(1)(1))
    println(Ex2.comp(Ex1.identity[Int], add(1))(1) == add(1)(1))
  }
}
