package main

import (
	"fmt"
)

func top(roof string) string {
	_roof := "    _____________________"
	return _roof
}

func _bottom(bot string) string {
	return "'                 '"
}

func main() {

	fmt.Println(top(""))
	fmt.Println("   /                   / \\        z")
	fmt.Println("  /                   /   \\      z")
	fmt.Println(" /                   /     \\    z")
	fmt.Println("/                   /       \\  z")
	fmt.Println("___________________/---------\\")
	fmt.Println((_bottom("")))

}
