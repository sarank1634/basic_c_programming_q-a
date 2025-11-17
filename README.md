# How to Run C Programs

## 1. Open Terminal
```bash
cd /path/to/your/c/file
```

## 2. Compile

```bash
gcc filename.c -o output
```

## 3. Run

```bash
./output
```

## Compile & Run Together

```bash
gcc filename.c -o output && ./output
```

## Common Issues

* **gcc not found:** `sudo apt install gcc`
* **Permission denied:** `chmod +x output`
* **Compile errors:** Check syntax/semicolons
