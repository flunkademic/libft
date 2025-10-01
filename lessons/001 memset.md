Think memory painting: ft_memset(memory_start, value, number_of_bytes);


What is a constant byte?

Byte = 1 unit of memory (8 bits).

Constant byte = the same value you want to fill in all the memory.

In the example above: 'A' is the constant byte.

You could also use a number: 0 or 255.

Remember: c is an int, but it only uses the lowest 8 bits (so it becomes a char internally).


========================================================================================================

Ah, yes — this is a subtle but important point. Let’s clarify carefully.

---

### 1️⃣ Why `c` is `int` in the function

The standard `memset` (and your `ft_memset`) takes `int c` **even though it fills bytes**.

* Why? C’s standard library functions often use `int` for small values to avoid type-promotion issues when calling the function.
* But `memset` **only cares about the lowest 8 bits** (1 byte) of that `int`.

---

### 2️⃣ What “becomes a char internally” means

* Inside the function, when it fills memory, each byte of memory is 8 bits.
* So, even if you passed `int c = 300`, it will **truncate to the lowest 8 bits**:

```
300 in binary = 00000001 00101100
lowest 8 bits = 00101100 = 44 in decimal
```

* Each byte in memory gets `44` instead of `300`.
* This happens **at runtime**, inside the function, as it copies the value into memory **byte by byte**.

---

### 3️⃣ Can `c` be a char?

Yes, you can pass a `char`:

```c
char ch = 'A';
ft_memset(buffer, ch, 10);
```

* It’s **implicitly promoted** to `int` because C automatically promotes `char` to `int` in function calls.
* The function will still take the **lowest 8 bits** for filling bytes.

---

### 4️⃣ Where does the truncation happen?

* Inside the function, **as it writes to memory**, each `b[i]` is a `char` (1 byte).
* So the `int c` is converted to a `unsigned char` **for each memory slot**.
* This is what “becomes a char internally” means — it’s **not changing the original variable**, it’s how the value is applied to memory.

---

✅ Quick takeaway:

* `c` can be an `int`, a `char`, or even a literal like `65`.
* Only the **lowest 8 bits** matter.
* The conversion to a byte happens **as the function writes memory**.

---

If you want, I can **draw a tiny diagram showing the memory filling and how int → byte works**. It makes it really obvious visually.

Do you want me to do that?
