Praktischer Block 1: Werkzeuge und Hilfsmittel
==============================================

Basics
------

* Logge dich ein ;-)
* Starte einen Web-Browser
* Finde und downloade eine möglichst aktuelle C-Reference-Card
* Finde Wikis, Tutorials, Artikel, E-Books etc. zum Thema C-Programmierung
* Lade aus dem Stud-IP-Bereich zur Vorlesung das C-Buch herunter


Programmierung und die Kommandozeile
------------------------------------

### Editieren von Dateien
* Starte die Konsole
* Lege ein Verzeichnis "tutorium" an und wechsle dorthin
* Starte $ emacs -nw beispiel1.c
    * Neue Datei: C-x C-f
    * Speichern: C-x C-s
    * Emacs verlassen: C-x C-c
* Alternativ: Nutze xemacs, Kate oder gedit

* Schreibe das "kürzeste C-Programm"
* Erstelle einen "Kommentar-Header"

### Kompilieren und Ausführen von Programmen
* Web-Recherche: Was sind Manpages? Wie rufe ich eine Manpage auf?
* Rufe die Manpage von gcc auf
* Was macht die gcc-Option -Wall?
* Welche Version von gcc benutzt du?

* Kompiliere beispiel1.c -> a.out
* Führe beispiel1.c aus
* Web-Recherche: Wie können wir auf der Kommandozeile (in der Bash) den Return-Code ermitteln?
* Ermittle den Return-Code

* a.out ist kein guter Name, wie können wir den Ziel-Namen beim Aufruf von gcc verändern?


Praktischer Block 2: Umgang mit Eclipse
=======================================
* Web-Recherche: Wo kannst du Eclipse downloaden?
* "Welches" Eclipse benötigen wir für C?
* Starte Eclipse
* Rufe die Hilfe auf
* Was ist ein Workspace
* Was ist eine View?
* Lege ein neues leeres C-Projekt an
* Lege eine leere C-Programmdatei an (.c)
* Schreibe das kürzeste Programm
* Kompiliere es und führe es aus



Praktischer Block 3
===================
## Output
* Schreibe das "Hello World"-Programm.
* Compiliere das Programm
* Führe das Programm aus

* Web-Recherche: Format specifier sind ein mächtiges Konzept. Welche format specifier gibt es noch?
* Experimentiere mit format specifiern, zB. bei 
  printf("Die Zahl ist %f", 5.22);

## Deklaration von Variablen
* schreibe ein Programm, welches 2*2 berechnet
* Experimentiere mit ++ und --: Was passiert bei b++, was bei ++b?


## For-Schleifen
* Erweitere das "Hello World"-Programm so, dass 10 mal hintereinander "Hello World" ausgegeben wird
* Vereinfache das Programm durch eine "for-Schleife"
* Füge dem "Hello World" beim ersten Mal eine "1" hinzu, beim zweiten Mal eine "2", ...
	--> Ausgabe: 	Hello World!1
			Hello World!2
			Hello World!3
			...

* schreibe ein Programm, welches die Berechnung von "*2" n-mal in einer Schleife ausführt [Potenzfunktion]
* Versuche, mit der Potenzfunktion einen Überlauf zu generieren

Praktischer Block 4
===================

## Arrays und Strings

* Fülle ein int-Array so, dass a[i] = i^2;
* Fülle ein 2-Dimensoinales int-Array so, dass a[i][k] = i*k
* Fülle ein 2-Dimensionales char-Array so, dass ein Schachbrettmuster mit * und + entsteht.


## Input

- Lies dir die man-pages oder sonstige Doku zu scanf und fgets durch

### scanf

- Schreibe ein Programm, das n*n berechnet, wobei n eingelesen wird.
- erweitere die Potenzfunktion so, dass n^k berechnet wird, wobei n und k eingelesen werden.
- wie kannst du einen Pufferüberlauf bei der Verwendung von scanf bekommen?

### fgets

* schreibe ein Programm, welches einen String auf der Konsole einliest und den eingegeben String wieder ausgibt.

* Schreibe ein Programm, welches einen String auf der Konsole einliest und jeden 2. Buchstaben extrahiert und ausgibt ["Hallo, dies ist ein Text" --> "al,de s i et"]

* Schreibe ein Programm, welches alle Vokale aus einem eingegebenen Text entfernt und den verbleibenden Text ausgibt ["Hallo, dies ist ein Text" --> "Hll, ds st n Txt"]

* schreibe ein Programm, welches 2 Strings auf der Konsole einliest, die beiden Strings zusammenfügt und dann ausgibt ["Hallo, "; "ich bin ein Text" --> "Hallo, ich bin ein Text"] 

Praktischer Block 5
===================

## If-Then-Else und Bedingungen
* Web-Recherche: Wie wird "oder" in Bedingungen ausgedrückt?
* schreibe ein Programm, welches eine Zahl auf der Konsole einliest und entweder "Die Zahl ist positiv" oder "Die Zahl ist negativ" ausgibt. [if-Bedingung]

## Funktionen

* "Extrahiere" die Potenzfunktion
* Web-Recherche: Wie kann ein ein-dimensionales Array an eine Funktion übergeben werden?


Benutzung des Debuggers
#######################

- Schreibe ein Programm, das 5 Zahlen in ein Array einliest und dieses Array "in place" umkehrt. Debugge das Programm und experimentiere mit den Möglichkeiten, durch das Programm zu "steppen".

Mooshak
=======

Löse alte und aktuelle Übungsaufgaben und reiche sie in Mooshak ein.


