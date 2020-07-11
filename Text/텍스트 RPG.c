#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
void delay(clock_t n)
{
	clock_t start = clock();
	while (clock() - start < n);
}
int main() {
	char* Direction = "중앙";
	char* MName;
	char Name[256];
	char SName[40] = "없음";
	char Gold[40];
	char EXP[40];
	char HP[40];
	char STR[40];
	char DEX[40];
	char* Job = "무직";
	char SaveNamea[40] = "없음";
	char SaveNameb[40] = "없음";
	char SaveNamec[40] = "없음";
	char HMName[40] = "신체";
	char AaName[40] = "검";
	char AbName[40] = "활";
	char AcName[40] = "창";
	char DaName[40] = "낡은 갑옷";
	char DbName[40] = "가죽 갑옷";
	char DcName[40] = "미늘갑주";
	char DdName[40] = "용사 전용 갑옷";
	char None[6] = "없음";
	char Blank[20] = "　";
	char* MapNameA = "깊은 숲";
	char* MapNameB = "북부 얼음 산맥";
	char* MapNameC = "대미궁 입구";
	char* MapNameD = "동부 용암 지대";
	char MapNameE[40] = "왕궁 내부";
	char MapNameF[40] = "왕궁 지하 제단";
	char BossNameA[40] = "서쪽 평야의 통치자 고브";
	char BossNameB[40] = "북쪽 설원의 정복 군주 아크리온";
	char BossNameC[40] = "남쪽 심층 던전의 수호자 기가스마칸";
	char BossNameD[40] = "동쪽 산맥의 영원한 지배자 렉사";
	char BossNameE[40] = "황제 리게리온";
	char BossNameF[40] = "중앙 마왕 리게리온";
	char BossNameTrue[40] = "죽음";
	char SKNameA[40] = "없음";
	char SKNameB[40] = "없음";
	char SKNameC[40] = "없음";
	char SKNameD[40] = "없음";
	char SKNameE[40] = "없음";
	char ASKNameA[40] = "막기";
	char ASKNameB[40] = "흘리기";
	char ASKNameC[40] = "정권";
	char ASKNameD[40] = "신체 강화";
	char ASKNameE[40] = "난타";
	char BSKNameA[40] = "막기";
	char BSKNameB[40] = "흘리기";
	char BSKNameC[40] = "가로 베기";
	char BSKNameD[40] = "신체 강화";
	char BSKNameE[40] = "검화";
	char CSKNameA[40] = "막기";
	char CSKNameB[40] = "피하기";
	char CSKNameC[40] = "마나 화살";
	char CSKNameD[40] = "신체 강화";
	char CSKNameE[40] = "마력시";
	char DSKNameA[40] = "막기";
	char DSKNameB[40] = "흘리기";
	char DSKNameC[40] = "마나 투창";
	char DSKNameD[40] = "신체 강화";
	char DSKNameE[40] = "회전격";
	int Money, Level, Exp, MExp, MMoney, WeaA, ArA, MHPA, MHP, MDex, Str, Dex, MA, Bar, Har, Free, Death, LIM, RA, Left, PDice, Auto;
	int ABa, ABb, ABc, DBb, DBc, DBd, ASa, ASb, ASc, DSa, DSb, DSc, DSd, e, L, Dice, Ex, Ta, Tb, Tc, Td, Te, a, BOSSA, BOSSB, BOSSC, BOSSD;
	int DBa, HpB, Hp, HpA, DExp, DSKa, DSKb, DSKc, DSKd, DSKe, At, Skill, Triple, KOK, MapLvA, MapLvB, MapLvC, MapLvD, MapLvE, MapLvF;
	int ASA, ASB, ASC, ASD, ASE, BSA, BSB, BSC, BSD, BSE, CSA, CSB, CSC, CSD, CSE, DSA, DSB, DSC, DSD, DSE, KLA, KLB, KLC, ATTACK, SKUSE;
	int SaveA, SaveB, SaveC, choice, choiceA, choiceB, choiceC, choiceD, choiceE, choiceF, choiceG, choiceK, choiceH, choiceL, choiceO, choiceP, choiceN, MS, ML;
	int Aa, Da, Db, Dc, Dd, HL, SL, DL, SKL, AUTO, Ata, Atb, Atc, Dta, Dtb, Dtc, Dtd, Sta, Stb, Stc, HAt, HSt, HDt, SA, SB, SC, SD, SE, MU;
	int DexA, MStr, AtBA, DtBA, StBA, FL, B, MLV, SKDExp, SKExpA, SKExpB, SKExpC, SKExpD, SKExpE, WeaExpA, WeaExpB, WeaExpC, WeaExpH, WeaExpP, WeaDExpA, WeaDExpB, WeaDExpC, WeaDExpH, WeaDExpP, WLVa, WLVb, WLVc, WLVh, WLVp;
	ATTACK = 0;
	SaveA = 0;
	SaveB = 0;
	SaveC = 0;
	srand(time(NULL));
	FILE* out;
	out = fopen("텍스트 RPG.dat", "rb");
	fread(&SaveA, sizeof(int), 1, out);
	fread(&SaveB, sizeof(int), 1, out);
	fread(&SaveC, sizeof(int), 1, out);
	fread(&SaveNamea, sizeof(char), 40, out);
	fread(&SaveNameb, sizeof(char), 40, out);
	fread(&SaveNamec, sizeof(char), 40, out);
	fclose(out);
	Death = 0;
	SA = 2;
	SB = 2;
	SC = 2;
	SD = 2;
	SE = 2;
	Ta = 0;
	Tb = 0;
	Tc = 0;
	Td = 0;
	KOK = 0;
	KLA = 1;
	KLB = 1;
	KLC = 1;
	MU = 0;
	AtBA = 0;
	DtBA = 0;
	StBA = 0;
	Aa = 1000;
	Da = 1000;
	Db = 2000;
	Dc = 10000;
	Dd = 100000;
	ASA = 2;
	ASB = 2;
	ASC = 2;
	ASD = 2;
	ASE = 2;
	BSA = 2;
	BSB = 2;
	BSC = 2;
	BSD = 2;
	BSE = 2;
	CSA = 2;
	CSB = 2;
	CSC = 2;
	CSD = 2;
	CSE = 2;
	DSA = 2;
	DSB = 2;
	DSC = 2;
	DSD = 2;
	DSE = 2;
	HAt = 0;
	Ata = 4;
	Atb = 8;
	Atc = 10;
	HSt = 0;
	Sta = 6;
	Stb = 2;
	Stc = 0;
	HDt = 0;
	Dta = 1;
	Dtd = 5;
	Dtc = 20;
	Dtd = 50;
	ABa = 1;
	ABb = 2;
	ABc = 5;
	DBa = 1;
	DBb = 2;
	DBc = 5;
	DBd = 10;
	ASa = 0;
	ASb = 0;
	ASc = 0;
	DSa = 0;
	DSb = 0;
	DSc = 0;
	DSd = 0;
	DSKa = 10;
	DSKb = 30;
	DSKc = 50;
	DSKd = 100;
	DSKe = 250;
	Level = 1;
	LIM = 0;
	Exp = 0;
	Money = 1000;
	MS = 0;
	DExp = 10;
	SKExpA = 0;
	SKExpB = 0;
	SKExpC = 0;
	SKExpD = 0;
	SKExpE = 0;
	SKDExp = 10;
	WeaExpA = 0;
	WeaExpB = 0;
	WeaExpC = 0;
	WeaExpH = 0;
	WeaExpP = 0;
	WeaDExpA = 10;
	WeaDExpB = 10;
	WeaDExpC = 10;
	WeaDExpH = 10;
	WeaDExpP = 10;
	Bar = 0;
	Har = 0;
	WeaA = 0;
	ArA = 0;
	Dice = 1;
	PDice = 1;
	Triple = 0;
	WLVa = 0;
	WLVb = 0;
	WLVc = 0;
	WLVh = 0;
	WLVp = 0;
	MapLvA = 1;
	MapLvB = 10;
	MapLvC = 20;
	MapLvD = 30;
	MapLvE = 80;
	MapLvF = 90;
	a = 0;
	BOSSA = 0;
	BOSSB = 0;
	BOSSC = 0;
	BOSSD = 0;
	Auto = 0;
	choice = 0;
	choiceB = 0;
	SKUSE = 5;
	Skill = 0;
	Hp = 0;
	Str = 0;
	Dex = 0;
	Ex = 0;
NEW:
	printf("[1.새로하기]\n[2.이어하기]\n선택 : ");
	scanf("%d", &choiceN);
	if (choiceN == 1) {
	}
	else if (choiceN == 2) {
		goto BO;
	}
	else {
		printf("[올바른 값을 입력하세요.]\n");
		goto NEW;
	}
	while (1) {
		printf("[이름을 정해주세요.(최대 8 글자)]\n이름 : ");
		scanf("%s", &Name);
		if (strlen(Name) > 16) {
			printf("[8글자를 초과했습니다.]\n");
			continue;
		}
		break;
	}
a:
	printf("[스텟을 어떻게 분배하시겠습니까?]\n");
	printf("[1.자유 분배(자유 스탯 15개 증정, 레벨업 시 자유 스탯 10개 증정 및 레벨업 시 모든 능력치가 1증가)]\n");
	printf("[2.랜덤 분배(모든능력치 5로 시작, 레벨업 시 모든능력치가 1~5 증가, 레벨업 시 상승된 능력치를 다시 설정할 수 있는 주사위 1개 증정)]\n선택 : ");
	scanf("%d", &choice);
	if (choice == 1) {
		Str = 1;
		Dex = 1;
		Skill = 1;
		Hp = 1;
		Free = 15;
	}
	else if (choice == 2) {
		Str = 5;
		Dex = 5;
		Skill = 5;
		Hp = 5;
	}
	else {
		printf("[올바른 숫자를 입력해주세요.]\n"); goto a;
	}
	printf("[%s, 당신은 중앙 제국의 평민입니다.]\n", Name);
	delay(2000);
	printf("[얼마 지나지 않아 이 세계에는 종말이 들어닥치게 됩니다.]\n");
	delay(2000);
	printf("[최대한 성장해 종말을 막고 세계의 영웅이 되어주세요.]\n");
	delay(2000);
	while (1) {
	START:
		SKL = 0;
		if (Level == 40 && ATTACK == 0) {
			printf("\n\n\n\n[저 멀리 어디선가 북소리가 들려옵니다.]\n");
			delay(3000); 
			ATTACK = ATTACK + 1;
			Direction = "서쪽";
			goto ATA;
		}
		if (Level == 50 && ATTACK == 2) {
			printf("\n\n\n\n[이 세상을 정복하는 군주의 힘이 느껴집니다.]\n");
			delay(3000); 
			ATTACK = ATTACK + 1;
			Direction = "북쪽";
			goto ATA;
		}
		if (Level == 60 && ATTACK == 4) {
			printf("\n\n\n\n[땅이 울리고 흙에서 기름의 냄새가 납니다.]\n");
			delay(3000); 
			ATTACK = ATTACK + 1;
			Direction = "남쪽";
			goto ATA;
		}
		if (Level == 70 && ATTACK == 6) {
			printf("\n\n\n\n[수많은 세월, 수많은 삶, 그리고 수많은 죽음이 느껴집니다.]\n");
			delay(3000); 
			ATTACK = ATTACK + 1;
			Direction = "동쪽";
			goto ATA;
		}
		if (Level == 80 && ATTACK == 8) {
			printf("\n\n\n\n[죽음이 다가오는 소리가 들립니다.]\n");
			delay(3000); 
			ATTACK = ATTACK + 1;
			goto ATA;
		}
		if (choice == 1 && Skill >= 250 && LIM == 0) {
			printf("[기술의 한계에 다달았습니다.]\n[레벨업 시 획득 자유 스탯 + 5]\n[전체 성장 능력치 + 1]\n[기술 스탯은 더 이상 증가하지 않습니다.]\n");
			LIM = 1;
		}
		if (Skill > 250) {
			Skill = 250;
		}
		Ata = 2 + 3 * WLVa;
		Atb = 4 + 5 * WLVb;
		Atc = 6 + 6 * WLVc;
		Sta = 4 + 4 * WLVa;
		Stb = 2 + 2 * WLVb;
		Stc = 1 + 1 * WLVc;
		HAt = 3 + 3 * WLVh;
		HSt = 3 + 3 * WLVh;
		HDt = 3 + 3 * WLVh;
		if (ASa + ASb + ASc == 1 && KLA == 1) {
			Aa = Aa * 3;
			KLA = 0;
		}
		else if (ASa + ASb + ASc == 2 && KLB == 1) {
			Aa = Aa * 3;
			KLB = 0;
		}
		else if (ASa + ASb + ASc == 3 && KLC == 1) {
			Aa = Aa * 3;
			KLC = 0;
		}
		if (SKExpA >= 100) {
			SKExpA = 100;
		}
		if (SKExpB >= 100) {
			SKExpB = 100;
		}
		if (SKExpC >= 100) {
			SKExpC = 100;
		}
		if (SKExpD >= 100) {
			SKExpD = 100;
		}
		if (SKExpE >= 100) {
			SKExpE = 100;
		}
		if (WeaA == 0) {
			AtBA = 0;
			StBA = 0;
		}
		if (WeaA == 0 && WLVp >= 5) {
			AtBA = HAt;
			StBA = HSt;
			DtBA = HDt;
			Job = "무투가";
			if (MU == 0) {
				printf("[히든직업 무투가 개방]\n");
				MU = 1;
			}
			if (ArA > 0) {
				printf("[무투가는 갑옷을 착용할 수 없습니다.]\n");
				ArA = 0;
			}
		}
		if (WeaA == 1) {
			AtBA = Ata;
			StBA = Sta;
			Job = "검사";
		}
		if (WeaA == 2) {
			AtBA = Atb;
			StBA = Stb;
			Job = "궁수";
		}
		if (WeaA == 3) {
			AtBA = Atc;
			StBA = Stc;
			Job = "창술사";
		}
		if (ArA == 0 && WeaA == 0 && WLVp >= 5) {
			DtBA = HDt;
		}
		else if (ArA == 0) {
			DtBA = Dta;
		}
		else if (ArA == 1) {
			DtBA = Dta;
		}
		else if (ArA == 2) {
			DtBA = Dtb;
		}
		else if (ArA == 3) {
			DtBA = Dtc;
		}
		else if (ArA == 4) {
			DtBA = Dtd;
		}
		sprintf(Gold, "%d골드", Money);
		sprintf(EXP, "%d/%d", Exp, DExp);
		sprintf(HP, "%d + %d (%d + %d)", Hp * 10, DtBA * 10, Hp, DtBA);
		sprintf(STR, "%d + %d", Str, AtBA);
		sprintf(DEX, "%d + %d", Dex, StBA);
		if (WeaA == 0 && MU == 1) {
			sprintf(SKNameA, "%s", ASKNameA);
			sprintf(SKNameB, "%s", ASKNameB);
			sprintf(SKNameC, "%s", ASKNameC);
			sprintf(SKNameD, "%s", ASKNameD);
			sprintf(SKNameE, "%s", ASKNameE);
			KOK = 1;
		}
		else if (WeaA == 1) {
			sprintf(SKNameA, "%s", BSKNameA);
			sprintf(SKNameB, "%s", BSKNameB);
			sprintf(SKNameC, "%s", BSKNameC);
			sprintf(SKNameD, "%s", BSKNameD);
			sprintf(SKNameE, "%s", BSKNameE);
			KOK = 1;
		}
		else if (WeaA == 2) {
			sprintf(SKNameA, "%s", CSKNameA);
			sprintf(SKNameB, "%s", CSKNameB);
			sprintf(SKNameC, "%s", CSKNameC);
			sprintf(SKNameD, "%s", CSKNameD);
			sprintf(SKNameE, "%s", CSKNameE);
			KOK = 1;
		}
		else if (WeaA == 3) {
			sprintf(SKNameA, "%s", DSKNameA);
			sprintf(SKNameB, "%s", DSKNameB);
			sprintf(SKNameC, "%s", DSKNameC);
			sprintf(SKNameD, "%s", DSKNameD);
			sprintf(SKNameE, "%s", DSKNameE);
			KOK = 1;
		}
		if (Skill >= DSKa && SA == 2 && KOK == 1) {
			printf("[기술 {%s}을(를) 습득했습니다!]\n", SKNameA);
			if (WeaA == 0) {
				ASA = 1;
				SA = ASA;
			}
			else if (WeaA == 1) {
				BSA = 1;
				SA = BSA;
			}
			else if (WeaA == 2) {
				CSA = 1;
				SA = CSA;
			}
			else if (WeaA == 3) {
				DSA = 1;
				SA = DSA;
			}
		}
		if (Skill >= DSKb && SB == 2 && SKExpA > 30 && KOK == 1) {
			printf("[기술 {%s}을(를) 습득했습니다!]\n", SKNameB);
			if (WeaA == 0) {
				ASB = 1;
				SB = ASB;
			}
			else if (WeaA == 1) {
				BSB = 1;
				SB = BSB;
			}
			else if (WeaA == 2) {
				CSB = 1;
				SB = CSB;
			}
			else if (WeaA == 3) {
				DSB = 1;
				SB = DSB;
			}
		}
		if (Skill >= DSKc && SC == 2 && SKExpB > 30 && KOK == 1) {
			printf("[기술 {%s}을(를) 습득했습니다!]\n", SKNameC);
			if (WeaA == 0) {
				ASC = 1;
				SC = ASC;
			}
			else if (WeaA == 1) {
				BSC = 1;
				SC = BSC;
			}
			else if (WeaA == 2) {
				CSC = 1;
				SC = CSC;
			}
			else if (WeaA == 3) {
				DSC = 1;
				SC = DSC;
			}
		}
		if (Skill >= DSKd && SD == 2 && SKExpC > 30 && KOK == 1) {
			printf("[기술 {%s}을(를) 습득했습니다!]\n", SKNameD);
			if (WeaA == 0) {
				ASD = 1;
				SD = ASD;
			}
			else if (WeaA == 1) {
				BSD = 1;
				SD = BSD;
			}
			else if (WeaA == 2) {
				CSD = 1;
				SD = CSD;
			}
			else if (WeaA == 3) {
				DSD = 1;
				SD = DSD;
			}
		}
		if (Skill >= DSKe && SE == 2 && SKExpD > 30 && KOK == 1) {
			printf("[기술 {%s}을(를) 습득했습니다!]\n", SKNameE);
			if (WeaA == 0) {
				ASE = 1;
				SE = ASE;
			}
			else if (WeaA == 1) {
				BSE = 1;
				SE = BSE;
			}
			else if (WeaA == 2) {
				CSE = 1;
				SE = CSE;
			}
			else if (WeaA == 3) {
				DSE = 1;
				SE = DSE;
			}
		}
		At = Str + AtBA;
		HpB = Hp + DtBA;
		DexA = Dex + StBA;
		printf("\n[1.상태창]\n[2.상점]\n[3.기술]\n[4.모험]\n");
		if (choice == 1) {
			printf("[5.스탯 투자]\n[6.저장하기]\n[7.불러오기]\n[8.종료]\n");
		}
		else if (choice == 2) {
			printf("[5.저장하기]\n[6.불러오기]\n[7.종료]\n");
		}
		printf("선택 : ");
		scanf("%d", &choiceA);
		//상태창
		if (choiceA == 1) {
			printf("\n┌─────────────────────────────────────────────────────┐\n");
			printf("│  이름 : %-44s│\n", Name);
			printf("│  직업 : %-44s│\n", Job);
			printf("│  칭호 : %-44s│\n", SName);
			printf("│  소유 자금 : %-39s│\n", Gold);
			printf("│  레벨 : %-44d│\n", Level);
			printf("│  경험치 : %-42s│\n", EXP);
			printf("│  체력 : %-44s│\n│  근력 : %-44s│\n│  민첩 : %-44s│\n│  기술 : %-44d│\n│  공격력 : %-42d│\n", HP, STR, DEX, Skill, At);
			if (choice == 1) {
				printf("│  자유 스탯 : %-39d│\n", Free);
			}
			else if (choice == 2) {
				printf("│  주사위 : %-42d│\n", Dice);
			}
			printf("├─────────────────────────────────────────────────────┤\n");
			printf("│  무기 : ");
			if (WeaA == 0 && WLVp >= 5) {
				printf("%-5s [체력 + %-3d] [근력 + %-3d] [민첩 + %-3d]│", HMName, DtBA, AtBA, StBA);
			}
			else if (WeaA == 0) {
				printf("%-44s│", None);
			}
			else if (WeaA == 1) {
				printf("%-5s [근력 + %-3d] [민첩 + %-3d]%13s│", AaName, AtBA, StBA, Blank);
			}
			else if (WeaA == 2) {
				printf("%-5s [근력 + %-3d] [민첩 + %-3d]%13s│", AbName, AtBA, StBA, Blank);
			}
			else if (WeaA == 3) {
				printf("%-5s [근력 + %-3d] [민첩 + %-3d]%13s│", AcName, AtBA, StBA, Blank);
			}
			printf("\n├─────────────────────────────────────────────────────┤\n");
			printf("│  갑옷 : ");
			if (ArA == 0) {
				printf("%-44s│\n", None);
			}
			else if (ArA == 1) {
				printf("%-14s [체력 + %-3d]%17s│\n", DaName, DtBA, Blank);
			}
			else if (ArA == 2) {
				printf("%-14s [체력 + %-3d]%17s│\n", DbName, DtBA, Blank);
			}
			else if (ArA == 3) {
				printf("%-14s [체력 + %-3d]%17s│\n", DcName, DtBA, Blank);
			}
			else if (ArA == 4) {
				printf("%-14s [체력 + %-3d]%17s│\n", DdName, DtBA, Blank);
			}
			printf("└─────────────────────────────────────────────────────┘\n");
		}
		//상점
		else if (choiceA == 2) {
			printf("\n[상점에 오신 것을 환영합니다.]\n[상점에서는 무기 또는 갑옷을 장착/해체 할 수 있습니다.]\n");
		DD:
			printf("\n[1.구매]\n[2.판매]\n[3.장착]\n[4.해제]\n[5.나가기]\n선택 : ");
			scanf("%d", &choiceC);
			switch (choiceC) {
			case 1: {
				//장비 구매 
			BB:
				printf("\n[1.무기]\n[2.갑옷]\n[3.나가기]\n선택 : ");
				scanf("%d", &choiceE);
				printf("\n");
				switch (choiceE) {
				case 1: {
				AA:
					printf("[1.%s]\n[추가 근력 : %d]\n[추가 민첩 : %d]\n[%d골드]\n\n", AaName, Ata, Sta, Aa);
					if (ASa == 1) {
						printf("[구매완료]\n\n");
					}
					printf("[2.%s]\n[추가 근력 : %d]\n[추가 민첩 : %d]\n[%d골드]\n\n", AbName, Atb, Stb, Aa);
					if (ASb == 1) {
						printf("[구매완료]\n\n");
					}
					printf("[3.%s]\n[추가 근력 : %d]\n[추가 민첩 : %d]\n[%d골드]\n\n", AcName, Atc, Stc, Aa);
					if (ASc == 1) {
						printf("[구매완료]\n\n");
					}
					printf("[4.이전]\n[보유 금액 : %d골드]\n선택 : ", Money);
					scanf("%d", &choiceG);
					switch (choiceG) {
					case 1: {
						if (ASa == 1) {
							printf("[이미 구매한 제품입니다.]\n");
							goto AA;
						}
						if (Money >= Aa) {
							printf("[%s 구매완료]\n", AaName);
							Money = Money - Aa;
							ASa = 1;
						}
						else {
							printf("\n[돈이 부족합니다.]\n");
						}
						break;
					}
					case 2: {
						if (ASb == 1) {
							printf("[이미 구매한 제품입니다.]\n");
							goto AA;
						}
						if (Money >= Aa) {
							printf("[%s 구매완료]\n", AbName);
							Money = Money - Aa;
							ASb = 1;
						}
						else {
							printf("\n[돈이 부족합니다.]\n");
						}
						break;
					}
					case 3: {
						if (ASc == 1) {
							printf("[이미 구매한 제품입니다.]\n");
							goto AA;
						}
						if (Money >= Aa) {
							printf("[%s 구매완료]\n", AcName);
							Money = Money - Aa;
							ASc = 1;
						}
						else {
							printf("\n[돈이 부족합니다.]\n");
						}
						break;
					}
					case 4: {
						goto BB;
						break;
					}
					default: printf("올바른 값을 입력하세요."); goto BB;
					}
					break;
				}
				case 2: {
				CC:
					printf("\n[1.%-14s]\n[추가 체력 : %d]\n[%d골드]\n\n", DaName, DBa, Da);
					if (DSa == 1) {
						printf("[구매완료]\n\n");
					}
					printf("[2.%-14s]\n[추가 체력 : %d]\n[%d골드]\n\n", DbName, DBb, Db);
					if (DSb == 1) {
						printf("[구매완료]\n\n");
					}
					printf("[3.%-14s]\n[추가 체력 : %d]\n[%d골드]\n\n", DcName, DBc, Dc);
					if (DSc == 1) {
						printf("[구매완료]\n\n");
					}
					printf("[4.%-14s]\n[추가 체력 : %d]\n[%d골드]\n\n", DdName, DBd, Dd);
					if (DSd == 1) {
						printf("[구매완료]\n\n");
					}
					printf("[5.나가기]\n[보유 금액 : %d골드]\n선택 : ", Money);
					scanf("%d", &choiceG);
					switch (choiceG) {
					case 1: {
						if (DSa == 1) {
							printf("[이미 구매한 제품입니다.]\n");
							goto CC;
						}
						if (Money >= Da) {
							printf("[%s 구매완료]\n", DaName);
							Money = Money - Da;
							DSa = 1;
						}
						else {
							printf("\n[돈이 부족합니다.]\n");
						}
						break;
					}
					case 2: {
						if (DSb == 1) {
							printf("[이미 구매한 제품입니다.]\n");
							goto CC;
						}
						if (Money >= Db) {
							printf("[%s 구매완료]\n", DbName);
							Money = Money - Db;
							DSb = 1;
						}
						else {
							printf("\n[돈이 부족합니다.]\n");
						}
						break;
					}
					case 3: {
						if (DSc == 1) {
							printf("[이미 구매한 제품입니다.]\n");
							goto CC;
						}
						if (Money >= Dc) {
							printf("[%s 구매완료]\n", DcName);
							Money = Money - Dc;
							DSc = 1;
						}
						else {
							printf("\n[돈이 부족합니다.]\n");
						}
						break;
					}
					case 4: {
						if (DSd == 1) {
							printf("[이미 구매한 제품입니다.]\n");
							goto CC;
						}
						if (Money >= Dd) {
							printf("[%s 구매완료]\n", DdName);
							Money = Money - Dd;
							DSd = 1;
						}
						else {
							printf("\n[돈이 부족합니다.]\n");
						}
						break;
					}
					case 5: {
						goto BB;
						break;
					}
					default: printf("올바른 값을 입력하세요."); goto CC;
					}
					break;
				}
				case 3: {
					goto DD;
					break;
				}
				}
				break;
			}
				  //장비 판매
			  EE:
			case 2: {
				printf("   [갑옷]\n");
				if (DSa == 1) {
					printf("[1.%-14s(보유중)]\n", DaName);
				}
				else {
					printf("[1.%-14s(미보유)]\n", DaName);
				}
				if (DSb == 1) {
					printf("[2.%-14s(보유중)]\n", DbName);
				}
				else {
					printf("[2.%-14s(미보유)]\n", DbName);
				}
				if (DSc == 1) {
					printf("[3.%-14s(보유중)]\n", DcName);
				}
				else {
					printf("[3.%-14s(미보유)]\n", DcName);
				}
				if (DSd == 1) {
					printf("[4.%-14s(보유중)]\n", DdName);
				}
				else {
					printf("[4.%-14s(미보유)]\n", DdName);
				}
				printf("[5.이전]\n");
				printf("[무엇을 선택하시겠습니까?]\n선택 : ");
				scanf("%d", &choiceF);
				switch (choiceF) {
				case 1: {
					if (DSa == 1) {
						printf("\n[%d골드에 판매하시겠습니까?]\n[1.예]\n[2.아니요]\n선택 : ", Da / 2);
						scanf("%d", &choiceK);
						switch (choiceK) {
						case 1: {
							if (ArA != 1) {
								Money = Money + Da / 2;
								printf("[판매되었습니다.\n 현재 골드 : %d]", Money);
								DSa = 0;
							}
							else if (ArA == 1) {
								printf("[착용중인 장비입니다.]\n[판매를 원하신다면 장비를 해제해주세요.]\n");
							}
							break;
						}
						case 2: {
							goto EE;
							break;
						}
						}
					}
					else printf("\n[판매가능한 물품이 아닙니다.]\n"); goto EE;
					break;
				}
				case 2: {
					if (DSb == 1) {
						printf("\n[%d골드에 판매하시겠습니까?]\n[1.예]\n[2.아니요]\n선택 : ", Db / 2);
						scanf("%d", &choiceK);
						switch (choiceK) {
						case 1: {
							if (ArA != 2) {
								Money = Money + Db / 2;
								printf("[판매되었습니다.\n 현재 골드 : %d]", Money);
								DSb = 0;
							}
							else if (ArA == 2) {
								printf("[착용중인 장비입니다.]\n[판매를 원하신다면 장비를 해제해주세요.]\n");
							}
							break;
						}
						case 2: {
							goto EE;
							break;
						}
						}
					}
					else printf("\n[판매가능한 물품이 아닙니다.]\n"); goto EE;
					break;
				}
				case 3: {
					if (DSc == 1) {
						printf("\n[%d골드에 판매하시겠습니까?]\n[1.예]\n[2.아니요]\n선택 : ", Dc / 2);
						scanf("%d", &choiceK);
						switch (choiceK) {
						case 1: {
							if (ArA != 3) {
								Money = Money + Dc / 2;
								printf("[판매되었습니다.\n 현재 골드 : %d]", Money);
								DSc = 0;
							}
							else if (ArA == 3) {
								printf("[착용중인 장비입니다.]\n[판매를 원하신다면 장비를 해제해주세요.]\n");
							}
							break;
						}
						case 2: {
							goto EE;
							break;
						}
						}
					}
					else printf("\n[판매가능한 물품이 아닙니다.]\n"); goto EE;
					break;
				}
				case 4: {
					if (DSd == 1) {
						printf("\n[%d골드에 판매하시겠습니까?]\n[1.예]\n[2.아니요]\n선택 : ", Dd / 2);
						scanf("%d", &choiceK);
						switch (choiceK) {
						case 1: {
							if (ArA != 4) {
								Money = Money + Dd / 2;
								printf("[판매되었습니다.\n 현재 골드 : %d]", Money);
								DSd = 0;
							}
							else if (ArA == 4) {
								printf("[착용중인 장비입니다.]\n[판매를 원하신다면 장비를 해제해주세요.]\n");
							}
							break;
						}
						case 2: {
							goto EE;
							break;
						}
						}
					}
					else printf("\n[판매가능한 물품이 아닙니다.]\n"); goto EE;
					break;
				}
				case 5: break;
				default: printf("\n[올바른 값을 입력하세요.]\n"); goto EE;
				}
				break;
			}
				  //장비 장착
			  WW:
			case 3: {
				printf("\n       [무기]\n");
				if (ASa == 1) {
					printf("[1.%s(보유중)]\n", AaName);
				}
				else {
					printf("[1.%s(미보유)]\n", AaName);
				}
				if (ASb == 1) {
					printf("[2.%s(보유중)]\n", AbName);
				}
				else {
					printf("[2.%s(미보유)]\n", AbName);
				}
				if (ASc == 1) {
					printf("[3.%s(보유중)]\n", AcName);
				}
				else {
					printf("[3.%s(미보유)]\n", AcName);
				}
				printf("[4.다음]\n");
				printf("[장착할 장비를 고르세요.]\n선택 : ");
				scanf("%d", &choiceK);
				switch (choiceK) {
				case 1: {
					if (ASa == 1) {
						printf("[무기에 %s을 장착.]\n", AaName);
						WeaA = 1;
						SA = 2;
						SB = 2;
						SC = 2;
						SD = 2;
						SE = 2;
					}
					else printf("[보유중인 장비가 아닙니다.]\n");
					break;
				}
				case 2: {
					if (ASb == 1) {
						printf("[무기에 %s을 장착.]\n", AbName);
						WeaA = 2;
						SA = 2;
						SB = 2;
						SC = 2;
						SD = 2;
						SE = 2;
					}
					else printf("[보유중인 장비가 아닙니다.]\n");
					break;
				}
				case 3: {
					if (ASc == 1) {
						printf("[무기에 %s을 장착.]\n", AcName);
						WeaA = 3;
						SA = 2;
						SB = 2;
						SC = 2;
						SD = 2;
						SE = 2;
					}
					else printf("[보유중인 장비가 아닙니다.]\n");
					break;
				}
				case 4: break;
				default: printf("[올바른 숫자를 입력하세요.]\n"); goto WW;
				}
				printf("\n       [갑옷]\n");
				if (DSa == 1) {
					printf("[1.%-14s(보유중)]\n", DaName);
				}
				else {
					printf("[1.%-14s(미보유)]\n", DaName);
				}
				if (DSb == 1) {
					printf("[2.%-14s(보유중)]\n", DbName);
				}
				else {
					printf("[2.%-14s(미보유)]\n", DbName);
				}
				if (DSc == 1) {
					printf("[3.%-14s(보유중)]\n", DcName);
				}
				else {
					printf("[3.%-14s(미보유)]\n", DcName);
				}
				if (DSd == 1) {
					printf("[4.%-14s(보유중)]\n", DdName);
				}
				else {
					printf("[4.%-14s(미보유)]\n", DdName);
				}
				printf("[5.이전]\n");
				printf("[장착할 장비를 고르세요.]\n선택 : ");
				scanf("%d", &choiceK);
				switch (choiceK) {
				case 1: {
					if (DSa == 1) {
						printf("[갑옷에 %s을 장착.]\n", DaName);
						ArA = 1;
					}
					else printf("[보유중인 장비가 아닙니다.]\n");
					break;
				}
				case 2: {
					if (DSb == 1) {
						printf("[갑옷에 %s을 장착.]\n", DbName);
						ArA = 2;
					}
					else printf("[보유중인 장비가 아닙니다.]\n");
					break;
				}
				case 3: {
					if (DSc == 1) {
						printf("[갑옷에 %s을 장착.]\n", DcName);
						ArA = 3;
					}
					else printf("[보유중인 장비가 아닙니다.]\n");
					break;
				}
				case 4: {
					if (DSd == 1) {
						printf("[갑옷에 %s을 장착.]\n", DdName);
						ArA = 4;
					}
					else printf("[보유중인 장비가 아닙니다.]\n");
					break;
				}
				case 5: break;
				default: printf("[올바른 숫자를 입력하세요.]\n"); goto WW;
				}
				break;
			}
				  //장비 장착 해제 
			case 4: {
			IU:
				if (WeaA == 1) {
					printf("[장착중인 무기 : %s]\n[해제하시겠습니까?]\n[1.예]\n[2.아니요]\n선택 : ", AaName);
					scanf("%d", &choiceK);
					switch (choiceK) {
					case 1: WeaA = 0; SA = 2; SB = 2; SC = 2; SD = 2; SE = 2; break;
					case 2: break;
					default: printf("[올바른 값을 입력하세요.]"); goto IU;
					}
				}
				else if (WeaA == 2) {
					printf("[장착중인 무기 : %s]\n[해제하시겠습니까?]\n[1.예]\n[2.아니요]\n선택 : ", AbName);
					scanf("%d", &choiceK);
					switch (choiceK) {
					case 1: WeaA = 0; SA = 2; SB = 2; SC = 2; SD = 2; SE = 2; break;
					case 2: break;
					default: printf("[올바른 값을 입력하세요.]"); goto IU;
					}
				}
				else if (WeaA == 3) {
					printf("[장착중인 무기 : %s]\n[해제하시겠습니까?]\n[1.예]\n[2.아니요]\n선택 : ", AcName);
					scanf("%d", &choiceK);
					switch (choiceK) {
					case 1: WeaA = 0; SA = 2; SB = 2; SC = 2; SD = 2; SE = 2; break;
					case 2: break;
					default: printf("[올바른 값을 입력하세요.]"); goto IU;
					}
				}
			II:
				if (ArA == 1) {
					printf("[장착중인 갑옷 : %s]\n[해제하시겠습니까?]\n[1.예]\n[2.아니요]\n선택 : ", DaName);
					scanf("%d", &choiceK);
					switch (choiceK) {
					case 1: ArA = 0; break;
					case 2: break;
					default: printf("[올바른 값을 입력하세요.]"); goto II;
					}
				}
				else if (ArA == 2) {
					printf("[장착중인 갑옷 : %s]\n[해제하시겠습니까?]\n[1.예]\n[2.아니요]\n선택 : ", DbName);
					scanf("%d", &choiceK);
					switch (choiceK) {
					case 1: ArA = 0; break;
					case 2: break;
					default: printf("[올바른 값을 입력하세요.]"); goto II;
					}
				}
				else if (ArA == 3) {
					printf("[장착중인 갑옷 : %s]\n[해제하시겠습니까?]\n[1.예]\n[2.아니요]\n선택 : ", DcName);
					scanf("%d", &choiceK);
					switch (choiceK) {
					case 1: ArA = 0; break;
					case 2: break;
					default: printf("[올바른 값을 입력하세요.]"); goto II;
					}
				}
				else if (ArA == 4) {
					printf("[장착중인 갑옷 : %s]\n[해제하시겠습니까?]\n[1.예]\n[2.아니요]\n선택 : ", DdName);
					scanf("%d", &choiceK);
					switch (choiceK) {
					case 1: ArA = 0; break;
					case 2: break;
					default: printf("[올바른 값을 입력하세요.]"); goto II;
					}
				}
				else {
					printf("[착용중인 장비가 없습니다.]");
				}
				break;
			}
			case 5: goto START;
			default: printf("[올바른 값을 입력하세요.]\n"); goto DD;
			}
		}
		//스킬
		else if (choiceA == 3) {
			printf("\n┌─────────────────────────────────┐\n");
			switch (SA) {
			case 1: printf("│ %-25s(LV.%2d)│\n", SKNameA, SKExpA / SKDExp); break;
			case 2: printf("│ %-22s(사용불가)│\n│ 요구 기술 : %20d│\n", SKNameA, DSKa); break;
			}
			printf("├─────────────────────────────────┤\n");
			switch (SB) {
			case 1: printf("│ %-25s(LV.%2d)│\n", SKNameB, SKExpB / SKDExp); break;
			case 2: printf("│ %-22s(사용불가)│\n│ 요구 기술 : %20d│\n", SKNameB, DSKb); break;
			}
			printf("├─────────────────────────────────┤\n");
			switch (SC) {
			case 1: printf("│ %-25s(LV.%2d)│\n", SKNameC, SKExpC / SKDExp); break;
			case 2: printf("│ %-22s(사용불가)│\n│ 요구 기술 : %20d│\n", SKNameC, DSKc); break;
			}
			printf("├─────────────────────────────────┤\n");
			switch (SD) {
			case 1: printf("│ %-25s(LV.%2d)│\n", SKNameD, SKExpD / SKDExp); break;
			case 2: printf("│ %-22s(사용불가)│\n│ 요구 기술 : %20d│\n", SKNameD, DSKd); break;
			}
			printf("├─────────────────────────────────┤\n");
			switch (SE) {
			case 1: printf("│ %-25s(LV.%2d)│\n", SKNameE, SKExpE / SKDExp); break;
			case 2: printf("│ %-22s(사용불가)│\n│ 요구 기술 : %20d│\n", SKNameE, DSKe); break;
			}
			printf("└─────────────────────────────────┘\n\n");
		}
		//전투
		else if (choiceA == 4) {
			if (Level >= 20 && Ta == 0) {
				printf("[새로운 사냥터 개방]\n");
				Ta = 1;
			}
			if (Level >= 20) {
				MapLvA = 40;
				MapNameA= "고블린 점령지";
			}
			if (Level >= 30 && Tb == 0) {
				printf("[새로운 사냥터 개방]\n");
				Tb = 1;
			}
			if (Level >= 30) {
				MapLvB = 50;
				MapNameB = "설원의 오크 제국";
			}
			if (Level >= 40 && Tc == 0) {
				printf("[새로운 사냥터 개방]\n");
				Tc = 1;
			}
			if (Level >= 40) {
				MapLvC = 60;
				MapNameC = "던전 심층부";
			}
			if (Level >= 50 && Td == 0) {
				printf("[새로운 사냥터 개방]\n");
				Td = 1;
			}
			if (Level >= 50) {
				MapLvD = 70;
				MapNameD = "붉은 심장 산맥";
			}
			if (ATTACK == 8 && Te == 0) {
				printf("[새로운 사냥터 개방]\n");
				Te = 1;
			}
		Z:
			printf("\n[1.%-16s(Level %2d 이상 권장)]\n[2.%-16s(Level %2d 이상 권장)]\n[3.%-16s(Level %2d 이상 권장)]\n[4.%-16s(Level %2d 이상 권장)]\n", MapNameA, MapLvA, MapNameB, MapLvB, MapNameC, MapLvC, MapNameD, MapLvD);
			if (ATTACK == 8) {
				printf("[5.%-16s(Level %2d 이상 권장)]\n[6.%-16s(Level %2d 이상 권장)]\n[7.나가기]\n", MapNameE, MapLvE, MapNameF, MapLvF);
				if (Auto == 0) {
					printf("[8.자동 사냥]\n");
				}
			}
			else {
				printf("[5.나가기]\n");
				if (Auto == 0) {
					printf("[6.자동 사냥]\n");
				}
			}
			printf("선택 : ");
			scanf("%d", &choiceB);
		K:
			At = Str + AtBA;
			HpB = Hp + DtBA;
			HpA = HpB * 10;
			switch (choiceB) {
			case 1: {
				MName = "칼든 고블린"; MA = 1; MS = 1;
				if (Level >= 20) {
					MName = "황금 고블린"; MA = 40; MS = 5;
				}
				break;
			}
			case 2: {
				MName = "정찰대 오크"; MA = 10; MS = 2;
				if (Level >= 30) {
					MName = "오크 군단장"; MA = 50; MS = 6;
				}
				break;
			}
			case 3: {
				MName = "산성 슬라임"; MA = 20; MS = 3;
				if (Level >= 40) {
					MName = "인간형 기갑 슬라임"; MA = 60; MS = 7;
				}
				break;
			}
			case 4: {
				MName = "붉은 오우거"; MA = 30; MS = 4;
				if (Level >= 50) {
					MName = "트윈 헤드 오우거"; MA = 70; MS = 8;
				}
				break;
			}
			case 5: {
				if (ATTACK == 8) {
					MName = "왕국 기사단장"; MA = 80; MS = 9;
				}
				if (Auto == 1 && ATTACK != 8) {
					Auto = 0; goto Z;
				}
				else continue;
				break;
			}
			case 6: {
				if (ATTACK == 8) {
					MName = "죽음의 성전사"; MA = 90; MS = 10;
				}
				if (Auto == 0 && ATTACK != 8) {
					Auto = 1; goto Z;
				}
				else printf("[올바른 값을 입력하세요.]\n"); goto Z;
				break;
			}
			case 7: {
				if (Auto == 1 && ATTACK == 8) {
					Auto = 0; goto Z;
				}
				else if (ATTACK == 8) {
					continue;
				}
				else printf("[올바른 값을 입력하세요.]\n"); goto Z;
			}
			case 8: {
				if (Auto == 0) {
					Auto = 1; goto Z;
				}
				else printf("[올바른 값을 입력하세요.]\n"); goto Z;
			}
			default: printf("[올바른 값을 입력하세요.]\n"); goto Z;
			}
			MLV = (Level - 2) + rand() % 4;
			if (MLV < MA) {
				MLV = MA + rand() % 2;
			}
			if (MLV < 1) {
				MLV = 1;
			}
			switch (MS) {
			case 1: {
				if (MLV > 15) {
					MLV = 15;
				}
				MStr = 4 + 4 * (MLV - 1) * 0.9 + rand() % 2;
				MDex = 4 + 4 * (MLV - 1) * 0.9 + rand() % 2;
				MHP = 4 + 4 * (MLV - 1) * 0.9 + rand() % 2;
				MExp = 3 + 3 * (MLV - 1) * 0.5 + rand() % 2;
				MHPA = MHP * 10;
				MMoney = 30 + rand() % 10 + 10 * (MLV - 1);
				break;
			}
			case 2: {
				if (MLV > 25) {
					MLV = 25;
				}
				MStr = 4 + 4 * (MLV - 1) * 1.0 + rand() % 5;
				MDex = 4 + 4 * (MLV - 1) * 1.0 + rand() % 5;
				MHP = 4 + 4 * (MLV - 1) * 1.0 + rand() % 5;
				MExp = 3 + 3 * (MLV - 1) * 1.4 + rand() % 5;
				MHPA = MHP * 10;
				MMoney = 30 + rand() % 10 + 15 * (MLV - 1);
				break;
			}
			case 3: {
				if (MLV > 35) {
					MLV = 35;
				}
				MStr = 4 + 4 * (MLV - 1) * 1.1 + rand() % 5;
				MDex = 4 + 4 * (MLV - 1) * 1.1 + rand() % 5;
				MHP = 4 + 4 * (MLV - 1) * 1.1 + rand() % 5;
				MExp = 3 + 3 * (MLV - 1) * 2.3 + rand() % 5;
				MHPA = MHP * 10;
				MMoney = 30 + rand() % 100 + 20 * (MLV - 1);
				break;
			}
			case 4: {
				if (MLV > 45) {
					MLV = 45;
				}
				MStr = 4 + 5 * (MLV - 1) * 1.2 + rand() % 5;
				MDex = 4 + 5 * (MLV - 1) * 1.2 + rand() % 5;
				MHP = 4 + 5 * (MLV - 1) * 1.5 + rand() % 5;
				MExp = 3 + 3 * (MLV - 1) * 3.2 + rand() % 5;
				MHPA = MHP * 10;
				MMoney = 30 + rand() % 500 + 25 * (MLV - 1);
				break;
			}
			case 5: {
				if (MLV > 55) {
					MLV = 55;
				}
				MStr = 4 + 5 * (MLV - 1) * 1.3 + rand() % 5;
				MDex = 4 + 5 * (MLV - 1) * 1.3 + rand() % 5;
				MHP = 4 + 5 * (MLV - 1) * 3 + rand() % 5;
				MExp = 3 + 3 * (MLV - 1) * 4.1 + rand() % 5;
				MHPA = MHP * 10;
				MMoney = 30 + rand() % 1000 + 30 * (MLV - 1);
				break;
			}
			case 6: {
				if (MLV > 65) {
					MLV = 65;
				}
				MStr = 4 + 5 * (MLV - 1) * 1.4 + rand() % 5;
				MDex = 4 + 5 * (MLV - 1) * 1.4 + rand() % 5;
				MHP = 4 + 5 * (MLV - 1) * 3.5 + rand() % 5;
				MExp = 3 + 3 * (MLV - 1) * 5.0 + rand() % 5;
				MHPA = MHP * 10;
				MMoney = 30 + rand() % 2000 + 35 * (MLV - 1);
				break;
			}
			case 7: {
				if (MLV > 75) {
					MLV = 75;
				}
				MStr = 4 + 5 * (MLV - 1) * 1.5 + rand() % 5;
				MDex = 4 + 5 * (MLV - 1) * 1.5 + rand() % 5;
				MHP = 4 + 5 * (MLV - 1) * 4 + rand() % 5;
				MExp = 3 + 3 * (MLV - 1) * 5.7 + rand() % 5;
				MHPA = MHP * 10;
				MMoney = 30 + rand() % 3000 + 40 * (MLV - 1);
				break;
			}
			case 8: {
				MStr = 4 + 5 * (MLV - 1) * 1.6 + rand() % 5;
				MDex = 4 + 5 * (MLV - 1) * 1.6 + rand() % 5;
				MHP = 4 + 5 * (MLV - 1) * 4.5 + rand() % 5;
				MExp = 3 + 3 * (MLV - 1) * 6.4  + rand() % 5;
				MHPA = MHP * 10;
				MMoney = 30 + rand() % 5000 + 45 * (MLV - 1);
				break;
			}
			case 9: {
				MStr = 4 + 5 * (MLV - 1) * 1.8 + rand() % 5;
				MDex = 4 + 5 * (MLV - 1) * 1.8 + rand() % 5;
				MHP = 4 + 5 * (MLV - 1) * 5 + rand() % 5;
				MExp = 3 + 3 * (MLV - 1) * 7 + rand() % 5;
				MHPA = MHP * 10;
				MMoney = 30 + rand() % 5000 + 45 * (MLV - 1);
				break;
			}
			case 10: {
				MStr = 4 + 5 * (MLV - 1) * 2 + rand() % 5;
				MDex = 4 + 5 * (MLV - 1) * 2 + rand() % 5;
				MHP = 4 + 5 * (MLV - 1) * 6 + rand() % 5;
				MExp = 3 + 3 * (MLV - 1) * 8 + rand() % 5;
				MHPA = MHP * 10;
				MMoney = 30 + rand() % 5000 + 45 * (MLV - 1);
				break;
			}
			}
		ATA:
			if (ATTACK == 1) {
				for (int co = 0; co < 40; co++) {
					printf("◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈\n");
					delay(25);
				}
				for (int co = 0; co < 40; co++) {
					printf("\n");
					delay(25);
				}
				MName = BossNameA;
				MLV = 50;
				MStr = 500;
				MDex = 250;
				MHP = 2000;
				MExp = 1000;
				MHPA = MHP * 10;
				MMoney = 10000;
			}
			else if (ATTACK == 3) {
				for (int co = 0; co < 40; co++) {
					printf("◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈\n");
					delay(25);
				}
				for (int co = 0; co < 40; co++) {
					printf("\n");
					delay(25);
				}
				MName = BossNameB;
				MLV = 60;
				MStr = 700;
				MDex = 350;
				MHP = 3500;
				MExp = 2000;
				MHPA = MHP * 10;
				MMoney = 15000;
			}
			else if (ATTACK == 5) {
				for (int co = 0; co < 40; co++) {
					printf("◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈\n");
					delay(25);
				}
				for (int co = 0; co < 40; co++) {
					printf("\n");
					delay(25);
				}
				MName = BossNameC;
				MLV = 70;
				MStr = 900;
				MDex = 500;
				MHP = 5000;
				MExp = 3000;
				MHPA = MHP * 10;
				MMoney = 20000;
			}
			else if (ATTACK == 7) {
				for (int co = 0; co < 40; co++) {
					printf("◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈\n");
					delay(25);
				}
				for (int co = 0; co < 40; co++) {
					printf("\n");
					delay(25);
				}
				MName = BossNameD;
				MLV = 80;
				MStr = 1000;
				MDex = 700;
				MHP = 6500;
				MExp = 4000;
				MHPA = MHP * 10;
				MMoney = 50000;
			}
			else if (ATTACK == 9) {
				for (int co = 0; co < 40; co++) {
					printf("◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈\n");
					delay(25);
				}
				for (int co = 0; co < 40; co++) {
					printf("\n");
					delay(25);
				}
				MName = BossNameE;
				MLV = 100;
				MStr = 1200;
				MDex = 1000;
				MHP = 7000;
				MExp = 0;
				MHPA = MHP * 10;
				MMoney = 99999999;
			}
			else if (ATTACK == 10) {
				for (int co = 0; co < 40; co++) {
					printf("◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈◈\n");
					delay(25);
				}
				for (int co = 0; co < 40; co++) {
					printf("\n");
					delay(25);
				}
				MName = BossNameF;
				MLV = 100;
				MStr = 1500;
				MDex = 1500;
				MHP = 10000;
				MExp = 0;
				MHPA = MHP * 10;
				MMoney = 0;
			}
			if (ATTACK == 11) {
				MName = BossNameTrue;
				MLV = Level * Level;
				MStr = At * At;
				MDex = DexA * DexA;
				MHP = HpB * HpB;
				MExp = 0;
				MHPA = HpB * 10;
				MMoney = 0;
			}
			printf("\n[%s(Lv.%d)이 나타났다!]\n", MName, MLV);
			printf("[%s(LV.%d)]\n[체력 : %d(%d)]\n[공격력 : %d]\n[민첩 : %d]\n", MName, MLV, MHP * 10, MHP, MStr, MDex);
			printf("[%s(LV.%d)]\n[체력 : %d(%d)]\n[공격력 : %d]\n[민첩 : %d]\n", Name, Level, HpB * 10, HpB, At, DexA);
			if (ATTACK == 10) {
				if (BOSSA == 0) {
					printf("[마왕이 %s를 흡수합니다.]\n", BossNameA);
					MLV = MLV + 10;
					MStr = MStr + 100;
					MDex = MDex + 100;
					MHP = MHP + 100;
					MHPA = MHP * 10;
					printf("[체력 : %d(%d)]\n[근력 : %d]\n[민첩 : %d]\n", MHP * 10, MHP, MStr, MDex);
				}
				if (BOSSB == 0) {
					printf("[마왕이 %s를 흡수합니다.]\n", BossNameB);
					MLV = MLV + 10;
					MStr = MStr + 100;
					MDex = MDex + 100;
					MHP = MHP + 100;
					MHPA = MHP * 10;
					printf("[체력 : %d(%d)]\n[근력 : %d]\n[민첩 : %d]\n", MHP * 10, MHP, MStr, MDex);
				}
				if (BOSSC == 0) {
					printf("[마왕이 %s를 흡수합니다.]\n", BossNameC);
					MLV = MLV + 10;
					MStr = MStr + 100;
					MDex = MDex + 100;
					MHP = MHP + 100;
					MHPA = MHP * 10;
					printf("[체력 : %d(%d)]\n[근력 : %d]\n[민첩 : %d]\n", MHP * 10, MHP, MStr, MDex);
				}
				if (BOSSD == 0) {
					printf("[마왕이 %s를 흡수합니다.]\n", BossNameD);
					MLV = MLV + 10;
					MStr = MStr + 100;
					MDex = MDex + 100;
					MHP = MHP + 100;
					MHPA = MHP * 10;
					printf("[체력 : %d(%d)]\n[근력 : %d]\n[민첩 : %d]\n", MHP * 10, MHP, MStr, MDex);
				}
			}
			At = Str + AtBA;
			HpB = Hp + DtBA;
			HpA = HpB * 10;
			DexA = Dex + StBA;
		X:
			if (ATTACK % 2 != 1 && ATTACK != 10) {
				printf("\n[1.싸운다.]\n[2.도망간다.]\n선택 : ");
				scanf("%d", &choiceD);
			}
			else choiceD = 1;
			switch (choiceD) {
			case 1: {
				SKUSE = 4; //스킬 사용 횟수 
				while (1) {
				e:
					printf("[%s(Lv.%d)\n체력 : %d/%d]\n", MName, MLV, MHPA, MHP * 10);
					printf("[%s(Lv.%d)\n체력 : %d/%d]\n", Name, Level, HpA, HpB * 10);
					printf("[스킬 사용가능 횟수 : %d]\n", SKUSE);
				ee:
					if (HpA < 0 || MHPA < 0) {
						break;
					}
					if (Auto == 0) {
						printf("\n[1.공격]\n[2.기술]\n선택 : ");
						scanf("%d", &choiceD);
					}
					else if (Auto == 1) {
						choiceD = 1;
					}
					switch (choiceD) {
					case 1: {

						L = At + (rand() % At) / 2;
						printf("[%d만큼의 피해를 입혔습니다!]\n", L);
						MHPA = MHPA - L;
						break;
					}
					case 2: {
					g:
						if (SA == 1) {
							printf("\n[1.%-12s(LV.%d)]", SKNameA, SKExpA / SKDExp);
						}
						else if (SA == 2) {
							printf("\n[1.%-12s(미습득)]", SKNameA);
						}
						if (SB == 1) {
							printf("\n[2.%-12s(LV.%d)]", SKNameB, SKExpB / SKDExp);
						}
						else if (SB == 2) {
							printf("\n[2.%-12s(미습득)]", SKNameB);
						}
						if (SC == 1) {
							printf("\n[3.%-12s(LV.%d)]", SKNameC, SKExpC / SKDExp);
						}
						else if (SC == 2) {
							printf("\n[3.%-12s(미습득)]", SKNameC);
						}
						if (SD == 1) {
							printf("\n[4.%-12s(LV.%d)]", SKNameD, SKExpD / SKDExp);
						}
						else if (SD == 2) {
							printf("\n[4.%-12s(미습득)]", SKNameD);
						}
						if (SE == 1) {
							printf("\n[5.%-12s(LV.%d)]", SKNameE, SKExpE / SKDExp);
						}
						else if (SE == 2) {
							printf("\n[5.%-12s(미습득)]", SKNameE);
						}
						printf("\n[6.나가기]\n선택 : ");
						scanf("%d", &choiceD);
						switch (choiceD) {
						case 1: {
							if (SA == 1 && SKUSE > 0) {
								printf("[다음 공격의 피해량의 %d%% 감소]\n", 60 + (SKExpA / SKDExp) * 2);
								printf("[%d%%의 확률로 추가 공격]\n", 20 + (SKExpA / SKDExp) * 5);
								Bar = 1;
								SKUSE = SKUSE - 1;
								if (SKExpA == 99) {
									printf("[스킬이 최고 레벨이 되었습니다!]\n");
								}
								if (SKExpA < 100) {
									SKExpA = SKExpA + 1;
								}
							}
							else  if (SA == 2) {
								printf("[사용이 불가능한 기술입니다.]\n"); goto g;
							}
							else if (SKUSE <= 0) {
								printf("[스킬 사용 횟수를 모두 소모했습니다.]\n"); goto ee;
							}
							break;
						}
						case 2: {
							if (SB == 1 && SKUSE > 0) {
								printf("[다음 공격을 %d%%로 흘린 후 치명타 공격]\n", 30 + (SKExpB / SKDExp) * 6);
								Har = 1;
								SKUSE = SKUSE - 1;
								if (SKExpB == 99) {
									printf("[스킬이 최고 레벨이 되었습니다!]\n");
								}
								if (SKExpB < 100) {
									SKExpB = SKExpB + 1;
								}
							}
							else  if (SB == 2) {
								printf("[사용이 불가능한 기술입니다.]\n"); goto g;
							}
							else if (SKUSE <= 0) {
								printf("[스킬 사용 횟수를 모두 소모했습니다.]\n"); goto ee;
							}
							break;
						}
						case 3: {
							if (SC == 1 && SKUSE > 0) {
								printf("[%d%%의 공격력으로 공격]\n", 200 + (SKExpC / SKDExp) * 100);
								L = At + (rand() % At) / 2;
								printf("[%d만큼의 피해를 입혔습니다.]\n", L * (2 + (SKExpC / SKDExp) * 1));
								MHPA = MHPA - L * (2 + (SKExpC / SKDExp) * 1);
								SKUSE = SKUSE - 1;
								if (SKExpC == 99) {
									printf("[스킬이 최고 레벨이 되었습니다!]\n");
								}
								if (SKExpC < 100) {
									SKExpC = SKExpC + 1;
								}
							}
							else  if (SC == 2) {
								printf("[사용이 불가능한 기술입니다.]\n"); goto g;
							}
							else if (SKUSE <= 0) {
								printf("[스킬 사용 횟수를 모두 소모했습니다.]\n"); goto ee;
							}
							break;
						}
						case 4: {
							if (SD == 1 && SKUSE > 0) {
								printf("[공격력 %d%%증폭]\n", 200 + (SKExpD / SKDExp) * 50);
								At = At * 2 + (SKExpD / SKDExp) * 0.5;
								SKUSE = SKUSE - 1;
								if (SKExpD == 99) {
									printf("[스킬이 최고 레벨이 되었습니다!]\n");
								}
								if (SKExpD < 100) {
									SKExpD = SKExpD + 1;
								}
							}
							else  if (SD == 2) {
								printf("[사용이 불가능한 기술입니다.]\n"); goto g;
							}
							else if (SKUSE <= 0) {
								printf("[스킬 사용 횟수를 모두 소모했습니다.]\n"); goto ee;
							}
							break;
						}
						case 5: {
							if (SE == 1 && SKUSE > 0) {
								printf("[%d%%의 공격력으로 %d회 공격]\n", 100 + (SKExpE / SKDExp) * 100, 3 + (SKExpE / SKDExp) * 3);
								SKUSE = SKUSE - 1;
								for (e = 1; e < (5 + (SKExpE / SKDExp) * 2); e++) {
									printf("[%d만큼의 피해를 입혔습니다.]\n", At * (100 + (SKExpE / SKDExp) * 100));
									MHPA = MHPA - At * (100 + (SKExpE / SKDExp) * 100);
								}
								if (SKExpE == 99) {
									printf("[스킬이 최고 레벨이 되었습니다!]\n"); goto ee;
								}
								if (SKExpE < 100) {
									SKExpE = SKExpE + 1;
								}
							}
							else  if (SE == 2) {
								printf("[사용이 불가능한 기술입니다.]\n"); goto g;
							}
							else if (SKUSE <= 0) {
								printf("[스킬 사용 횟수를 모두 소모했습니다.]\n"); goto ee;
							}
							break;
						}
						case 6: {
							goto e;
							break;
						}
						default: printf("[올바른 값을 입력하세요.]\n"); goto g;
						}
						break;
					}
					default: printf("[올바른 값을 입력하세요.]\n"); goto ee;
					}
					if (HpA < 0 || MHPA < 0) {
						break;
					}
					Ex = DexA - MDex;
					if (Ex > 70) {
						Ex = 70;
					}
					else if (Ex < -70) {
						Ex = -70;
					}
					if (Ex > rand() % 100) {
						printf("[추가 공격!]\n");
						printf("%s(Lv.%d)\n체력 : %d/%d\n", MName, MLV, MHPA, MHP * 10);
						printf("%s(Lv.%d)\n체력 : %d/%d\n", Name, Level, HpA, HpB * 10);
						goto ee;
					}
					if (Bar == 1) {
						ML = MStr + rand() % (MStr / 2);
						FL = (ML * (1 - 0.6 + (SKExpA / SKDExp) * 0.02));
						if (FL < 0) {
							FL = 0;
						}
						printf("[%s이(가) %d만큼의 피해를 입혔습니다.]\n", MName, FL);
						HpA = HpA - FL;
						Bar = 0;
						if (rand() % 100 < 20 + (SKExpA / SKDExp) * 5) {
							printf("[추가 공격!]\n");
							printf("%s(Lv.%d)\n체력 : %d/%d\n", MName, MLV, MHPA, MHP * 10);
							printf("%s(Lv.%d)\n체력 : %d/%d\n", Name, Level, HpA, HpB * 10);
							goto ee;
						}
					}
					else if (Har == 1) {
						if (rand() % 100 < 30 + (SKExpB / SKDExp) * 6) {
							printf("[%s의 공격을 흘리고 타격!]\n", MName);
							L = At + (rand() % At) / 2;
							printf("[%d만큼의 피해를 입혔습니다.]\n", L * 2);
							Har = 0;
							MHPA = MHPA - L * 2;
						}
						else {
							ML = MStr + rand() % (MStr / 2);
							printf("[%s이(가) %d만큼의 피해를 입혔습니다.]\n", MName, ML);
							HpA = HpA - ML;
						}
					}
					else if (Bar == 0 && Har == 0) {
					V:
						ML = MStr + rand() % (MStr / 2);
						HpA = HpA - ML;
						printf("[%s이 %d만큼의 피해를 입혔습니다.]\n", MName, ML);
					}
					else {
						if (Ex + rand() % 100 < 0) {
							printf("[상대방의 추가 공격!]\n");
							goto V;
						}
					}
				}
				if (HpA > 0 && MHPA < 1) {
					if (choiceB == 5 || choiceB == 6) {
						printf("{죽음께서 함께하신다...}\n");
						delay(1000);
					}
					printf("[전투에서 승리하셨습니다!]\n[%d의 경험치를 획득합니다!]\n[%d만큼의 골드를 획득합니다!]\n", MExp, MMoney);
					Exp = Exp + MExp;
					if (ATTACK == 1) {
						printf("\n\n\n\n{끼에에에에에에에에에에에에에에에에에에에에에에에에에엨!!!!!!!!!!!!!!!!!!!!!}\n\n\n\n");
						delay(1000);
						printf("[%s을(를) 처치했습니다.]\n[종말이 다가오고 있습니다.]\n[대비하세요.]\n[더욱 강해져야 합니다.]\n", MName);
						BOSSA = 1;
					}
					else if (ATTACK == 3) {
						printf("\n\n\n\n{명예로운 죽음을 위하여...}\n\n\n\n");
						delay(1000);
						printf("[%s을(를) 처치했습니다.]\n[종말이 다가오고 있습니다.]\n[대비하세요.]\n[더욱 강해져야 합니다.]\n", MName);
						BOSSB = 1;
					}
					else if (ATTACK == 5) {
						printf("{∮Ⅹ∏ː∀∑...}\n");
						delay(500);
						if (Death < 3) {
							printf("최");
							delay(300);
							printf("초");
							delay(300);
							printf("로");
							delay(500);
							printf("돌");
							delay(300);
							printf("아");
							delay(300);
							printf("가");
							delay(300);
							printf("라");
							delay(300);
							printf(".");
							delay(500);
							printf(".");
							delay(500);
							printf(".");
							delay(500);
							printf("그");
							delay(300);
							printf("리");
							delay(300);
							printf("고");
							delay(2000);
							printf("\n\n\n[안정화 작업에 들어갑니다.]\n");
							for (int co = 0; co < 40; co) {
								printf("\n");
								delay(20);
							}
						}
						printf("[%s을(를) 처치했습니다.]\n[종말이 다가오고 있습니다.]\n[대비하세요.]\n[더욱 강해져야 합니다.]\n", MName);
						BOSSC = 1;
					}
					else if (ATTACK == 7) {
						printf("{영");
						delay(100);
						printf("원");
						delay(100);
						printf("한");
						delay(100);
						printf("건");
						delay(1000);
						printf(".");
						delay(500);
						printf(".");
						delay(500);
						printf(".");
						delay(500);
						printf("없");
						delay(1000);
						printf("다");
						delay(1000);
						printf(".}\n");
						delay(500);
						printf("[%s을(를) 처치했습니다.]\n[종말이 다가오고 있습니다.]\n[대비하세요.]\n[더욱 강해져야 합니다.]\n", MName);
						BOSSD = 1;
						if (Death < 3) {
							printf("처");
							delay(100);
							printf("음 ");
							delay(1000);
							printf("그");
							delay(100);
							printf("것");
							delay(100);
							printf("이 ");
							delay(500);
							printf("다");
							delay(100);
							printf("가");
							delay(100);
							printf("온");
							delay(100);
							printf("곳");
							delay(100);
							printf("에");
							delay(100);
							printf("서");
							delay(100);
							printf("기");
							delay(100);
							printf("다");
							delay(100);
							printf("려");
							delay(100);
							printf("\n\n\n[안정화 작업에 들어갑니다.]\n");
							for (int co = 0; co < 40; co) {
								printf("\n");
								delay(20);
							}
							for (int co = 0; co < 40; co) {
								printf("\n");
								delay(20);
							}
						}
					}
					else if (ATTACK == 9) {
						printf("[%s을(를) 처치했습니다.]\n[세상은 이제 평", MName);
						printf("화");
						delay(100);
						printf("로");
						delay(200);
						printf("워");
						delay(400);
						printf("질");
						delay(800);
						printf("것");
						delay(1600);
						for (int co = 0; co < 70; co++) {
							printf("\n");
						}
						printf("아니 \n");
						delay(1000);
						printf("그럴 순 없다.\n");
						delay(1000);
						printf("내가 살아있는한\n");
						delay(1000);
						printf("오직\n");
						delay(1000);
						printf("죽음께서만이 계실뿐이다.\n");
						delay(3000);
						for (int co = 0; co < 1000; co++) {
							printf("오류 !");
							delay(1);
						}
						delay(1000);
						printf("\n\n\n[안정화 작업에 들어갑니다.]\n");
						for (int co = 0; co < 40; co) {
							printf("\n");
							delay(20);
						}
						printf("나는 아직 살아있다.");
						delay(2000);
						ATTACK = ATTACK + 1;
						goto ATA;
					}
					//승리 엔딩
					else if (ATTACK == 10) {
						printf("{죽");
						delay(100);
						printf("음");
						delay(100);
						printf("이");
						delay(100);
						printf("시");
						delay(100);
						printf("어");
						delay(500);
						printf(".");
						delay(300);
						printf(".");
						delay(300);
						printf("왜");
						delay(500);
						printf(".");
						delay(300);
						printf(".");
						delay(300);
						printf("나");
						delay(500);
						printf("를");
						delay(100);
						printf("}\n");
						delay(1000);
						if (Death < 3) {
							for (int co = 0; co < 10; co) {
								printf("13번을 눌러라");
								delay(10);
							}
							for (int co = 0; co < 70; co++) {
								printf("\n");
							}
						}
						ATTACK = ATTACK + 1;
						printf("\n[마왕의 정체가 황제임을 알아내고 그를 죽였습니다.]\n[이제 세상은 평화로워지고 몬스터는 사라질 것입니다.]\n");
						delay(3000);
						printf("[그리고 당신도..]\n");
						delay(10000);
						for (int co = 0; co < 40; co++) {
							printf("{죽음을 맞이해야해.}\n");
						}
						for (int co = 0; co < 400; co++) {
							printf("하하");
							delay(3);
						}
						for (int co = 0; co < 40; co++) {
							printf("\n");
						}
						goto ATA;
					}
					else if (ATTACK == 11){
						printf("모든 것이 제자리에 돌아가고 세상은 평화를 되찾았습니다.\n");
					}
					if (ATTACK % 2 == 1) {
						if (Skill < 250) {
							printf("[%s의 왕을 처치한 보상으로 전체 스텟이 %d만큼 오릅니다.]\n", Direction, ATTACK * 5);
							Hp = Hp + (ATTACK * 5);
							Str = Str + (ATTACK * 5);
							Dex = Dex + (ATTACK * 5);
							Skill = Skill + (ATTACK * 5);
						}
						else if (Skill >= 250) {
							printf("[%s의 왕을 처치한 보상과 한계치에 이른 기술로 인해 전체 스텟이 %d만큼 오릅니다.]\n", Direction, ATTACK * 10);
							Hp = Hp + (ATTACK * 10);
							Str = Str + (ATTACK * 10);
							Dex = Dex + (ATTACK * 10);
							Skill = Skill + (ATTACK * 10);
						}
						ATTACK = ATTACK + 1;
					}
					if (WeaA == 0 && MU == 0) {
						WeaExpP = WeaExpP + MExp;
						while (WeaExpP / WeaDExpP >= 1) {
							WLVp = WLVp + 1;
							WeaExpP = WeaExpP - WeaDExpP;
							WeaDExpP = 3 * WLVp + 5;

						}
					}
					if (WeaA == 0 && MU == 1) {
						WeaExpH = WeaExpH + MExp;
						while (WeaExpH / WeaDExpH >= 1) {
							WLVh = WLVh + 1;
							WeaExpH = WeaExpH - WeaDExpH;
							printf("[신체가 강화되었습니다!]\n");
							WeaDExpH = 3 * WLVh * (1 + 1 * (WLVh / 10)) + 5;
						}
					}
					else if (WeaA == 1) {
						WeaExpA = WeaExpA + MExp;
						while (WeaExpA / WeaDExpA >= 1) {
							WLVa = WLVa + 1;
							WeaExpA = WeaExpA - WeaDExpA;
							printf("[무기가 성장했습니다!]\n");
							WeaDExpA = 3 * WLVa * (1 + 1 * (WLVa / 10)) + 5;
						}
					}
					else if (WeaA == 2) {
						WeaExpB = WeaExpB + MExp;
						while (WeaExpB / WeaDExpB >= 1) {
							WLVb = WLVb + 1;
							WeaExpB = WeaExpB - WeaDExpB;
							printf("[무기가 성장했습니다!]\n");
							WeaDExpB = 3 * WLVb * (1 + 1 * (WLVb / 10)) + 5;
						}
					}
					else if (WeaA == 3) {
						WeaExpC = WeaExpC + MExp;
						while (WeaExpC / WeaDExpC > 1) {
							WLVc = WLVc + 1;
							WeaExpC = WeaExpC - WeaDExpC;
							printf("[무기가 성장했습니다!]\n");
							WeaDExpC = 3 * WLVc * (1 + 1 * (WLVc / 10)) + 5;
						}
					}
					Money = Money + MMoney;
					while (Exp / DExp >= 1) {
						printf("[레벨업 하셨습니다!]\n\n");
						if (choice == 1) {
							if (Skill < 250) {
								Free = Free + 10;
								Hp = Hp + 1;
								Str = Str + 1;
								Dex = Dex + 1;
								Skill = Skill + 1;
							}
							else if (Skill >= 250 && LIM == 0) {
								printf("[기술의 한계에 다달았습니다.]\n[레벨업 시 획득 자유 스탯 + 10]\n[전체 성장 능력치 + 1]\n[기술 스탯은 더 이상 증가하지 않습니다.]\n");
								LIM = 1;
							}
							else if (Skill >= 250 && LIM == 1) {
								Free = Free + 20;
								Hp = Hp + 2;
								Str = Str + 2;
								Dex = Dex + 2;
								Skill = Skill + 2;
							}
						}
						else if (choice == 2) {
							Dice = Dice + PDice;
							printf("[주사위 %d개 획득]\n[현재 주사위 : %d개]\n", PDice, Dice);
						AK:
							if (Skill >= 250 && LIM == 0) {
								printf("[기술의 한계에 다달았습니다.]\n[레벨업 시 획득 최대 스탯 + 10]\n[기술 스탯은 더 이상 증가하지 않습니다.]\n");
								LIM = 1;
							}
							if (Skill < 250) {
								HL = rand() % 5 + 1;
								printf("[체력 %d 상승]\n", HL);
								SL = rand() % 5 + 1;
								printf("[근력 %d 상승]\n", SL);
								DL = rand() % 5 + 1;
								printf("[민첩 %d 상승]\n", DL);
								SKL = rand() % 5 + 1;
								printf("[기술 %d 상승]\n", SKL);
							}
							else {
								HL = rand() % 15 + 1;
								printf("[체력 %d 상승]\n", HL);
								SL = rand() % 15 + 1;
								printf("[근력 %d 상승]\n", SL);
								DL = rand() % 15 + 1;
								printf("[민첩 %d 상승]\n", DL);
							}
						AL:
							if (Dice == 0) {
								printf("[가지고 계신 주사위가 없어 강제적으로 결정되었습니다.]\n");
								Hp = Hp + HL;
								Str = Str + SL;
								Dex = Dex + DL;
								Skill = Skill + SKL;
							}
							else if (Dice >= 1) {
								printf("[능력치 상승량을 이것으로 결정하시겠습니까?]\n[1.예]\n[2.아니요(주사위 1개 사용)]\n선택 : ");
								scanf("%d", &choiceL);
								if (choiceL == 1) {
									Hp = Hp + HL;
									Str = Str + SL;
									Dex = Dex + DL;
									Skill = Skill + SKL;
									if (Skill >= 250) {
										Left = Skill - 250;
									BP:
										printf("[기술의 한계치를 넘은 스탯 %d개를 무엇에 부여하시겠습니까?]\n[1.체력]\n[2.힘]\n[3.민첩]\n선택 : ", Left);
										scanf("%d", &choiceP);
										if (choiceP == 1) {
											Hp = Hp + Left;
											printf("[체력이 %d만큼 상승했습니다.]\n", Left);
										}
										else if (choiceP == 2) {
											Str = Str + Left;
											printf("[근력이 %d만큼 상승했습니다.]\n", Left);
										}
										else if (choiceP == 3) {
											Dex = Dex + Left;
											printf("[민첩이 %d만큼 상승했습니다.]\n", Left);
										}
										else if (choice != 1 && choiceP != 2 && choiceP != 3) {
											printf("[올바른 값을 입력하세요.]\n"); goto BP;
										}
										Skill = 250 - Left;
									}
								}
								else if (choiceL == 2) {
									Dice = Dice - 1;
									printf("[남은 주사위 개수 : %d]\n", Dice);
									goto AK;
								}
								else {
									printf("[올바른 값을 입력해주세요.]\n"); goto AL;
								}
							}
							if (choice == 2 && Skill == 250 && LIM == 0) {
								printf("[기술의 한계에 다달았습니다.]\n[레벨업 시 획득 최대 스탯 + 10]\n[기술 스탯은 더 이상 증가하지 않습니다.]\n");
								LIM = 1;
							}
						}
						Exp = Exp - DExp;
						Level = Level + 1;
						DExp = 3 * Level * (1 + 2 * (Level / 10)) + 5;
						if (WeaA == 0 && WLVp >= 5) {
							AtBA = HAt;
							StBA = HSt;
							DtBA = HDt;
							Job = "무투가";
							if (MU == 0) {
								printf("[히든직업 무투가 개방]\n");
								MU = 1;
							}
						}
					}
					printf("\n[현재 골드 : %d]\n", Money);
					printf("[현재 경험치 : %d/%d]\n", Exp, DExp);
				}
				else if (HpA < 1 && MHPA > 0) {
					Money = Money * 3 / 4;
					Death = Death + 1;
					Exp = Exp / 2;
					printf("[전투에서 패배하셨습니다.]\n[돈의 1/4을 잃습니다.]\n[현재 경험치의 1/2를 잃습니다.]\n");
					if (Death % 3 != 0 || Death == 0) {
						printf("[3회 사망시 마다 무작위 스탯 1개를 잃습니다.]\n[현재 사망 횟수 : %d]\n", Death);
					}
					if (Death % 3 == 0 && Death > 0) {
						printf("[3번째 사망입니다.]\n");
						if (LIM == 0) {
							RA = rand() % 4;
						}
						else if (LIM == 1) {
							RA = rand() % 3;
						}
						switch (RA) {
						case 0: if (Str > 1) {
							Str = Str - 1; printf("[근력이 1 감소했습니다.]\n");
							break;
						}
						case 1: if (Dex > 1) {
							Dex = Dex - 1; printf("[민첩이 1 감소했습니다.]\n");
							break;
						}
						case 2: if (Hp > 1) {
							Hp = Hp - 1; printf("[체력이 10(1) 감소했습니다.]\n");
							break;
						}
						case 3: if (Skill > 1) {
							Skill = Skill - 1; printf("[기술이 1 감소했습니다.]\n");
							break;
						}
						}
						printf("[현재 사망 횟수 : %d]\n", Death);
					}
					printf("\n[현재 소지금 : %d]\n", Money);
					if (ATTACK % 2 == 1 && ATTACK != 9 && ATTACK != 10) {
						printf("[%s을(를) 처치하는데 실패했습니다.]\n[종말이 다가오고 있습니다.]\n[대비하세요.]\n[더욱 강해져야 합니다.]\n", MName);
						ATTACK = ATTACK + 1;
					}
					//죽음 엔딩 A 
					else if (ATTACK == 9) {
						printf("[당신과 세상은 죽음을 맞이했습니다.]\n");
						return 0;
					}
					//죽음 엔딩 B
					else if (ATTACK == 10) {
						printf("[마왕의 정체가 황제라는 것을 알아냈지만 결국 죽음을 맞이했습니다.]\n");
						return 0;
					}
					if (ATTACK == 11) {
						printf("[하지만 너무 늦어버린듯 합니다.]\n");
						printf("[죽음이 모든 것을 덮쳤습니다.]");
						return 0; 
					}
				}
			Q:
				if (Auto == 1) {
					printf("[1.계속하기]\n[2.나가기]\n선택 : ");
					scanf("%d", &AUTO);
					switch (AUTO) {
					case 1: goto K;
					case 2: Auto = 0; break;
					default: printf("[올바른 값을 입력해주세요.]\n"); goto Q;
					}
				}
				break;
			}
			case 2: {
				if (Ex + rand() % 100 < 0) {
					ML = MStr + rand() % (MStr / 2);
					printf("\n[도망치는데 실패했습니다!.]\n\n[%d만큼의 피해를 입었습니다.]\n", ML * 2);
					HpA = HpA - ML * 2;
					goto e;
				}
				else printf("\n[도망치는데 성공했습니다.]\n\n"); goto Z;
			T:
				if (Auto == 1) {
					printf("[1.계속하기]\n[2.나가기]\n선택 : ");
					scanf("%d", &AUTO);
					switch (AUTO) {
					case 1: goto K;
					case 2: Auto = 0; break;
					default: printf("[올바른 값을 입력해주세요.]\n"); goto T;
					}
				}
			}
			default: printf("[올바른 값을 입력하세요.]\n"); goto X;
			}
		}
		if (choice == 1) {
			if (choiceA == 5) {
			c:
				printf("[자유 스탯 : %d]\n\n", Free);
				printf("[체력은 스탯 1이 늘어나면 10이 상승합니다.]\n");
				printf("[근력은 공격력에 영향을 미칩니다.]\n");
				printf("[민첩은 추가 공격과 도망에 영향을 미칩니다.]\n");
				printf("[기술은 새로운 기술을 얻기위해 필요합니다.]\n\n");
				printf("[1.체력]\n[2.근력]\n[3.민첩]\n[4.기술]\n[5.나가기]\n선택 : ");
				scanf("%d", &choiceA);
			b:
				if (choiceA == 1) {
					printf("[체력] : %d + ", Hp);
					scanf("%d", &B);
					if (B > Free || B < 0) {
						printf("[올바른 값을 입력해주세요.]\n");
						goto b;
					}
					Hp = Hp + B;
					HpB = Hp + DtBA;
					HpA = HpB * 10;
					Free = Free - B;
				}
				else if (choiceA == 2) {
					printf("[근력] : %d + ", Str);
					scanf("%d", &B);
					if (B > Free || B < 0) {
						printf("[올바른 값을 입력해주세요.]\n");
						goto b;
					}
					Str = Str + B;
					Free = Free - B;
				}
				else if (choiceA == 3) {
					printf("[민첩] : %d + ", Dex);
					scanf("%d", &B);
					if (B > Free || B < 0) {
						printf("[올바른 값을 입력해주세요.]");
						goto b;
					}
					Dex = Dex + B;
					Free = Free - B;
				}
				else if (choiceA == 4 && LIM == 0) {
					printf("[기술] : %d + ", Skill);
					scanf("%d", &B);
					if (B > Free || B < 0) {
						printf("[올바른 값을 입력해주세요.]");
						goto b;
					}
					Skill = Skill + B;
					Free = Free - B;
					if (Skill > 250) {
						Left = Skill - 250;
						Free = Free + Left;
						Skill = 250;
						printf("[기술의 한계치를 넘은 스탯은 자유스탯으로 변환됩니다.]\n");
					}
				}
				else if (choiceA == 4 && LIM == 1) {
					printf("[더 이상 기술을 증가시킬 수 없습니다.]\n");
				}
				else if (choiceA == 5) {
					continue;
				}
				else {
					printf("[올바른 값을 입력해주세요.]"); goto c;
				}
			}
			//파일 저장의 버뮤다 삼각지대
			if (Triple == 1) {
			BA:
				printf("[1.%s]\n[2.%s]\n[3.%s]\n[4.나가기]\n선택 : ", SaveNamea, SaveNameb, SaveNamec);
				scanf("%d", &choiceO);
				if (choiceO == 4) {
					continue;
				}
				if (SaveA == choiceO || SaveB == choiceO || SaveC == choiceO) {
					while (1) {
						printf("[주의! 저장시 이전 파일을 덮어씌우게 됩니다!]\n[1.저장]\n[2.나가기]\n선택 : ");
						scanf("%d", &choiceL);
						if (choiceL == 1) {
							break;
						}
						else if (choiceL == 2) {
							goto START;
						}
						else printf("[올바른 값을 입력하세요.]\n");
					}
				}
				else if (choiceO != 1 && choiceO != 2 && choiceO != 3) {
					printf("[올바른 값을 입력하세요.]\n"); goto OTL;
				}
				if (choiceO == 1) {
					sprintf(SaveNamea, "%-6s %-8s(LV.%3d)", Job, Name, Level);
				}
				else if (choiceO == 2) {
					sprintf(SaveNameb, "%-6s %-8s(LV.%3d)", Job, Name, Level);
				}
				else if (choiceO == 3) {
					sprintf(SaveNamec, "%-6s %-8s(LV.%3d)", Job, Name, Level);
				}
				if (choiceO == 1) {
					FILE* outA;
					outA = fopen("텍스트 RPG Savefile 1.dat", "wb");
					if (outA != NULL) {
						SaveA = choiceO;
						fwrite(&WLVa, sizeof(int), 1, outA);
						fwrite(&WLVb, sizeof(int), 1, outA);
						fwrite(&WLVc, sizeof(int), 1, outA);
						fwrite(&WLVh, sizeof(int), 1, outA);
						fwrite(&WLVp, sizeof(int), 1, outA);
						fwrite(&choice, sizeof(int), 1, outA);
						fwrite(&Name, sizeof(char), 40, outA);
						fwrite(&SName, sizeof(char), 40, outA);
						fwrite(&Level, sizeof(int), 1, outA);
						fwrite(&Exp, sizeof(int), 1, outA);
						fwrite(&DExp, sizeof(int), 1, outA);
						fwrite(&WeaExpA, sizeof(int), 1, outA);
						fwrite(&WeaDExpA, sizeof(int), 1, outA);
						fwrite(&WeaExpB, sizeof(int), 1, outA);
						fwrite(&WeaDExpB, sizeof(int), 1, outA);
						fwrite(&WeaExpC, sizeof(int), 1, outA);
						fwrite(&WeaDExpC, sizeof(int), 1, outA);
						fwrite(&WeaExpH, sizeof(int), 1, outA);
						fwrite(&WeaDExpH, sizeof(int), 1, outA);
						fwrite(&WeaExpP, sizeof(int), 1, outA);
						fwrite(&WeaDExpP, sizeof(int), 1, outA);
						fwrite(&Hp, sizeof(int), 1, outA);
						fwrite(&Str, sizeof(int), 1, outA);
						fwrite(&Dex, sizeof(int), 1, outA);
						fwrite(&Skill, sizeof(int), 1, outA);
						fwrite(&Money, sizeof(int), 1, outA);
						fwrite(&SKExpA, sizeof(int), 1, outA);
						fwrite(&SKExpB, sizeof(int), 1, outA);
						fwrite(&SKExpC, sizeof(int), 1, outA);
						fwrite(&SKExpD, sizeof(int), 1, outA);
						fwrite(&SKExpE, sizeof(int), 1, outA);
						fwrite(&SA, sizeof(int), 1, outA);
						fwrite(&SB, sizeof(int), 1, outA);
						fwrite(&SC, sizeof(int), 1, outA);
						fwrite(&SD, sizeof(int), 1, outA);
						fwrite(&SE, sizeof(int), 1, outA);
						fwrite(&ASa, sizeof(int), 1, outA);
						fwrite(&ASb, sizeof(int), 1, outA);
						fwrite(&ASc, sizeof(int), 1, outA);
						fwrite(&DSa, sizeof(int), 1, outA);
						fwrite(&DSb, sizeof(int), 1, outA);
						fwrite(&DSc, sizeof(int), 1, outA);
						fwrite(&DSd, sizeof(int), 1, outA);
						fwrite(&Free, sizeof(int), 1, outA);
						fwrite(&WeaA, sizeof(int), 1, outA);
						fwrite(&ArA, sizeof(int), 1, outA);
						fwrite(&Death, sizeof(int), 1, outA);
						fwrite(&LIM, sizeof(int), 1, outA);
						fwrite(&ATTACK, sizeof(int), 1, outA);
						fwrite(&Ta, sizeof(int), 1, outA);
						fwrite(&Tb, sizeof(int), 1, outA);
						fwrite(&Tc, sizeof(int), 1, outA);
						fwrite(&Td, sizeof(int), 1, outA);
						fwrite(&Te, sizeof(int), 1, outA);
						fwrite(&MU, sizeof(int), 1, outA);
						fclose(outA);
						printf("[파일을 저장했습니다.]\n");
					}
				}
				else if (choiceO == 2) {
					FILE* outB;
					outB = fopen("텍스트 RPG Savefile 2.dat", "wb");
					if (outB != NULL) {
						SaveB = choiceO;
						fwrite(&WLVa, sizeof(int), 1, outB);
						fwrite(&WLVb, sizeof(int), 1, outB);
						fwrite(&WLVc, sizeof(int), 1, outB);
						fwrite(&WLVh, sizeof(int), 1, outB);
						fwrite(&WLVp, sizeof(int), 1, outB);
						fwrite(&choice, sizeof(int), 1, outB);
						fwrite(&Name, sizeof(char), 40, outB);
						fwrite(&SName, sizeof(char), 40, outB);
						fwrite(&Level, sizeof(int), 1, outB);
						fwrite(&Exp, sizeof(int), 1, outB);
						fwrite(&DExp, sizeof(int), 1, outB);
						fwrite(&WeaExpA, sizeof(int), 1, outB);
						fwrite(&WeaDExpA, sizeof(int), 1, outB);
						fwrite(&WeaExpB, sizeof(int), 1, outB);
						fwrite(&WeaDExpB, sizeof(int), 1, outB);
						fwrite(&WeaExpC, sizeof(int), 1, outB);
						fwrite(&WeaDExpC, sizeof(int), 1, outB);
						fwrite(&WeaExpH, sizeof(int), 1, outB);
						fwrite(&WeaDExpH, sizeof(int), 1, outB);
						fwrite(&WeaExpP, sizeof(int), 1, outB);
						fwrite(&WeaDExpP, sizeof(int), 1, outB);
						fwrite(&Hp, sizeof(int), 1, outB);
						fwrite(&Str, sizeof(int), 1, outB);
						fwrite(&Dex, sizeof(int), 1, outB);
						fwrite(&Skill, sizeof(int), 1, outB);
						fwrite(&Money, sizeof(int), 1, outB);
						fwrite(&SKExpA, sizeof(int), 1, outB);
						fwrite(&SKExpB, sizeof(int), 1, outB);
						fwrite(&SKExpC, sizeof(int), 1, outB);
						fwrite(&SKExpD, sizeof(int), 1, outB);
						fwrite(&SKExpE, sizeof(int), 1, outB);
						fwrite(&SA, sizeof(int), 1, outB);
						fwrite(&SB, sizeof(int), 1, outB);
						fwrite(&SC, sizeof(int), 1, outB);
						fwrite(&SD, sizeof(int), 1, outB);
						fwrite(&SE, sizeof(int), 1, outB);
						fwrite(&ASa, sizeof(int), 1, outB);
						fwrite(&ASb, sizeof(int), 1, outB);
						fwrite(&ASc, sizeof(int), 1, outB);
						fwrite(&DSa, sizeof(int), 1, outB);
						fwrite(&DSb, sizeof(int), 1, outB);
						fwrite(&DSc, sizeof(int), 1, outB);
						fwrite(&DSd, sizeof(int), 1, outB);
						fwrite(&Free, sizeof(int), 1, outB);
						fwrite(&WeaA, sizeof(int), 1, outB);
						fwrite(&ArA, sizeof(int), 1, outB);
						fwrite(&Death, sizeof(int), 1, outB);
						fwrite(&LIM, sizeof(int), 1, outB);
						fwrite(&ATTACK, sizeof(int), 1, outB);
						fwrite(&Ta, sizeof(int), 1, outB);
						fwrite(&Tb, sizeof(int), 1, outB);
						fwrite(&Tc, sizeof(int), 1, outB);
						fwrite(&Td, sizeof(int), 1, outB);
						fwrite(&Te, sizeof(int), 1, outB);
						fwrite(&MU, sizeof(int), 1, outB);
						fclose(outB);
						printf("[파일을 저장했습니다.]\n");
					}
				}
				else if (choiceO == 3) {
					FILE* outC;
					outC = fopen("텍스트 RPG Savefile 3.dat", "wb");
					if (outC != NULL) {
						SaveC = choiceO;
						fwrite(&WLVa, sizeof(int), 1, outC);
						fwrite(&WLVb, sizeof(int), 1, outC);
						fwrite(&WLVc, sizeof(int), 1, outC);
						fwrite(&WLVh, sizeof(int), 1, outC);
						fwrite(&WLVp, sizeof(int), 1, outC);
						fwrite(&choice, sizeof(int), 1, outC);
						fwrite(&Name, sizeof(char), 40, outC);
						fwrite(&SName, sizeof(char), 40, outC);
						fwrite(&Level, sizeof(int), 1, outC);
						fwrite(&Exp, sizeof(int), 1, outC);
						fwrite(&DExp, sizeof(int), 1, outC);
						fwrite(&WeaExpA, sizeof(int), 1, outC);
						fwrite(&WeaDExpA, sizeof(int), 1, outC);
						fwrite(&WeaExpB, sizeof(int), 1, outC);
						fwrite(&WeaDExpB, sizeof(int), 1, outC);
						fwrite(&WeaExpC, sizeof(int), 1, outC);
						fwrite(&WeaDExpC, sizeof(int), 1, outC);
						fwrite(&WeaExpH, sizeof(int), 1, outC);
						fwrite(&WeaDExpH, sizeof(int), 1, outC);
						fwrite(&WeaExpP, sizeof(int), 1, outC);
						fwrite(&WeaDExpP, sizeof(int), 1, outC);
						fwrite(&Hp, sizeof(int), 1, outC);
						fwrite(&Str, sizeof(int), 1, outC);
						fwrite(&Dex, sizeof(int), 1, outC);
						fwrite(&Skill, sizeof(int), 1, outC);
						fwrite(&Money, sizeof(int), 1, outC);
						fwrite(&SKExpA, sizeof(int), 1, outC);
						fwrite(&SKExpB, sizeof(int), 1, outC);
						fwrite(&SKExpC, sizeof(int), 1, outC);
						fwrite(&SKExpD, sizeof(int), 1, outC);
						fwrite(&SKExpE, sizeof(int), 1, outC);
						fwrite(&SA, sizeof(int), 1, outC);
						fwrite(&SB, sizeof(int), 1, outC);
						fwrite(&SC, sizeof(int), 1, outC);
						fwrite(&SD, sizeof(int), 1, outC);
						fwrite(&SE, sizeof(int), 1, outC);
						fwrite(&ASa, sizeof(int), 1, outC);
						fwrite(&ASb, sizeof(int), 1, outC);
						fwrite(&ASc, sizeof(int), 1, outC);
						fwrite(&DSa, sizeof(int), 1, outC);
						fwrite(&DSb, sizeof(int), 1, outC);
						fwrite(&DSc, sizeof(int), 1, outC);
						fwrite(&DSd, sizeof(int), 1, outC);
						fwrite(&Free, sizeof(int), 1, outC);
						fwrite(&WeaA, sizeof(int), 1, outC);
						fwrite(&ArA, sizeof(int), 1, outC);
						fwrite(&Death, sizeof(int), 1, outC);
						fwrite(&LIM, sizeof(int), 1, outC);
						fwrite(&ATTACK, sizeof(int), 1, outC);
						fwrite(&Ta, sizeof(int), 1, outC);
						fwrite(&Tb, sizeof(int), 1, outC);
						fwrite(&Tc, sizeof(int), 1, outC);
						fwrite(&Td, sizeof(int), 1, outC);
						fwrite(&Te, sizeof(int), 1, outC);
						fwrite(&MU, sizeof(int), 1, outC);
						fclose(outC);
						printf("[파일을 저장했습니다.]\n");
					}
				}
				FILE* out;
				out = fopen("텍스트 RPG.dat", "wb");
				fwrite(&SaveA, sizeof(int), 1, out);
				fwrite(&SaveB, sizeof(int), 1, out);
				fwrite(&SaveC, sizeof(int), 1, out);
				fwrite(&SaveNamea, sizeof(char), 40, out);
				fwrite(&SaveNameb, sizeof(char), 40, out);
				fwrite(&SaveNamec, sizeof(char), 40, out);
				continue;
			}
			if (Triple == 1) {
			BO:
				while (1) {
					printf("[1.%s]\n[2.%s]\n[3.%s]\n[4.나가기]\n선택 : ", SaveNamea, SaveNameb, SaveNamec);
					scanf("%d", &choiceO);
					if (choiceO == 4) {
						break;
					}
					if (choiceO == SaveA || choiceO == SaveB || choiceO == SaveC) {
						break;
					}
					else if (choiceO != 1 && choiceO != 2 && choiceO != 3) {
						if (choice == 0){
							printf("[불러올 파일이 없습니다.]\n"); goto NEW;
						} 
						printf("[올바른 값을 입력하세요.]\n");
					}
					else if (choice == 0) {
						printf("[불러올 파일이 없습니다.]\n"); goto NEW;
					}
					else printf("[불러올 파일이 없습니다.]\n"); goto START;
				}
				if (choiceO == 1) {
					FILE* outA;
					outA = fopen("텍스트 RPG Savefile 1.dat", "rb");
					if (outA != NULL) {
						fread(&WLVa, sizeof(int), 1, outA);
						fread(&WLVb, sizeof(int), 1, outA);
						fread(&WLVc, sizeof(int), 1, outA);
						fread(&WLVh, sizeof(int), 1, outA);
						fread(&WLVp, sizeof(int), 1, outA);
						fread(&choice, sizeof(int), 1, outA);
						fread(&Name, sizeof(char), 40, outA);
						fread(&SName, sizeof(char), 40, outA);
						fread(&Level, sizeof(int), 1, outA);
						fread(&Exp, sizeof(int), 1, outA);
						fread(&DExp, sizeof(int), 1, outA);
						fread(&WeaExpA, sizeof(int), 1, outA);
						fread(&WeaDExpA, sizeof(int), 1, outA);
						fread(&WeaExpB, sizeof(int), 1, outA);
						fread(&WeaDExpB, sizeof(int), 1, outA);
						fread(&WeaExpC, sizeof(int), 1, outA);
						fread(&WeaDExpC, sizeof(int), 1, outA);
						fread(&WeaExpH, sizeof(int), 1, outA);
						fread(&WeaDExpH, sizeof(int), 1, outA);
						fread(&WeaExpP, sizeof(int), 1, outA);
						fread(&WeaDExpP, sizeof(int), 1, outA);
						fread(&Hp, sizeof(int), 1, outA);
						fread(&Str, sizeof(int), 1, outA);
						fread(&Dex, sizeof(int), 1, outA);
						fread(&Skill, sizeof(int), 1, outA);
						fread(&Money, sizeof(int), 1, outA);
						fread(&SKExpA, sizeof(int), 1, outA);
						fread(&SKExpB, sizeof(int), 1, outA);
						fread(&SKExpC, sizeof(int), 1, outA);
						fread(&SKExpD, sizeof(int), 1, outA);
						fread(&SKExpE, sizeof(int), 1, outA);
						fread(&SA, sizeof(int), 1, outA);
						fread(&SB, sizeof(int), 1, outA);
						fread(&SC, sizeof(int), 1, outA);
						fread(&SD, sizeof(int), 1, outA);
						fread(&SE, sizeof(int), 1, outA);
						fread(&ASa, sizeof(int), 1, outA);
						fread(&ASb, sizeof(int), 1, outA);
						fread(&ASc, sizeof(int), 1, outA);
						fread(&DSa, sizeof(int), 1, outA);
						fread(&DSb, sizeof(int), 1, outA);
						fread(&DSc, sizeof(int), 1, outA);
						fread(&DSd, sizeof(int), 1, outA);
						fread(&Free, sizeof(int), 1, outA);
						fread(&WeaA, sizeof(int), 1, outA);
						fread(&ArA, sizeof(int), 1, outA);
						fread(&Death, sizeof(int), 1, outA);
						fread(&ATTACK, sizeof(int), 1, outA);
						fread(&Ta, sizeof(int), 1, outA);
						fread(&Tb, sizeof(int), 1, outA);
						fread(&Tc, sizeof(int), 1, outA);
						fread(&Td, sizeof(int), 1, outA);
						fread(&Te, sizeof(int), 1, outA);
						fread(&MU, sizeof(int), 1, outA);
						fclose(outA);
						printf("[파일을 불러왔습니다.]\n");
					}
				}
				else if (choiceO == 2) {
					FILE* outB;
					outB = fopen("텍스트 RPG Savefile 2.dat", "rb");
					if (outB != NULL) {
						fread(&WLVa, sizeof(int), 1, outB);
						fread(&WLVb, sizeof(int), 1, outB);
						fread(&WLVc, sizeof(int), 1, outB);
						fread(&WLVh, sizeof(int), 1, outB);
						fread(&WLVp, sizeof(int), 1, outB);
						fread(&choice, sizeof(int), 1, outB);
						fread(&Name, sizeof(char), 40, outB);
						fread(&SName, sizeof(char), 40, outB);
						fread(&Level, sizeof(int), 1, outB);
						fread(&Exp, sizeof(int), 1, outB);
						fread(&DExp, sizeof(int), 1, outB);
						fread(&WeaExpA, sizeof(int), 1, outB);
						fread(&WeaDExpA, sizeof(int), 1, outB);
						fread(&WeaExpB, sizeof(int), 1, outB);
						fread(&WeaDExpB, sizeof(int), 1, outB);
						fread(&WeaExpC, sizeof(int), 1, outB);
						fread(&WeaDExpC, sizeof(int), 1, outB);
						fread(&WeaExpH, sizeof(int), 1, outB);
						fread(&WeaDExpH, sizeof(int), 1, outB);
						fread(&WeaExpP, sizeof(int), 1, outB);
						fread(&WeaDExpP, sizeof(int), 1, outB);
						fread(&Hp, sizeof(int), 1, outB);
						fread(&Str, sizeof(int), 1, outB);
						fread(&Dex, sizeof(int), 1, outB);
						fread(&Skill, sizeof(int), 1, outB);
						fread(&Money, sizeof(int), 1, outB);
						fread(&SKExpA, sizeof(int), 1, outB);
						fread(&SKExpB, sizeof(int), 1, outB);
						fread(&SKExpC, sizeof(int), 1, outB);
						fread(&SKExpD, sizeof(int), 1, outB);
						fread(&SKExpE, sizeof(int), 1, outB);
						fread(&SA, sizeof(int), 1, outB);
						fread(&SB, sizeof(int), 1, outB);
						fread(&SC, sizeof(int), 1, outB);
						fread(&SD, sizeof(int), 1, outB);
						fread(&SE, sizeof(int), 1, outB);
						fread(&ASa, sizeof(int), 1, outB);
						fread(&ASb, sizeof(int), 1, outB);
						fread(&ASc, sizeof(int), 1, outB);
						fread(&DSa, sizeof(int), 1, outB);
						fread(&DSb, sizeof(int), 1, outB);
						fread(&DSc, sizeof(int), 1, outB);
						fread(&DSd, sizeof(int), 1, outB);
						fread(&Free, sizeof(int), 1, outB);
						fread(&WeaA, sizeof(int), 1, outB);
						fread(&ArA, sizeof(int), 1, outB);
						fread(&Death, sizeof(int), 1, outB);
						fread(&LIM, sizeof(int), 1, outB);
						fread(&ATTACK, sizeof(int), 1, outB);
						fread(&Ta, sizeof(int), 1, outB);
						fread(&Tb, sizeof(int), 1, outB);
						fread(&Tc, sizeof(int), 1, outB);
						fread(&Td, sizeof(int), 1, outB);
						fread(&Te, sizeof(int), 1, outB);
						fread(&MU, sizeof(int), 1, outB);
						fclose(outB);
						printf("[파일을 불러왔습니다.]\n");
					}
				}
				else if (choiceO == 3) {
					FILE* outC;
					outC = fopen("텍스트 RPG Savefile 3.dat", "rb");
					if (outC != NULL) {
						fread(&WLVa, sizeof(int), 1, outC);
						fread(&WLVb, sizeof(int), 1, outC);
						fread(&WLVc, sizeof(int), 1, outC);
						fread(&WLVh, sizeof(int), 1, outC);
						fread(&WLVp, sizeof(int), 1, outC);
						fread(&choice, sizeof(int), 1, outC);
						fread(&Name, sizeof(char), 40, outC);
						fread(&SName, sizeof(char), 40, outC);
						fread(&Level, sizeof(int), 1, outC);
						fread(&Exp, sizeof(int), 1, outC);
						fread(&DExp, sizeof(int), 1, outC);
						fread(&WeaExpA, sizeof(int), 1, outC);
						fread(&WeaDExpA, sizeof(int), 1, outC);
						fread(&WeaExpB, sizeof(int), 1, outC);
						fread(&WeaDExpB, sizeof(int), 1, outC);
						fread(&WeaExpC, sizeof(int), 1, outC);
						fread(&WeaDExpC, sizeof(int), 1, outC);
						fread(&WeaExpH, sizeof(int), 1, outC);
						fread(&WeaDExpH, sizeof(int), 1, outC);
						fread(&WeaExpP, sizeof(int), 1, outC);
						fread(&WeaDExpP, sizeof(int), 1, outC);
						fread(&Hp, sizeof(int), 1, outC);
						fread(&Str, sizeof(int), 1, outC);
						fread(&Dex, sizeof(int), 1, outC);
						fread(&Skill, sizeof(int), 1, outC);
						fread(&Money, sizeof(int), 1, outC);
						fread(&SKExpA, sizeof(int), 1, outC);
						fread(&SKExpB, sizeof(int), 1, outC);
						fread(&SKExpC, sizeof(int), 1, outC);
						fread(&SKExpD, sizeof(int), 1, outC);
						fread(&SKExpE, sizeof(int), 1, outC);
						fread(&SA, sizeof(int), 1, outC);
						fread(&SB, sizeof(int), 1, outC);
						fread(&SC, sizeof(int), 1, outC);
						fread(&SD, sizeof(int), 1, outC);
						fread(&SE, sizeof(int), 1, outC);
						fread(&ASa, sizeof(int), 1, outC);
						fread(&ASb, sizeof(int), 1, outC);
						fread(&ASc, sizeof(int), 1, outC);
						fread(&DSa, sizeof(int), 1, outC);
						fread(&DSb, sizeof(int), 1, outC);
						fread(&DSc, sizeof(int), 1, outC);
						fread(&DSd, sizeof(int), 1, outC);
						fread(&Free, sizeof(int), 1, outC);
						fread(&WeaA, sizeof(int), 1, outC);
						fread(&ArA, sizeof(int), 1, outC);
						fread(&Death, sizeof(int), 1, outC);
						fread(&LIM, sizeof(int), 1, outC);
						fread(&ATTACK, sizeof(int), 1, outC);
						fread(&Ta, sizeof(int), 1, outC);
						fread(&Tb, sizeof(int), 1, outC);
						fread(&Tc, sizeof(int), 1, outC);
						fread(&Td, sizeof(int), 1, outC);
						fread(&Te, sizeof(int), 1, outC);
						fread(&MU, sizeof(int), 1, outC);
						fclose(outC);
						printf("[파일을 불러왔습니다.]\n");
					}
				}
				FILE* out;
				out = fopen("텍스트 RPG.dat", "rb");
				fread(&SaveA, sizeof(int), 1, out);
				fread(&SaveB, sizeof(int), 1, out);
				fread(&SaveC, sizeof(int), 1, out);
				fread(&SaveNamea, sizeof(char), 40, out);
				fread(&SaveNameb, sizeof(char), 40, out);
				fread(&SaveNamec, sizeof(char), 40, out);
				if (choice == 0) {
					goto NEW;
				}
				continue;
			}
			//파일 저장 
		OTL:
			if (choiceA == 6) {
				goto BA;
			}
			else if (choiceA == 7) {
				goto BO;
			}
			else if (choiceA == 8) {
			KO:
				printf("[종료하시겠습니까?]\n[1.예]\n[2.아니요]\n선택 : ");
				scanf("%d", &choiceH);
				if (choiceH == 1) {
					return 0;
				}
				else if (choiceH == 2) {
					continue;
				}
				else printf("[올바른 값을 입력하세요.]\n"); goto KO;
			}
		}
		if (choice == 2) {
			if (choiceA == 5) {
				goto BA;
			}
			else if (choiceA == 6) {
				goto BO;
			}
			else if (choiceA == 7) {
			OO:
				printf("[종료하시겠습니까?]\n[1.예]\n[2.아니요]\n선택 : ");
				scanf("%d", &choiceH);
				if (choiceH == 1) {
					return 0;
				}
				else if (choiceH == 2) {
					continue;
				}
				else printf("[올바른 값을 입력하세요.]\n"); goto OO;
			}
		}
		if (choiceA == 13) {
			printf("당신은 이 세상의 비밀을 알아냈습니다.\n");
			delay(1000);
			printf("진실과 맞서 싸우세요.");
			delay(1000);
			ATTACK = 11;
			goto ATA;
		}
	}
}
