# Programowanie komputerów w języku C++: przykłady z laboratoriów

> 📌 **Przed rozpoczęciem zajęć przeczytaj [Regulamin zajęć](regulamin.md).**

To repozytorium zawiera **przykłady kodu prezentowane i omawiane podczas zajęć laboratoryjnych** z programowania w języku C++.

Repozytorium służy przede wszystkim do:
- łatwego dostępu do przykładów z zajęć,
- uruchamiania i modyfikowania przykładowych programów,
- samodzielnego eksperymentowania z kodem.

> **Uwaga:** zadania przeznaczone do samodzielnego wykonania i oddania znajdują się na platformie **UPEL**.  
> To repozytorium nie zastępuje materiałów ani zadań publikowanych na UPEL-u.

---

## 1. Jak rozpocząć pracę

Do pracy podczas laboratoriów będziemy korzystać z **GitHub Codespaces**.

Aby korzystać z Codespaces, potrzebne jest konto w serwisie **GitHub**.

Jeżeli nie masz jeszcze konta GitHub:

1. utwórz bezpłatne konto w serwisie GitHub,
2. zaloguj się na swoje konto,
3. otwórz repozytorium prowadzącego:

    PK-26-27

### Utwórz własną kopię repozytorium: Fork

Na początku utwórz własną kopię tego repozytorium na swoim koncie GitHub.

Na stronie repozytorium prowadzącego:

1. kliknij przycisk **Fork** znajdujący się w górnej części strony,
2. wybierz **Create a new fork**,
3. jako właściciela wybierz swoje konto GitHub,
4. nazwę repozytorium możesz pozostawić bez zmian:

    PK-26-27

5. kliknij **Create fork**.

Po chwili GitHub utworzy na Twoim koncie własną kopię repozytorium.

Adres repozytorium będzie wyglądał mniej więcej tak:

    https://github.com/TWOJ_LOGIN/PK-26-27

Od tej chwili pracuj na **swojej kopii repozytorium**, a nie bezpośrednio na repozytorium prowadzącego.

### Uruchom Codespaces ze swojego forka

Będąc na stronie swojego repozytorium:

1. kliknij **Code**,
2. wybierz zakładkę **Codespaces**,
3. kliknij **Create codespace on main**,
4. poczekaj na uruchomienie środowiska.

Po chwili w przeglądarce otworzy się Visual Studio Code z przygotowanym środowiskiem oraz plikami znajdującymi się w repozytorium.

Nie musisz ręcznie pobierać repozytorium ani używać poleceń takich jak:

    git clone
    git init
    git pull

Pracujesz teraz na własnej kopii repozytorium.

Możesz swobodnie:
- modyfikować przykłady,
- tworzyć własne pliki `.cpp`,
- eksperymentować z kodem,
- zapisywać swoje zmiany na swoim koncie GitHub.

Twoje zmiany **nie zmieniają repozytorium prowadzącego**.

---

## 2. Jak zachować swoje zmiany na GitHubie

Jeżeli pracujesz na własnym forku repozytorium, możesz zapisywać swoje pliki i zmiany na swoim koncie GitHub.

Po zmianie lub utworzeniu pliku:

1. otwórz zakładkę **Source Control** po lewej stronie Visual Studio Code,
2. zobaczysz listę zmienionych lub nowych plików,
3. wpisz krótki opis zmian, np.:

    Dodano własne przykłady z lab01

4. kliknij **Commit**,
5. następnie kliknij **Sync Changes** lub **Push**, jeżeli taka opcja się pojawi.

Po wykonaniu synchronizacji pliki będą zapisane w Twoim repozytorium na GitHubie.

Możesz sprawdzić je później, otwierając swoje repozytorium:

    https://github.com/TWOJ_LOGIN/PK-26-27

Nie wysyłasz w ten sposób zmian do repozytorium prowadzącego. Zapisujesz je wyłącznie we własnym forku.

> **Ważne:** własne repozytorium może służyć jako miejsce do przechowywania Twoich przykładów i ćwiczeń.  
> Zadania wymagane do zaliczenia nadal oddajemy zgodnie z instrukcjami znajdującymi się na **UPEL-u**.

---

## 3. Instalacja potrzebnych rozszerzeń

Repozytorium jest przygotowane tak, aby potrzebne rozszerzenia do pracy z C++ zostały zainstalowane automatycznie podczas tworzenia Codespace.

Podczas pierwszego uruchomienia może pojawić się pytanie o zgodę na instalację, uruchomienie lub zaufanie do rozszerzeń.

W takim przypadku wybierz odpowiednią opcję potwierdzającą zgodę, np.:

    Allow
    Install
    Trust

W środowisku będą używane między innymi rozszerzenia:

- **C/C++: Microsoft**
- **Code Runner**

Nie musisz instalować ich ręcznie, jeśli Codespaces zrobi to automatycznie.

---

## 4. Struktura repozytorium

Materiały są podzielone według kolejnych laboratoriów:

    PK-26-27/
    ├── README.md
    ├── lab01/
    │   ├── README.md
    │   ├── lab01_zad01.cpp
    │   ├── lab01_zad02.cpp
    │   └── lab01_zad03.cpp
    ├── lab02/
    │   ├── README.md
    │   ├── lab02_zad01.cpp
    │   └── lab02_zad02.cpp
    ├── lab03/
    │   └── ...
    ├── .devcontainer/
    └── .vscode/

W każdym katalogu `labXX` mogą znajdować się:

- przykładowe programy omawiane podczas zajęć,
- dodatkowe informacje w pliku `README.md`,
- krótkie przykłady pokazujące wybrane elementy języka C++.

Przed rozpoczęciem pracy z danym laboratorium warto otworzyć jego plik:

    labXX/README.md

---

## 5. Pliki źródłowe C++

Programy piszemy w języku **C++**.

Pliki zawierające kod źródłowy C++ muszą mieć rozszerzenie:

    .cpp

Przykładowe poprawne nazwy plików:

    program.cpp
    lab01_zad01.cpp
    petla.cpp
    tablice.cpp

---

## 6. Uruchamianie programu: przycisk Run ▶

Najwygodniejszym i domyślnym sposobem uruchamiania programów podczas laboratoriów jest użycie przycisku **Run ▶**.

Aby uruchomić program:

1. otwórz odpowiedni katalog, np. `lab01`,
2. otwórz plik `.cpp`, np.:

    lab01_zad01.cpp

3. kliknij przycisk **Run ▶** znajdujący się w prawym górnym rogu edytora,
4. wybierz **Run Code**, jeśli pojawi się kilka opcji.

Program zostanie automatycznie skompilowany i uruchomiony.

Plik wynikowy zostanie zapisany w katalogu:

    build/

z rozszerzeniem:

    .out

Przykładowo dla pliku:

    lab01_zad01.cpp

powstanie:

    build/lab01_zad01.out

Nie musisz ręcznie kompilować programu przed użyciem przycisku Run.

### Run a Debug

Podczas pierwszych laboratoriów używamy zwykłego **Run**, a nie trybu **Debug**.

Tryb Debug może wyświetlać dodatkowe informacje techniczne związane z debuggerem `gdb`, które nie są częścią wyniku programu.

Na początku zajęć korzystamy więc z:

    Run Code ▶

---

## 7. Podstawowe komendy terminala

Podczas pracy warto znać kilka podstawowych poleceń terminala.

### `pwd`

Wyświetla katalog, w którym aktualnie się znajdujemy.

    pwd

### `ls`

Wyświetla zawartość aktualnego katalogu.

    ls

Przykładowo:

    README.md  lab01  lab02  lab03

### `cd`

Pozwala przejść do innego katalogu.

Aby wejść do katalogu `lab01`:

    cd lab01

Aby wrócić o jeden poziom wyżej:

    cd ..

### `clear`

Czyści zawartość terminala:

    clear

---

## 8. Dla chętnych: kompilowanie programu w terminalu

Program można również skompilować ręcznie z poziomu terminala.

Podczas zajęć korzystamy z kompilatora:

    g++

W tym repozytorium pliki wynikowe zapisujemy w katalogu:

    build/

i nadajemy im rozszerzenie:

    .out

GitHub Codespaces działa w środowisku Linux, dlatego program wykonywalny nie musi mieć rozszerzenia `.exe`.

Najwygodniej wykonywać kompilację z katalogu głównego repozytorium.

Możesz sprawdzić, gdzie aktualnie się znajdujesz, poleceniem:

    pwd

Powinieneś znajdować się w katalogu podobnym do:

    /workspaces/PK-26-27

Jeżeli chcesz skompilować plik:

    lab01/lab01_zad01.cpp

wykonaj:

    mkdir -p build
    g++ lab01/lab01_zad01.cpp -o build/lab01_zad01.out

Następnie uruchom program:

    ./build/lab01_zad01.out

Cały proces wygląda więc następująco:

    mkdir -p build
    g++ lab01/lab01_zad01.cpp -o build/lab01_zad01.out
    ./build/lab01_zad01.out

Polecenie:

    mkdir -p build

tworzy katalog `build`, jeśli jeszcze nie istnieje.

Opcja:

    -o build/lab01_zad01.out

określa nazwę i miejsce zapisania programu wynikowego.

Po każdej zmianie kodu program należy ponownie skompilować.

Ręczna kompilacja w terminalu jest opcjonalna. Na zajęciach podstawowym sposobem uruchamiania programów jest przycisk **Run ▶**.

---

## 9. Pytania

Jeżeli masz pytanie dotyczące przykładów z laboratoriów, kodu C++ lub pracy w GitHub Codespaces, skorzystaj z zakładki **Discussions** w repozytorium prowadzącego.

Pytania techniczne zadawaj w kategorii:

    Q&A

Ogłoszenia dotyczące repozytorium będą publikowane w kategorii:

    Announcements

Aby zadawać pytania w Discussions, musisz być zalogowany na swoje konto GitHub.

Oficjalne zadania, terminy oraz materiały wymagane do zaliczenia znajdują się na **UPEL-u**.