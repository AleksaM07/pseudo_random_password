Опис проблема:
Потребно је генерисати псеудо насумичану шифру која ће бити састављена од насумичног броја слова и бројева. Ова шифра ће при сваком излазу програма имати другу расподелу задатог скупа бројева и знакова и дужину онлику колика је задата од стране корисника. 
За наше потребе нам не треба прилично насумичан код јер га не користимо у криптографији, не користимо га за статистичко истраживање нити за креирање симулатора у некој видео игри. Потребан нам је довољно (псеудо) насумичан код и зато ћемо да се потрудимо да нам код буде униформно распоређен (да сви знакови имају једнаку вероватноћу појављивања) и да не буде детерминистички тј. да поновним покретањем наш програм нема исто решење.
Псеудо насумичан генератор бројева
Компјутерски програм никада не може да створи насумичан број, увек је крајњи број заснован на некој математичкој функцији и на унетим подацима. Постоје јако креативни начини уношења података који ће бити обрађивани у програму: 
•	Мерење функција хардвера у компјутеру, 
•	Мерење атмосферске акустике , 
•	SOCR  садржи бројне интерактивне активности и демонстрације генерисања случајних бројева употребом Јава аплета, 
•	Квантна Оптичка Група  (engl. The Quantum Optics Group) на ANY генерише случајне бројеве пореклом из квантног вакуума. Mожете скинути примерак случајних бројева посетом њихове странице истраживања квантних генератора случајних бројева
•	Quantum Random Bit Generator Service на Институту Руђер Бошковић прикупља случајност из квантног процеса емисије фотона у полупроводницима. Они обезбеђују разноврсне начине прикупљања податакам, укључујуци и датотеке заглавља за неколико програмских језика.
•	Група на технолошком универзитету Taiyuan генерише случајне бројеве из хаотичног ласера. Узорци случајних бројева доступни су у њиховој служби за генерисање физичких случајних бројева.
У C++ постоје разни начини да се добију не најбољи псеудо насумични бројеви коришћењем библиотеке  <cstdlib> и функцијe rand() или коришћењем boost  библиотеке или пак на неки други начин.
У овом конкретно програму нису нам потребни наручито насумични бројеви.