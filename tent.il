.assembly Tent {}
.assembly extern mscorlib {}
.method static void Main() {
    .entrypoint
    .maxstack 1
    ldstr "    _____________________\n   /                   / \\        z\n  /                   /   \\      z\n /                   /     \\    z\n/                   /       \\  z\n___________________/---------\\\n"
    call void [mscorlib]System.Console::WriteLine(string)
    ret
}
