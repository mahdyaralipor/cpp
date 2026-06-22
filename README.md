# C++ Learning Journey
یک پروژه آموزشی برای یادگیری زبان برنامه‌نویسی **C++** از پایه تا مفاهیم اولیه شی‌گرایی. این پروژه شامل تمرین‌ها و کدهای نوشته‌شده در طول **۷ ساعت یادگیری** است.

## 📚 محتوا

این پروژه شامل ۷ بخش است که هر بخش یک ساعت یادگیری را پوشش می‌دهد:

| ساعت | موضوع | فایل‌ها |
|------|-------|---------|
| ۱ | نصب و Hello World | `init.cpp` |
| ۲ | متغیرها و انواع داده | `variable.cpp`, `change-variabele-data.cpp` |
| ۳ | شرط‌ها (if / else) | `conditions.cpp`, `exercise-conditions.cpp` |
| ۴ | حلقه‌ها (for / while) | `for.cpp`, `exercise-for.cpp` |
| ۵ | توابع (functions) | `func.cpp` |
| ۶ | آرایه و رشته (array و string) | `array.cpp` |
| ۷ | class خیلی ساده (OOP پایه) | `class.cpp` |

## 🛠 نصب و اجرا

### روی لینوکس (Manjaro)

```bash
# نصب کامپایلر
sudo pacman -S g++

# کامپایل یک فایل
g++ init.cpp -o init

# اجرا
./init
```

### روی VS Code

1. افزونه‌های **C/C++** و **Code Runner** را نصب کن
2. فایل `.cpp` را باز کن
3. با `Ctrl+Alt+N` یا از ترمینال اجرا کن

## 📁 ساختار پروژه

```
cpp/
├── init.cpp                  # ساعت ۱: Hello World
├── variable.cpp              # ساعت ۲: متغیرها
├── change-variabele-data.cpp # ساعت ۲: تغییر داده متغیر
├── conditions.cpp            # ساعت ۳: شرط‌ها
├── exercise-conditions.cpp   # ساعت ۳: تمرین شرط‌ها
├── for.cpp                   # ساعت ۴: حلقه for
├── exercise-for.cpp          # ساعت ۴: تمرین حلقه
├── func.cpp                  # ساعت ۵: توابع
├── array.cpp                 # ساعت ۶: آرایه و رشته
├── class.cpp                 # ساعت ۷: class ساده
└── README.md
```

## 🎯 تمرین‌های مهم

### آرایه ۵ عدد - جمع آن‌ها

```cpp
int nums[] = {1, 2, 3, 4, 5};
int sum = 0;
for (int i = 0; i < 5; i++) {
    sum += nums[i];
}
```

### ۳ اسم در آرایه string

```cpp
string names[3];
for (int i = 0; i < 3; i++) {
    cin >> names[i];
}
```

## 👨‍💻 نویسنده

**Mahdyar Alipor**
Backend Developer
[GitHub](https://github.com/mahdyaralipor)

## 📄 مجوز

این پروژه برای آموزش شخصی ایجاد شده است.
