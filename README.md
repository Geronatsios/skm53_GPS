# skm53_GPS
This Sketch will run with the SkyLab SKM53 GPS via Arduino
GSM/GPRS Shield
Με το παραπάνω shield εφόσον το συνδέσουμε στο Arduino και εφόσον αγοράσουμε μια κάρτα sim για να την τοποθετήσουμε στο shield ,μπορούμε να κάνουμε ότι θέλουμε από πλευράς κινητής τηλεφωνίας και αλληλεπίδρασης με το arduino και το υπόλοιπο σύστημα. Για παραπάνω τεχνικές πληροφορίες σχετικά με το shield απλά ψάξτε στο google…

Στο παρακάτω project υλοποιούμε με την βοήθεια του Arduino UNO και του GPS / GPRS Shield sim900 έναν εντοπιστή αυτοκινήτου car tracker. Πως λειτουργεί :

Ο χρήστης καλεί έναν αριθμό τηλεφώνου (το τηλέφωνο που αντιστοιχεί στην κάρτα sim που φορά η GSM Shield)
To  σύστημα στέλνει ένα sms στο τηλέφωνο μας που μας λέει ότι η συσκευή προσπαθεί να εντοπίσει το αυτοκίνητο σας.
Σε ένα χρονικό διάστημα μερικών δευτερολέπτων μας στέλνει ένα sms με τις γεωγραφικές συντεταγμένες του αυτοκινήτου μας. Καθώς επίσης και ένα έτοιμο url με google maps για να δούμε άμεσα την θέση στον χάρτη.
Υλικά που χρησιμοποιήσαμε :

Arduino UNO (κόστος 25 Ευρώ)
GSM / GPS SIM900 (κόστος 35 ευρώ)
SKM 53 skylab GPS Module (κόστος 20 Ευρώ)
Voltage Regulator (κόστος 4 ευρώ)
