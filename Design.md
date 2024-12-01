# Nimble Programlama Dili

## Nimble dilinin özellikleri:
**1-** Öğrenmesi kolay, söz dizini(syntax) basit.

**2-** Performas odaklı.

**3-** Modern ve optimize

## Temel Veri Tipleri

- **int**: Tam sayılar için kullanılır.
- **float**: Ondalıklı sayılar için kullanılır.
- **string**: Metinler için kullanılır.*(iterable abject)*
- **Bool**: 'True/False' mantıksal ifadeleri için kullanılır.
- **List**: Veri depo etmek için kullanılır. *(iterable abject)*
- **Block**: Çok amaçlı kapsayıcı yapı. İçinde birden fazla değişkenin özel adlarla barınabildiği bir iterable. 

Örneğin:
```
block my_block:
    int x = 5
    float y = 4.5
    str name = "Kerem"
    bool over18 = False
    list My_list = ["Elma","Armut",True,39]
```
## Temel Fonksiyonlar

- **write**: Ekrana değer yazdırmak için kullanılır.
- **read**: Kullanıcıdan değer okumak için kullanılır.
```
str name = read("Lütfen isminizi giriniz: ")
write("Merhaba "+name)
```
- **foreach**: bir iterable içindeki verileri teker teker almayı sağlayan komut.

```
str name = "Kerem"
foreach character in name:
    write(character)
```
***Çıktı:***
```
"K"
"e"
"r"
"e"
"m"
```

- **repeat**: komutun ardından girilen sayı kadar işlemi tekrar eden fonksiyon.
```
repeat 5:
    write("Hello World")
```
***Çıktı:***
```
"Hello World"
"Hello World"
"Hello World"
"Hello World"
"Hello World"
```
- **while**: koşul sağlandığı sürece sonsuza kadar çalışan fonksiyon.
```
while True:
    print("Infinity Loop!!!")
```
***Çıktı:***
Program aynı anda çok fazla işlem yapmaktan çöker
- **if/elif/else**: koşul sağlandığı takdirde çalışan ifadeler. İf, koşulun sağlanıp sağlanmadığına bakar; elif, if koşulu sağlanmadığı taktirde başka bir koşul arar; else, hiçbir koşulun sağlanmaması durumunda çalışır.
```
str name = "Kerem"

if name == "Özkan":
    write("Hello World")
elif name == "Kerem":
    write("Kerem Özkan")
else:
    write("Goodbye world")
```
***Çıktı:***
```
"Kerem Özkan"
```
- **add/sub/mul/div**: add() toplama yapar. sub() çıkarma yapar. mul() çarpma yapar. div() bölme yapar. 
- **toint/tostr**: toint() bir string değeri integer'a çevirir. tostr de bir integer değeri string'e çevirir.
- **try/catch**: Hata yakalamak için kullanılır.
```
try:
    write("hello World)
catch:
    write("2. satırda bir hata oluştu")
```
***Çıktı:***
```
"2. satırda bir hata oluştu"
```
- **goto**: derleyiciyi belirtilen satıra yönlendirir.
```
int x = 2
write(x)
x = 5
goto 2
```
***Çıktı:***
```
2
5
```

## Operatörler
- "**=**" değişken belirlemek veya değer atamak için kullanılır.
- "**==**" "eşitse" anlamına gelir. sol tarafındaki değerin sağ taraftakine eşit olup olmadığını bir bool ile cevaplar.
- "**>/</>=/<=**" sırasıyla; büyükse, küçükse, büyük veya eşitse, küçük veya eşitse anlamlarına gelir.
- "**!**" değilse anlamı taşır. 

Örneğin:

**!==** eşit değilse

**!>** büyük değilse

falan filan

- **" veya '** string ögesi belirtmek için kullanılır.