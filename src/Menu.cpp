#include <iostream>
#include <string>
#include "CheckWord.hpp"
#include "TestWord.hpp"

using namespace std; 

void Menu() {
	string ListI[120] = { "arise", "awake", "be", "bear", "beat", "become", "begin", "bend", "bet", "bind", "bite", "bleed", "blow", "break", "breed", "bring", "build", "buy", "catch", "choose", "cling", "come", "cost", "cut", "deal", "dig", "do", "draw", "drink", "drive", "eat", "fall", "feed", "feel", "fight", "find", "flee", "fly", "forbid", "forget", "forgive", "freeze", "get", "give", "go", "grow", "hang", "have", "hear", "hide", "hit", "hold", "hurt", "keep", "know", "lay", "lead", "learn", "leave", "lend", "let", "lie", "light", "lose", "make", "mean", "meet", "pay", "put", "read", "ride", "ring", "rise", "run", "say", "see", "seek", "sell", "send", "set", "shake", "shine", "shoot", "show", "shrink", "shut", "sing", "sit", "sleep", "slide", "smell", "speak", "spell", "spend", "spill", "spin", "split", "spoil", "spread", "stand", "steal", "sting", "stink", "strike", "swear", "sweep", "swell", "swim", "take", "teach", "tear", "tell", "think", "throw", "understand", "wake", "wear", "win", "wind", "write" };
	string ListV2[120] = { "arose", "awoke", "was(were)", "bore", "beat", "became", "began", "bent", "bet", "bound", "bit", "bled", "blew", "broke", "bred", "brought", "built", "bought", "caught", "chose", "clung", "came", "cost", "cut", "dealt", "dug", "did", "drew", "drank", "drove", "ate", "fell", "fed", "felt", "fought", "found", "fled", "flew", "forbade", "forgot", "forgave", "froze", "got", "gave", "went", "grew", "hung", "had", "heard", "hid", "hit", "held", "hurt", "kept", "knew", "laid", "led", "learnt (learned)", "left", "lent", "let", "lay", "lit", "lost", "made", "meant", "met", "paid", "put", "read", "rode", "rang", "rose", "ran", "said", "saw", "sought", "sold", "sent", "set", "shook", "shone", "shot", "showed", "shrank", "shut", "sang", "sat", "slept", "slid", "smelt", "spoke", "spelt (spelled)", "spent", "spilt (spilled)", "spun", "split", "spoilt (spoiled)", "spread", "stood", "stole", "stung", "stank", "struck", "swore", "swept", "swelled", "swam", "took", "taught", "tore", "told", "thought", rew", "understood", "woke", "wore", "won", "wound", "wrote" };
	string ListV3[120] = { "arisen", "awoken", "been", "born", "beaten", "become", "begun", "bent", "bet", "bound", "bitten", "bled", "blown", "broken", "bred", "brought", "built", "bought", "caught", "chosen", "clung", "come", "cost", "cut", "dealt", "dug", "done", "drawn", "drunk", "driven", "eaten", "fallen", "fed", "felt", "fought", "found", "fled", "flown", "forbidden", "forgotten", "forgiven", "frozen", "got (gotten)", "given", "gone", "grown", "hung", "had", "heard", "hidden", "hit", "held", "hurt", "kept", "known", "laid", "led", "learnt (learned)", "left", "lent", "let", "lain", "lit", "lost", "made", "meant", "met", "paid", "put", "read", "ridden", "rung", "risen", "run", "said", "seen", "sought", "sold", "sent", "set", "shaken", "shone", "shot", "shown", "shrunk", "shut", "sung", "sat", "slept", "slid", "smelt", "spoken", "spelt (spelled)", "spent", "spilt (spilled)", "spun", "split", "spoilt (spoiled)", "spread", "stood", "stolen", "stung", "stunk", "struck", "sworn", "swept", "swollen (swelled)", "swum", "taken", "taught", "torn", "told", "thought", "thrown", "understood", "woken", "worn", "won", "wound", "written" };
	string ListT[120] = { "подниматься", "пробуждать", "быть", "рожать, переносить", "бить", "становиться", "начинать", "наклонять", "заключать пари", "связывать", "кусать", "кровоточить", "дуть", "ломать", "разводить животных", "приносить", "строить", "покупать", "ловить", "выбирать", "цепляться", "приходить", "стоить", "резать", "вести дела", "копать", "делать", "рисовать, тянуть", "пить", "водить автомобиль", "кушать", "падать", "кормить", "чувствовать", "бороться", "находить", "сбегать", "летать", "запрещать", "забывать", "прощать", "замораживать", "получать", "давать", "идти", "расти", "висеть", "иметь", "слышать", "прятать", "ударять, попадать", "держать", "причинять боль", "сохранять, соблюдать", "знать", "класть", "вести, лидировать", "учиться, узнавать", "покидать, оставлять", "давать взаймы", "позволять", "лежать", "зажигать, освещать", "терять", "делать, мастерить", "значить", "встречать, знакомиться", "платить", "класть, ставить", "читать", "ездить верхом", "звонить", "возрастать, подниматься", "бежать", "сказать", "	видеть", "искать", "продавать", "посылать", "устанавливать", "трясти", "светить, сиять", "стрелять", "показывать", "сжиматься", "закрывать, затворять", "петь", "сидеть", "спать", "скользить", "пахнуть, нюхать", "говорить", "произносить или писать по буквам", "тратить, проводить время", "разлить", "крутить", "разделять, раскалывать", "портить", "	разворачивать, распространять", "стоять", "воровать", "жалить", "вонять", "бастовать, ударять", "клясться, ругаться", "подметать", "опухать", "плавать", "брать", "обучать", "рвать", "рассказывать", "думать", "бросать", "понимать", "будить", "носить (одежду)", "побеждать", "обматывать, изгибаться", "писать" };
	int listShuffle[120] = {};
	menu:
	string Word;
	cout << "Введите номер пункта, который хотите выбрать." << endl << endl;
	cout << "1. Проверка слова" << endl << "2. Тест" << endl << "3. Cписок неправильных глаголов" << endl << "4. Выход из программы" << endl << endl;
	cin >> Word;
	if (Word == "1") {
		system("cls");
		CheckWord();
	}
	if (Word == "2") {
		system("cls");
		TestWord();
	}
	if (Word == "3") {
		string F;
		system("cls");
		cout << "Список неправильных глаголов: " << endl;
		for (int i = 0; i < 120; i++)
			cout << ListI[i] << " -- " << ListV2[i] << " -- " << ListV3[i] << " -- " << ListT[i] << endl;
		cout << endl;
		system("pause");
		system("cls");
		cout << endl << "1. Вернуться в меню" << endl << "2. Выйти из программы" << endl << endl;
		cin >> F;
		if (F == "1")
			system("cls");
		goto menu;
		if (F == "2") {
			system("cls");
			cout << "Выходим из программы..." << endl;
			exit(0);
		}
	}
	if (Word == "4") {
		system("cls");
		cout << "Выходим из программы..." << endl;
		exit(0);
	}
	else {
		system("cls");
		cout << "Ошибка ввода!" << endl;
		goto menu;
	}
}