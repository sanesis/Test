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
	char* Direction = "�߾�";
	char* MName;
	char Name[256];
	char SName[40] = "����";
	char Gold[40];
	char EXP[40];
	char HP[40];
	char STR[40];
	char DEX[40];
	char* Job = "����";
	char SaveNamea[40] = "����";
	char SaveNameb[40] = "����";
	char SaveNamec[40] = "����";
	char HMName[40] = "��ü";
	char AaName[40] = "��";
	char AbName[40] = "Ȱ";
	char AcName[40] = "â";
	char DaName[40] = "���� ����";
	char DbName[40] = "���� ����";
	char DcName[40] = "�̴ð���";
	char DdName[40] = "��� ���� ����";
	char None[6] = "����";
	char Blank[20] = "��";
	char* MapNameA = "���� ��";
	char* MapNameB = "�Ϻ� ���� ���";
	char* MapNameC = "��̱� �Ա�";
	char* MapNameD = "���� ��� ����";
	char MapNameE[40] = "�ձ� ����";
	char MapNameF[40] = "�ձ� ���� ����";
	char BossNameA[40] = "���� ����� ��ġ�� ���";
	char BossNameB[40] = "���� ������ ���� ���� ��ũ����";
	char BossNameC[40] = "���� ���� ������ ��ȣ�� �Ⱑ����ĭ";
	char BossNameD[40] = "���� ����� ������ ������ ����";
	char BossNameE[40] = "Ȳ�� ���Ը���";
	char BossNameF[40] = "�߾� ���� ���Ը���";
	char BossNameTrue[40] = "����";
	char SKNameA[40] = "����";
	char SKNameB[40] = "����";
	char SKNameC[40] = "����";
	char SKNameD[40] = "����";
	char SKNameE[40] = "����";
	char ASKNameA[40] = "����";
	char ASKNameB[40] = "�긮��";
	char ASKNameC[40] = "����";
	char ASKNameD[40] = "��ü ��ȭ";
	char ASKNameE[40] = "��Ÿ";
	char BSKNameA[40] = "����";
	char BSKNameB[40] = "�긮��";
	char BSKNameC[40] = "���� ����";
	char BSKNameD[40] = "��ü ��ȭ";
	char BSKNameE[40] = "��ȭ";
	char CSKNameA[40] = "����";
	char CSKNameB[40] = "���ϱ�";
	char CSKNameC[40] = "���� ȭ��";
	char CSKNameD[40] = "��ü ��ȭ";
	char CSKNameE[40] = "���½�";
	char DSKNameA[40] = "����";
	char DSKNameB[40] = "�긮��";
	char DSKNameC[40] = "���� ��â";
	char DSKNameD[40] = "��ü ��ȭ";
	char DSKNameE[40] = "ȸ����";
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
	out = fopen("�ؽ�Ʈ RPG.dat", "rb");
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
	printf("[1.�����ϱ�]\n[2.�̾��ϱ�]\n���� : ");
	scanf("%d", &choiceN);
	if (choiceN == 1) {
	}
	else if (choiceN == 2) {
		goto BO;
	}
	else {
		printf("[�ùٸ� ���� �Է��ϼ���.]\n");
		goto NEW;
	}
	while (1) {
		printf("[�̸��� �����ּ���.(�ִ� 8 ����)]\n�̸� : ");
		scanf("%s", &Name);
		if (strlen(Name) > 16) {
			printf("[8���ڸ� �ʰ��߽��ϴ�.]\n");
			continue;
		}
		break;
	}
a:
	printf("[������ ��� �й��Ͻðڽ��ϱ�?]\n");
	printf("[1.���� �й�(���� ���� 15�� ����, ������ �� ���� ���� 10�� ���� �� ������ �� ��� �ɷ�ġ�� 1����)]\n");
	printf("[2.���� �й�(���ɷ�ġ 5�� ����, ������ �� ���ɷ�ġ�� 1~5 ����, ������ �� ��µ� �ɷ�ġ�� �ٽ� ������ �� �ִ� �ֻ��� 1�� ����)]\n���� : ");
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
		printf("[�ùٸ� ���ڸ� �Է����ּ���.]\n"); goto a;
	}
	printf("[%s, ����� �߾� ������ ����Դϴ�.]\n", Name);
	delay(2000);
	printf("[�� ������ �ʾ� �� ���迡�� ������ ����ġ�� �˴ϴ�.]\n");
	delay(2000);
	printf("[�ִ��� ������ ������ ���� ������ ������ �Ǿ��ּ���.]\n");
	delay(2000);
	while (1) {
	START:
		SKL = 0;
		if (Level == 40 && ATTACK == 0) {
			printf("\n\n\n\n[�� �ָ� ��𼱰� �ϼҸ��� ����ɴϴ�.]\n");
			delay(3000); 
			ATTACK = ATTACK + 1;
			Direction = "����";
			goto ATA;
		}
		if (Level == 50 && ATTACK == 2) {
			printf("\n\n\n\n[�� ������ �����ϴ� ������ ���� �������ϴ�.]\n");
			delay(3000); 
			ATTACK = ATTACK + 1;
			Direction = "����";
			goto ATA;
		}
		if (Level == 60 && ATTACK == 4) {
			printf("\n\n\n\n[���� �︮�� �뿡�� �⸧�� ������ ���ϴ�.]\n");
			delay(3000); 
			ATTACK = ATTACK + 1;
			Direction = "����";
			goto ATA;
		}
		if (Level == 70 && ATTACK == 6) {
			printf("\n\n\n\n[������ ����, ������ ��, �׸��� ������ ������ �������ϴ�.]\n");
			delay(3000); 
			ATTACK = ATTACK + 1;
			Direction = "����";
			goto ATA;
		}
		if (Level == 80 && ATTACK == 8) {
			printf("\n\n\n\n[������ �ٰ����� �Ҹ��� �鸳�ϴ�.]\n");
			delay(3000); 
			ATTACK = ATTACK + 1;
			goto ATA;
		}
		if (choice == 1 && Skill >= 250 && LIM == 0) {
			printf("[����� �Ѱ迡 �ٴ޾ҽ��ϴ�.]\n[������ �� ȹ�� ���� ���� + 5]\n[��ü ���� �ɷ�ġ + 1]\n[��� ������ �� �̻� �������� �ʽ��ϴ�.]\n");
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
			Job = "������";
			if (MU == 0) {
				printf("[�������� ������ ����]\n");
				MU = 1;
			}
			if (ArA > 0) {
				printf("[�������� ������ ������ �� �����ϴ�.]\n");
				ArA = 0;
			}
		}
		if (WeaA == 1) {
			AtBA = Ata;
			StBA = Sta;
			Job = "�˻�";
		}
		if (WeaA == 2) {
			AtBA = Atb;
			StBA = Stb;
			Job = "�ü�";
		}
		if (WeaA == 3) {
			AtBA = Atc;
			StBA = Stc;
			Job = "â����";
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
		sprintf(Gold, "%d���", Money);
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
			printf("[��� {%s}��(��) �����߽��ϴ�!]\n", SKNameA);
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
			printf("[��� {%s}��(��) �����߽��ϴ�!]\n", SKNameB);
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
			printf("[��� {%s}��(��) �����߽��ϴ�!]\n", SKNameC);
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
			printf("[��� {%s}��(��) �����߽��ϴ�!]\n", SKNameD);
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
			printf("[��� {%s}��(��) �����߽��ϴ�!]\n", SKNameE);
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
		printf("\n[1.����â]\n[2.����]\n[3.���]\n[4.����]\n");
		if (choice == 1) {
			printf("[5.���� ����]\n[6.�����ϱ�]\n[7.�ҷ�����]\n[8.����]\n");
		}
		else if (choice == 2) {
			printf("[5.�����ϱ�]\n[6.�ҷ�����]\n[7.����]\n");
		}
		printf("���� : ");
		scanf("%d", &choiceA);
		//����â
		if (choiceA == 1) {
			printf("\n��������������������������������������������������������������������������������������������������������������\n");
			printf("��  �̸� : %-44s��\n", Name);
			printf("��  ���� : %-44s��\n", Job);
			printf("��  Īȣ : %-44s��\n", SName);
			printf("��  ���� �ڱ� : %-39s��\n", Gold);
			printf("��  ���� : %-44d��\n", Level);
			printf("��  ����ġ : %-42s��\n", EXP);
			printf("��  ü�� : %-44s��\n��  �ٷ� : %-44s��\n��  ��ø : %-44s��\n��  ��� : %-44d��\n��  ���ݷ� : %-42d��\n", HP, STR, DEX, Skill, At);
			if (choice == 1) {
				printf("��  ���� ���� : %-39d��\n", Free);
			}
			else if (choice == 2) {
				printf("��  �ֻ��� : %-42d��\n", Dice);
			}
			printf("��������������������������������������������������������������������������������������������������������������\n");
			printf("��  ���� : ");
			if (WeaA == 0 && WLVp >= 5) {
				printf("%-5s [ü�� + %-3d] [�ٷ� + %-3d] [��ø + %-3d]��", HMName, DtBA, AtBA, StBA);
			}
			else if (WeaA == 0) {
				printf("%-44s��", None);
			}
			else if (WeaA == 1) {
				printf("%-5s [�ٷ� + %-3d] [��ø + %-3d]%13s��", AaName, AtBA, StBA, Blank);
			}
			else if (WeaA == 2) {
				printf("%-5s [�ٷ� + %-3d] [��ø + %-3d]%13s��", AbName, AtBA, StBA, Blank);
			}
			else if (WeaA == 3) {
				printf("%-5s [�ٷ� + %-3d] [��ø + %-3d]%13s��", AcName, AtBA, StBA, Blank);
			}
			printf("\n��������������������������������������������������������������������������������������������������������������\n");
			printf("��  ���� : ");
			if (ArA == 0) {
				printf("%-44s��\n", None);
			}
			else if (ArA == 1) {
				printf("%-14s [ü�� + %-3d]%17s��\n", DaName, DtBA, Blank);
			}
			else if (ArA == 2) {
				printf("%-14s [ü�� + %-3d]%17s��\n", DbName, DtBA, Blank);
			}
			else if (ArA == 3) {
				printf("%-14s [ü�� + %-3d]%17s��\n", DcName, DtBA, Blank);
			}
			else if (ArA == 4) {
				printf("%-14s [ü�� + %-3d]%17s��\n", DdName, DtBA, Blank);
			}
			printf("��������������������������������������������������������������������������������������������������������������\n");
		}
		//����
		else if (choiceA == 2) {
			printf("\n[������ ���� ���� ȯ���մϴ�.]\n[���������� ���� �Ǵ� ������ ����/��ü �� �� �ֽ��ϴ�.]\n");
		DD:
			printf("\n[1.����]\n[2.�Ǹ�]\n[3.����]\n[4.����]\n[5.������]\n���� : ");
			scanf("%d", &choiceC);
			switch (choiceC) {
			case 1: {
				//��� ���� 
			BB:
				printf("\n[1.����]\n[2.����]\n[3.������]\n���� : ");
				scanf("%d", &choiceE);
				printf("\n");
				switch (choiceE) {
				case 1: {
				AA:
					printf("[1.%s]\n[�߰� �ٷ� : %d]\n[�߰� ��ø : %d]\n[%d���]\n\n", AaName, Ata, Sta, Aa);
					if (ASa == 1) {
						printf("[���ſϷ�]\n\n");
					}
					printf("[2.%s]\n[�߰� �ٷ� : %d]\n[�߰� ��ø : %d]\n[%d���]\n\n", AbName, Atb, Stb, Aa);
					if (ASb == 1) {
						printf("[���ſϷ�]\n\n");
					}
					printf("[3.%s]\n[�߰� �ٷ� : %d]\n[�߰� ��ø : %d]\n[%d���]\n\n", AcName, Atc, Stc, Aa);
					if (ASc == 1) {
						printf("[���ſϷ�]\n\n");
					}
					printf("[4.����]\n[���� �ݾ� : %d���]\n���� : ", Money);
					scanf("%d", &choiceG);
					switch (choiceG) {
					case 1: {
						if (ASa == 1) {
							printf("[�̹� ������ ��ǰ�Դϴ�.]\n");
							goto AA;
						}
						if (Money >= Aa) {
							printf("[%s ���ſϷ�]\n", AaName);
							Money = Money - Aa;
							ASa = 1;
						}
						else {
							printf("\n[���� �����մϴ�.]\n");
						}
						break;
					}
					case 2: {
						if (ASb == 1) {
							printf("[�̹� ������ ��ǰ�Դϴ�.]\n");
							goto AA;
						}
						if (Money >= Aa) {
							printf("[%s ���ſϷ�]\n", AbName);
							Money = Money - Aa;
							ASb = 1;
						}
						else {
							printf("\n[���� �����մϴ�.]\n");
						}
						break;
					}
					case 3: {
						if (ASc == 1) {
							printf("[�̹� ������ ��ǰ�Դϴ�.]\n");
							goto AA;
						}
						if (Money >= Aa) {
							printf("[%s ���ſϷ�]\n", AcName);
							Money = Money - Aa;
							ASc = 1;
						}
						else {
							printf("\n[���� �����մϴ�.]\n");
						}
						break;
					}
					case 4: {
						goto BB;
						break;
					}
					default: printf("�ùٸ� ���� �Է��ϼ���."); goto BB;
					}
					break;
				}
				case 2: {
				CC:
					printf("\n[1.%-14s]\n[�߰� ü�� : %d]\n[%d���]\n\n", DaName, DBa, Da);
					if (DSa == 1) {
						printf("[���ſϷ�]\n\n");
					}
					printf("[2.%-14s]\n[�߰� ü�� : %d]\n[%d���]\n\n", DbName, DBb, Db);
					if (DSb == 1) {
						printf("[���ſϷ�]\n\n");
					}
					printf("[3.%-14s]\n[�߰� ü�� : %d]\n[%d���]\n\n", DcName, DBc, Dc);
					if (DSc == 1) {
						printf("[���ſϷ�]\n\n");
					}
					printf("[4.%-14s]\n[�߰� ü�� : %d]\n[%d���]\n\n", DdName, DBd, Dd);
					if (DSd == 1) {
						printf("[���ſϷ�]\n\n");
					}
					printf("[5.������]\n[���� �ݾ� : %d���]\n���� : ", Money);
					scanf("%d", &choiceG);
					switch (choiceG) {
					case 1: {
						if (DSa == 1) {
							printf("[�̹� ������ ��ǰ�Դϴ�.]\n");
							goto CC;
						}
						if (Money >= Da) {
							printf("[%s ���ſϷ�]\n", DaName);
							Money = Money - Da;
							DSa = 1;
						}
						else {
							printf("\n[���� �����մϴ�.]\n");
						}
						break;
					}
					case 2: {
						if (DSb == 1) {
							printf("[�̹� ������ ��ǰ�Դϴ�.]\n");
							goto CC;
						}
						if (Money >= Db) {
							printf("[%s ���ſϷ�]\n", DbName);
							Money = Money - Db;
							DSb = 1;
						}
						else {
							printf("\n[���� �����մϴ�.]\n");
						}
						break;
					}
					case 3: {
						if (DSc == 1) {
							printf("[�̹� ������ ��ǰ�Դϴ�.]\n");
							goto CC;
						}
						if (Money >= Dc) {
							printf("[%s ���ſϷ�]\n", DcName);
							Money = Money - Dc;
							DSc = 1;
						}
						else {
							printf("\n[���� �����մϴ�.]\n");
						}
						break;
					}
					case 4: {
						if (DSd == 1) {
							printf("[�̹� ������ ��ǰ�Դϴ�.]\n");
							goto CC;
						}
						if (Money >= Dd) {
							printf("[%s ���ſϷ�]\n", DdName);
							Money = Money - Dd;
							DSd = 1;
						}
						else {
							printf("\n[���� �����մϴ�.]\n");
						}
						break;
					}
					case 5: {
						goto BB;
						break;
					}
					default: printf("�ùٸ� ���� �Է��ϼ���."); goto CC;
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
				  //��� �Ǹ�
			  EE:
			case 2: {
				printf("   [����]\n");
				if (DSa == 1) {
					printf("[1.%-14s(������)]\n", DaName);
				}
				else {
					printf("[1.%-14s(�̺���)]\n", DaName);
				}
				if (DSb == 1) {
					printf("[2.%-14s(������)]\n", DbName);
				}
				else {
					printf("[2.%-14s(�̺���)]\n", DbName);
				}
				if (DSc == 1) {
					printf("[3.%-14s(������)]\n", DcName);
				}
				else {
					printf("[3.%-14s(�̺���)]\n", DcName);
				}
				if (DSd == 1) {
					printf("[4.%-14s(������)]\n", DdName);
				}
				else {
					printf("[4.%-14s(�̺���)]\n", DdName);
				}
				printf("[5.����]\n");
				printf("[������ �����Ͻðڽ��ϱ�?]\n���� : ");
				scanf("%d", &choiceF);
				switch (choiceF) {
				case 1: {
					if (DSa == 1) {
						printf("\n[%d��忡 �Ǹ��Ͻðڽ��ϱ�?]\n[1.��]\n[2.�ƴϿ�]\n���� : ", Da / 2);
						scanf("%d", &choiceK);
						switch (choiceK) {
						case 1: {
							if (ArA != 1) {
								Money = Money + Da / 2;
								printf("[�ǸŵǾ����ϴ�.\n ���� ��� : %d]", Money);
								DSa = 0;
							}
							else if (ArA == 1) {
								printf("[�������� ����Դϴ�.]\n[�ǸŸ� ���ϽŴٸ� ��� �������ּ���.]\n");
							}
							break;
						}
						case 2: {
							goto EE;
							break;
						}
						}
					}
					else printf("\n[�ǸŰ����� ��ǰ�� �ƴմϴ�.]\n"); goto EE;
					break;
				}
				case 2: {
					if (DSb == 1) {
						printf("\n[%d��忡 �Ǹ��Ͻðڽ��ϱ�?]\n[1.��]\n[2.�ƴϿ�]\n���� : ", Db / 2);
						scanf("%d", &choiceK);
						switch (choiceK) {
						case 1: {
							if (ArA != 2) {
								Money = Money + Db / 2;
								printf("[�ǸŵǾ����ϴ�.\n ���� ��� : %d]", Money);
								DSb = 0;
							}
							else if (ArA == 2) {
								printf("[�������� ����Դϴ�.]\n[�ǸŸ� ���ϽŴٸ� ��� �������ּ���.]\n");
							}
							break;
						}
						case 2: {
							goto EE;
							break;
						}
						}
					}
					else printf("\n[�ǸŰ����� ��ǰ�� �ƴմϴ�.]\n"); goto EE;
					break;
				}
				case 3: {
					if (DSc == 1) {
						printf("\n[%d��忡 �Ǹ��Ͻðڽ��ϱ�?]\n[1.��]\n[2.�ƴϿ�]\n���� : ", Dc / 2);
						scanf("%d", &choiceK);
						switch (choiceK) {
						case 1: {
							if (ArA != 3) {
								Money = Money + Dc / 2;
								printf("[�ǸŵǾ����ϴ�.\n ���� ��� : %d]", Money);
								DSc = 0;
							}
							else if (ArA == 3) {
								printf("[�������� ����Դϴ�.]\n[�ǸŸ� ���ϽŴٸ� ��� �������ּ���.]\n");
							}
							break;
						}
						case 2: {
							goto EE;
							break;
						}
						}
					}
					else printf("\n[�ǸŰ����� ��ǰ�� �ƴմϴ�.]\n"); goto EE;
					break;
				}
				case 4: {
					if (DSd == 1) {
						printf("\n[%d��忡 �Ǹ��Ͻðڽ��ϱ�?]\n[1.��]\n[2.�ƴϿ�]\n���� : ", Dd / 2);
						scanf("%d", &choiceK);
						switch (choiceK) {
						case 1: {
							if (ArA != 4) {
								Money = Money + Dd / 2;
								printf("[�ǸŵǾ����ϴ�.\n ���� ��� : %d]", Money);
								DSd = 0;
							}
							else if (ArA == 4) {
								printf("[�������� ����Դϴ�.]\n[�ǸŸ� ���ϽŴٸ� ��� �������ּ���.]\n");
							}
							break;
						}
						case 2: {
							goto EE;
							break;
						}
						}
					}
					else printf("\n[�ǸŰ����� ��ǰ�� �ƴմϴ�.]\n"); goto EE;
					break;
				}
				case 5: break;
				default: printf("\n[�ùٸ� ���� �Է��ϼ���.]\n"); goto EE;
				}
				break;
			}
				  //��� ����
			  WW:
			case 3: {
				printf("\n       [����]\n");
				if (ASa == 1) {
					printf("[1.%s(������)]\n", AaName);
				}
				else {
					printf("[1.%s(�̺���)]\n", AaName);
				}
				if (ASb == 1) {
					printf("[2.%s(������)]\n", AbName);
				}
				else {
					printf("[2.%s(�̺���)]\n", AbName);
				}
				if (ASc == 1) {
					printf("[3.%s(������)]\n", AcName);
				}
				else {
					printf("[3.%s(�̺���)]\n", AcName);
				}
				printf("[4.����]\n");
				printf("[������ ��� ������.]\n���� : ");
				scanf("%d", &choiceK);
				switch (choiceK) {
				case 1: {
					if (ASa == 1) {
						printf("[���⿡ %s�� ����.]\n", AaName);
						WeaA = 1;
						SA = 2;
						SB = 2;
						SC = 2;
						SD = 2;
						SE = 2;
					}
					else printf("[�������� ��� �ƴմϴ�.]\n");
					break;
				}
				case 2: {
					if (ASb == 1) {
						printf("[���⿡ %s�� ����.]\n", AbName);
						WeaA = 2;
						SA = 2;
						SB = 2;
						SC = 2;
						SD = 2;
						SE = 2;
					}
					else printf("[�������� ��� �ƴմϴ�.]\n");
					break;
				}
				case 3: {
					if (ASc == 1) {
						printf("[���⿡ %s�� ����.]\n", AcName);
						WeaA = 3;
						SA = 2;
						SB = 2;
						SC = 2;
						SD = 2;
						SE = 2;
					}
					else printf("[�������� ��� �ƴմϴ�.]\n");
					break;
				}
				case 4: break;
				default: printf("[�ùٸ� ���ڸ� �Է��ϼ���.]\n"); goto WW;
				}
				printf("\n       [����]\n");
				if (DSa == 1) {
					printf("[1.%-14s(������)]\n", DaName);
				}
				else {
					printf("[1.%-14s(�̺���)]\n", DaName);
				}
				if (DSb == 1) {
					printf("[2.%-14s(������)]\n", DbName);
				}
				else {
					printf("[2.%-14s(�̺���)]\n", DbName);
				}
				if (DSc == 1) {
					printf("[3.%-14s(������)]\n", DcName);
				}
				else {
					printf("[3.%-14s(�̺���)]\n", DcName);
				}
				if (DSd == 1) {
					printf("[4.%-14s(������)]\n", DdName);
				}
				else {
					printf("[4.%-14s(�̺���)]\n", DdName);
				}
				printf("[5.����]\n");
				printf("[������ ��� ������.]\n���� : ");
				scanf("%d", &choiceK);
				switch (choiceK) {
				case 1: {
					if (DSa == 1) {
						printf("[���ʿ� %s�� ����.]\n", DaName);
						ArA = 1;
					}
					else printf("[�������� ��� �ƴմϴ�.]\n");
					break;
				}
				case 2: {
					if (DSb == 1) {
						printf("[���ʿ� %s�� ����.]\n", DbName);
						ArA = 2;
					}
					else printf("[�������� ��� �ƴմϴ�.]\n");
					break;
				}
				case 3: {
					if (DSc == 1) {
						printf("[���ʿ� %s�� ����.]\n", DcName);
						ArA = 3;
					}
					else printf("[�������� ��� �ƴմϴ�.]\n");
					break;
				}
				case 4: {
					if (DSd == 1) {
						printf("[���ʿ� %s�� ����.]\n", DdName);
						ArA = 4;
					}
					else printf("[�������� ��� �ƴմϴ�.]\n");
					break;
				}
				case 5: break;
				default: printf("[�ùٸ� ���ڸ� �Է��ϼ���.]\n"); goto WW;
				}
				break;
			}
				  //��� ���� ���� 
			case 4: {
			IU:
				if (WeaA == 1) {
					printf("[�������� ���� : %s]\n[�����Ͻðڽ��ϱ�?]\n[1.��]\n[2.�ƴϿ�]\n���� : ", AaName);
					scanf("%d", &choiceK);
					switch (choiceK) {
					case 1: WeaA = 0; SA = 2; SB = 2; SC = 2; SD = 2; SE = 2; break;
					case 2: break;
					default: printf("[�ùٸ� ���� �Է��ϼ���.]"); goto IU;
					}
				}
				else if (WeaA == 2) {
					printf("[�������� ���� : %s]\n[�����Ͻðڽ��ϱ�?]\n[1.��]\n[2.�ƴϿ�]\n���� : ", AbName);
					scanf("%d", &choiceK);
					switch (choiceK) {
					case 1: WeaA = 0; SA = 2; SB = 2; SC = 2; SD = 2; SE = 2; break;
					case 2: break;
					default: printf("[�ùٸ� ���� �Է��ϼ���.]"); goto IU;
					}
				}
				else if (WeaA == 3) {
					printf("[�������� ���� : %s]\n[�����Ͻðڽ��ϱ�?]\n[1.��]\n[2.�ƴϿ�]\n���� : ", AcName);
					scanf("%d", &choiceK);
					switch (choiceK) {
					case 1: WeaA = 0; SA = 2; SB = 2; SC = 2; SD = 2; SE = 2; break;
					case 2: break;
					default: printf("[�ùٸ� ���� �Է��ϼ���.]"); goto IU;
					}
				}
			II:
				if (ArA == 1) {
					printf("[�������� ���� : %s]\n[�����Ͻðڽ��ϱ�?]\n[1.��]\n[2.�ƴϿ�]\n���� : ", DaName);
					scanf("%d", &choiceK);
					switch (choiceK) {
					case 1: ArA = 0; break;
					case 2: break;
					default: printf("[�ùٸ� ���� �Է��ϼ���.]"); goto II;
					}
				}
				else if (ArA == 2) {
					printf("[�������� ���� : %s]\n[�����Ͻðڽ��ϱ�?]\n[1.��]\n[2.�ƴϿ�]\n���� : ", DbName);
					scanf("%d", &choiceK);
					switch (choiceK) {
					case 1: ArA = 0; break;
					case 2: break;
					default: printf("[�ùٸ� ���� �Է��ϼ���.]"); goto II;
					}
				}
				else if (ArA == 3) {
					printf("[�������� ���� : %s]\n[�����Ͻðڽ��ϱ�?]\n[1.��]\n[2.�ƴϿ�]\n���� : ", DcName);
					scanf("%d", &choiceK);
					switch (choiceK) {
					case 1: ArA = 0; break;
					case 2: break;
					default: printf("[�ùٸ� ���� �Է��ϼ���.]"); goto II;
					}
				}
				else if (ArA == 4) {
					printf("[�������� ���� : %s]\n[�����Ͻðڽ��ϱ�?]\n[1.��]\n[2.�ƴϿ�]\n���� : ", DdName);
					scanf("%d", &choiceK);
					switch (choiceK) {
					case 1: ArA = 0; break;
					case 2: break;
					default: printf("[�ùٸ� ���� �Է��ϼ���.]"); goto II;
					}
				}
				else {
					printf("[�������� ��� �����ϴ�.]");
				}
				break;
			}
			case 5: goto START;
			default: printf("[�ùٸ� ���� �Է��ϼ���.]\n"); goto DD;
			}
		}
		//��ų
		else if (choiceA == 3) {
			printf("\n����������������������������������������������������������������������\n");
			switch (SA) {
			case 1: printf("�� %-25s(LV.%2d)��\n", SKNameA, SKExpA / SKDExp); break;
			case 2: printf("�� %-22s(���Ұ�)��\n�� �䱸 ��� : %20d��\n", SKNameA, DSKa); break;
			}
			printf("����������������������������������������������������������������������\n");
			switch (SB) {
			case 1: printf("�� %-25s(LV.%2d)��\n", SKNameB, SKExpB / SKDExp); break;
			case 2: printf("�� %-22s(���Ұ�)��\n�� �䱸 ��� : %20d��\n", SKNameB, DSKb); break;
			}
			printf("����������������������������������������������������������������������\n");
			switch (SC) {
			case 1: printf("�� %-25s(LV.%2d)��\n", SKNameC, SKExpC / SKDExp); break;
			case 2: printf("�� %-22s(���Ұ�)��\n�� �䱸 ��� : %20d��\n", SKNameC, DSKc); break;
			}
			printf("����������������������������������������������������������������������\n");
			switch (SD) {
			case 1: printf("�� %-25s(LV.%2d)��\n", SKNameD, SKExpD / SKDExp); break;
			case 2: printf("�� %-22s(���Ұ�)��\n�� �䱸 ��� : %20d��\n", SKNameD, DSKd); break;
			}
			printf("����������������������������������������������������������������������\n");
			switch (SE) {
			case 1: printf("�� %-25s(LV.%2d)��\n", SKNameE, SKExpE / SKDExp); break;
			case 2: printf("�� %-22s(���Ұ�)��\n�� �䱸 ��� : %20d��\n", SKNameE, DSKe); break;
			}
			printf("����������������������������������������������������������������������\n\n");
		}
		//����
		else if (choiceA == 4) {
			if (Level >= 20 && Ta == 0) {
				printf("[���ο� ����� ����]\n");
				Ta = 1;
			}
			if (Level >= 20) {
				MapLvA = 40;
				MapNameA= "��� ������";
			}
			if (Level >= 30 && Tb == 0) {
				printf("[���ο� ����� ����]\n");
				Tb = 1;
			}
			if (Level >= 30) {
				MapLvB = 50;
				MapNameB = "������ ��ũ ����";
			}
			if (Level >= 40 && Tc == 0) {
				printf("[���ο� ����� ����]\n");
				Tc = 1;
			}
			if (Level >= 40) {
				MapLvC = 60;
				MapNameC = "���� ������";
			}
			if (Level >= 50 && Td == 0) {
				printf("[���ο� ����� ����]\n");
				Td = 1;
			}
			if (Level >= 50) {
				MapLvD = 70;
				MapNameD = "���� ���� ���";
			}
			if (ATTACK == 8 && Te == 0) {
				printf("[���ο� ����� ����]\n");
				Te = 1;
			}
		Z:
			printf("\n[1.%-16s(Level %2d �̻� ����)]\n[2.%-16s(Level %2d �̻� ����)]\n[3.%-16s(Level %2d �̻� ����)]\n[4.%-16s(Level %2d �̻� ����)]\n", MapNameA, MapLvA, MapNameB, MapLvB, MapNameC, MapLvC, MapNameD, MapLvD);
			if (ATTACK == 8) {
				printf("[5.%-16s(Level %2d �̻� ����)]\n[6.%-16s(Level %2d �̻� ����)]\n[7.������]\n", MapNameE, MapLvE, MapNameF, MapLvF);
				if (Auto == 0) {
					printf("[8.�ڵ� ���]\n");
				}
			}
			else {
				printf("[5.������]\n");
				if (Auto == 0) {
					printf("[6.�ڵ� ���]\n");
				}
			}
			printf("���� : ");
			scanf("%d", &choiceB);
		K:
			At = Str + AtBA;
			HpB = Hp + DtBA;
			HpA = HpB * 10;
			switch (choiceB) {
			case 1: {
				MName = "Į�� ���"; MA = 1; MS = 1;
				if (Level >= 20) {
					MName = "Ȳ�� ���"; MA = 40; MS = 5;
				}
				break;
			}
			case 2: {
				MName = "������ ��ũ"; MA = 10; MS = 2;
				if (Level >= 30) {
					MName = "��ũ ������"; MA = 50; MS = 6;
				}
				break;
			}
			case 3: {
				MName = "�꼺 ������"; MA = 20; MS = 3;
				if (Level >= 40) {
					MName = "�ΰ��� �Ⱙ ������"; MA = 60; MS = 7;
				}
				break;
			}
			case 4: {
				MName = "���� �����"; MA = 30; MS = 4;
				if (Level >= 50) {
					MName = "Ʈ�� ��� �����"; MA = 70; MS = 8;
				}
				break;
			}
			case 5: {
				if (ATTACK == 8) {
					MName = "�ձ� ������"; MA = 80; MS = 9;
				}
				if (Auto == 1 && ATTACK != 8) {
					Auto = 0; goto Z;
				}
				else continue;
				break;
			}
			case 6: {
				if (ATTACK == 8) {
					MName = "������ ������"; MA = 90; MS = 10;
				}
				if (Auto == 0 && ATTACK != 8) {
					Auto = 1; goto Z;
				}
				else printf("[�ùٸ� ���� �Է��ϼ���.]\n"); goto Z;
				break;
			}
			case 7: {
				if (Auto == 1 && ATTACK == 8) {
					Auto = 0; goto Z;
				}
				else if (ATTACK == 8) {
					continue;
				}
				else printf("[�ùٸ� ���� �Է��ϼ���.]\n"); goto Z;
			}
			case 8: {
				if (Auto == 0) {
					Auto = 1; goto Z;
				}
				else printf("[�ùٸ� ���� �Է��ϼ���.]\n"); goto Z;
			}
			default: printf("[�ùٸ� ���� �Է��ϼ���.]\n"); goto Z;
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
					printf("�¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢�\n");
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
					printf("�¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢�\n");
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
					printf("�¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢�\n");
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
					printf("�¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢�\n");
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
					printf("�¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢�\n");
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
					printf("�¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢¢�\n");
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
			printf("\n[%s(Lv.%d)�� ��Ÿ����!]\n", MName, MLV);
			printf("[%s(LV.%d)]\n[ü�� : %d(%d)]\n[���ݷ� : %d]\n[��ø : %d]\n", MName, MLV, MHP * 10, MHP, MStr, MDex);
			printf("[%s(LV.%d)]\n[ü�� : %d(%d)]\n[���ݷ� : %d]\n[��ø : %d]\n", Name, Level, HpB * 10, HpB, At, DexA);
			if (ATTACK == 10) {
				if (BOSSA == 0) {
					printf("[������ %s�� ����մϴ�.]\n", BossNameA);
					MLV = MLV + 10;
					MStr = MStr + 100;
					MDex = MDex + 100;
					MHP = MHP + 100;
					MHPA = MHP * 10;
					printf("[ü�� : %d(%d)]\n[�ٷ� : %d]\n[��ø : %d]\n", MHP * 10, MHP, MStr, MDex);
				}
				if (BOSSB == 0) {
					printf("[������ %s�� ����մϴ�.]\n", BossNameB);
					MLV = MLV + 10;
					MStr = MStr + 100;
					MDex = MDex + 100;
					MHP = MHP + 100;
					MHPA = MHP * 10;
					printf("[ü�� : %d(%d)]\n[�ٷ� : %d]\n[��ø : %d]\n", MHP * 10, MHP, MStr, MDex);
				}
				if (BOSSC == 0) {
					printf("[������ %s�� ����մϴ�.]\n", BossNameC);
					MLV = MLV + 10;
					MStr = MStr + 100;
					MDex = MDex + 100;
					MHP = MHP + 100;
					MHPA = MHP * 10;
					printf("[ü�� : %d(%d)]\n[�ٷ� : %d]\n[��ø : %d]\n", MHP * 10, MHP, MStr, MDex);
				}
				if (BOSSD == 0) {
					printf("[������ %s�� ����մϴ�.]\n", BossNameD);
					MLV = MLV + 10;
					MStr = MStr + 100;
					MDex = MDex + 100;
					MHP = MHP + 100;
					MHPA = MHP * 10;
					printf("[ü�� : %d(%d)]\n[�ٷ� : %d]\n[��ø : %d]\n", MHP * 10, MHP, MStr, MDex);
				}
			}
			At = Str + AtBA;
			HpB = Hp + DtBA;
			HpA = HpB * 10;
			DexA = Dex + StBA;
		X:
			if (ATTACK % 2 != 1 && ATTACK != 10) {
				printf("\n[1.�ο��.]\n[2.��������.]\n���� : ");
				scanf("%d", &choiceD);
			}
			else choiceD = 1;
			switch (choiceD) {
			case 1: {
				SKUSE = 4; //��ų ��� Ƚ�� 
				while (1) {
				e:
					printf("[%s(Lv.%d)\nü�� : %d/%d]\n", MName, MLV, MHPA, MHP * 10);
					printf("[%s(Lv.%d)\nü�� : %d/%d]\n", Name, Level, HpA, HpB * 10);
					printf("[��ų ��밡�� Ƚ�� : %d]\n", SKUSE);
				ee:
					if (HpA < 0 || MHPA < 0) {
						break;
					}
					if (Auto == 0) {
						printf("\n[1.����]\n[2.���]\n���� : ");
						scanf("%d", &choiceD);
					}
					else if (Auto == 1) {
						choiceD = 1;
					}
					switch (choiceD) {
					case 1: {

						L = At + (rand() % At) / 2;
						printf("[%d��ŭ�� ���ظ� �������ϴ�!]\n", L);
						MHPA = MHPA - L;
						break;
					}
					case 2: {
					g:
						if (SA == 1) {
							printf("\n[1.%-12s(LV.%d)]", SKNameA, SKExpA / SKDExp);
						}
						else if (SA == 2) {
							printf("\n[1.%-12s(�̽���)]", SKNameA);
						}
						if (SB == 1) {
							printf("\n[2.%-12s(LV.%d)]", SKNameB, SKExpB / SKDExp);
						}
						else if (SB == 2) {
							printf("\n[2.%-12s(�̽���)]", SKNameB);
						}
						if (SC == 1) {
							printf("\n[3.%-12s(LV.%d)]", SKNameC, SKExpC / SKDExp);
						}
						else if (SC == 2) {
							printf("\n[3.%-12s(�̽���)]", SKNameC);
						}
						if (SD == 1) {
							printf("\n[4.%-12s(LV.%d)]", SKNameD, SKExpD / SKDExp);
						}
						else if (SD == 2) {
							printf("\n[4.%-12s(�̽���)]", SKNameD);
						}
						if (SE == 1) {
							printf("\n[5.%-12s(LV.%d)]", SKNameE, SKExpE / SKDExp);
						}
						else if (SE == 2) {
							printf("\n[5.%-12s(�̽���)]", SKNameE);
						}
						printf("\n[6.������]\n���� : ");
						scanf("%d", &choiceD);
						switch (choiceD) {
						case 1: {
							if (SA == 1 && SKUSE > 0) {
								printf("[���� ������ ���ط��� %d%% ����]\n", 60 + (SKExpA / SKDExp) * 2);
								printf("[%d%%�� Ȯ���� �߰� ����]\n", 20 + (SKExpA / SKDExp) * 5);
								Bar = 1;
								SKUSE = SKUSE - 1;
								if (SKExpA == 99) {
									printf("[��ų�� �ְ� ������ �Ǿ����ϴ�!]\n");
								}
								if (SKExpA < 100) {
									SKExpA = SKExpA + 1;
								}
							}
							else  if (SA == 2) {
								printf("[����� �Ұ����� ����Դϴ�.]\n"); goto g;
							}
							else if (SKUSE <= 0) {
								printf("[��ų ��� Ƚ���� ��� �Ҹ��߽��ϴ�.]\n"); goto ee;
							}
							break;
						}
						case 2: {
							if (SB == 1 && SKUSE > 0) {
								printf("[���� ������ %d%%�� �기 �� ġ��Ÿ ����]\n", 30 + (SKExpB / SKDExp) * 6);
								Har = 1;
								SKUSE = SKUSE - 1;
								if (SKExpB == 99) {
									printf("[��ų�� �ְ� ������ �Ǿ����ϴ�!]\n");
								}
								if (SKExpB < 100) {
									SKExpB = SKExpB + 1;
								}
							}
							else  if (SB == 2) {
								printf("[����� �Ұ����� ����Դϴ�.]\n"); goto g;
							}
							else if (SKUSE <= 0) {
								printf("[��ų ��� Ƚ���� ��� �Ҹ��߽��ϴ�.]\n"); goto ee;
							}
							break;
						}
						case 3: {
							if (SC == 1 && SKUSE > 0) {
								printf("[%d%%�� ���ݷ����� ����]\n", 200 + (SKExpC / SKDExp) * 100);
								L = At + (rand() % At) / 2;
								printf("[%d��ŭ�� ���ظ� �������ϴ�.]\n", L * (2 + (SKExpC / SKDExp) * 1));
								MHPA = MHPA - L * (2 + (SKExpC / SKDExp) * 1);
								SKUSE = SKUSE - 1;
								if (SKExpC == 99) {
									printf("[��ų�� �ְ� ������ �Ǿ����ϴ�!]\n");
								}
								if (SKExpC < 100) {
									SKExpC = SKExpC + 1;
								}
							}
							else  if (SC == 2) {
								printf("[����� �Ұ����� ����Դϴ�.]\n"); goto g;
							}
							else if (SKUSE <= 0) {
								printf("[��ų ��� Ƚ���� ��� �Ҹ��߽��ϴ�.]\n"); goto ee;
							}
							break;
						}
						case 4: {
							if (SD == 1 && SKUSE > 0) {
								printf("[���ݷ� %d%%����]\n", 200 + (SKExpD / SKDExp) * 50);
								At = At * 2 + (SKExpD / SKDExp) * 0.5;
								SKUSE = SKUSE - 1;
								if (SKExpD == 99) {
									printf("[��ų�� �ְ� ������ �Ǿ����ϴ�!]\n");
								}
								if (SKExpD < 100) {
									SKExpD = SKExpD + 1;
								}
							}
							else  if (SD == 2) {
								printf("[����� �Ұ����� ����Դϴ�.]\n"); goto g;
							}
							else if (SKUSE <= 0) {
								printf("[��ų ��� Ƚ���� ��� �Ҹ��߽��ϴ�.]\n"); goto ee;
							}
							break;
						}
						case 5: {
							if (SE == 1 && SKUSE > 0) {
								printf("[%d%%�� ���ݷ����� %dȸ ����]\n", 100 + (SKExpE / SKDExp) * 100, 3 + (SKExpE / SKDExp) * 3);
								SKUSE = SKUSE - 1;
								for (e = 1; e < (5 + (SKExpE / SKDExp) * 2); e++) {
									printf("[%d��ŭ�� ���ظ� �������ϴ�.]\n", At * (100 + (SKExpE / SKDExp) * 100));
									MHPA = MHPA - At * (100 + (SKExpE / SKDExp) * 100);
								}
								if (SKExpE == 99) {
									printf("[��ų�� �ְ� ������ �Ǿ����ϴ�!]\n"); goto ee;
								}
								if (SKExpE < 100) {
									SKExpE = SKExpE + 1;
								}
							}
							else  if (SE == 2) {
								printf("[����� �Ұ����� ����Դϴ�.]\n"); goto g;
							}
							else if (SKUSE <= 0) {
								printf("[��ų ��� Ƚ���� ��� �Ҹ��߽��ϴ�.]\n"); goto ee;
							}
							break;
						}
						case 6: {
							goto e;
							break;
						}
						default: printf("[�ùٸ� ���� �Է��ϼ���.]\n"); goto g;
						}
						break;
					}
					default: printf("[�ùٸ� ���� �Է��ϼ���.]\n"); goto ee;
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
						printf("[�߰� ����!]\n");
						printf("%s(Lv.%d)\nü�� : %d/%d\n", MName, MLV, MHPA, MHP * 10);
						printf("%s(Lv.%d)\nü�� : %d/%d\n", Name, Level, HpA, HpB * 10);
						goto ee;
					}
					if (Bar == 1) {
						ML = MStr + rand() % (MStr / 2);
						FL = (ML * (1 - 0.6 + (SKExpA / SKDExp) * 0.02));
						if (FL < 0) {
							FL = 0;
						}
						printf("[%s��(��) %d��ŭ�� ���ظ� �������ϴ�.]\n", MName, FL);
						HpA = HpA - FL;
						Bar = 0;
						if (rand() % 100 < 20 + (SKExpA / SKDExp) * 5) {
							printf("[�߰� ����!]\n");
							printf("%s(Lv.%d)\nü�� : %d/%d\n", MName, MLV, MHPA, MHP * 10);
							printf("%s(Lv.%d)\nü�� : %d/%d\n", Name, Level, HpA, HpB * 10);
							goto ee;
						}
					}
					else if (Har == 1) {
						if (rand() % 100 < 30 + (SKExpB / SKDExp) * 6) {
							printf("[%s�� ������ �긮�� Ÿ��!]\n", MName);
							L = At + (rand() % At) / 2;
							printf("[%d��ŭ�� ���ظ� �������ϴ�.]\n", L * 2);
							Har = 0;
							MHPA = MHPA - L * 2;
						}
						else {
							ML = MStr + rand() % (MStr / 2);
							printf("[%s��(��) %d��ŭ�� ���ظ� �������ϴ�.]\n", MName, ML);
							HpA = HpA - ML;
						}
					}
					else if (Bar == 0 && Har == 0) {
					V:
						ML = MStr + rand() % (MStr / 2);
						HpA = HpA - ML;
						printf("[%s�� %d��ŭ�� ���ظ� �������ϴ�.]\n", MName, ML);
					}
					else {
						if (Ex + rand() % 100 < 0) {
							printf("[������ �߰� ����!]\n");
							goto V;
						}
					}
				}
				if (HpA > 0 && MHPA < 1) {
					if (choiceB == 5 || choiceB == 6) {
						printf("{�������� �Բ��ϽŴ�...}\n");
						delay(1000);
					}
					printf("[�������� �¸��ϼ̽��ϴ�!]\n[%d�� ����ġ�� ȹ���մϴ�!]\n[%d��ŭ�� ��带 ȹ���մϴ�!]\n", MExp, MMoney);
					Exp = Exp + MExp;
					if (ATTACK == 1) {
						printf("\n\n\n\n{������������������������������������������������������!!!!!!!!!!!!!!!!!!!!!}\n\n\n\n");
						delay(1000);
						printf("[%s��(��) óġ�߽��ϴ�.]\n[������ �ٰ����� �ֽ��ϴ�.]\n[����ϼ���.]\n[���� �������� �մϴ�.]\n", MName);
						BOSSA = 1;
					}
					else if (ATTACK == 3) {
						printf("\n\n\n\n{���ο� ������ ���Ͽ�...}\n\n\n\n");
						delay(1000);
						printf("[%s��(��) óġ�߽��ϴ�.]\n[������ �ٰ����� �ֽ��ϴ�.]\n[����ϼ���.]\n[���� �������� �մϴ�.]\n", MName);
						BOSSB = 1;
					}
					else if (ATTACK == 5) {
						printf("{������������...}\n");
						delay(500);
						if (Death < 3) {
							printf("��");
							delay(300);
							printf("��");
							delay(300);
							printf("��");
							delay(500);
							printf("��");
							delay(300);
							printf("��");
							delay(300);
							printf("��");
							delay(300);
							printf("��");
							delay(300);
							printf(".");
							delay(500);
							printf(".");
							delay(500);
							printf(".");
							delay(500);
							printf("��");
							delay(300);
							printf("��");
							delay(300);
							printf("��");
							delay(2000);
							printf("\n\n\n[����ȭ �۾��� ���ϴ�.]\n");
							for (int co = 0; co < 40; co) {
								printf("\n");
								delay(20);
							}
						}
						printf("[%s��(��) óġ�߽��ϴ�.]\n[������ �ٰ����� �ֽ��ϴ�.]\n[����ϼ���.]\n[���� �������� �մϴ�.]\n", MName);
						BOSSC = 1;
					}
					else if (ATTACK == 7) {
						printf("{��");
						delay(100);
						printf("��");
						delay(100);
						printf("��");
						delay(100);
						printf("��");
						delay(1000);
						printf(".");
						delay(500);
						printf(".");
						delay(500);
						printf(".");
						delay(500);
						printf("��");
						delay(1000);
						printf("��");
						delay(1000);
						printf(".}\n");
						delay(500);
						printf("[%s��(��) óġ�߽��ϴ�.]\n[������ �ٰ����� �ֽ��ϴ�.]\n[����ϼ���.]\n[���� �������� �մϴ�.]\n", MName);
						BOSSD = 1;
						if (Death < 3) {
							printf("ó");
							delay(100);
							printf("�� ");
							delay(1000);
							printf("��");
							delay(100);
							printf("��");
							delay(100);
							printf("�� ");
							delay(500);
							printf("��");
							delay(100);
							printf("��");
							delay(100);
							printf("��");
							delay(100);
							printf("��");
							delay(100);
							printf("��");
							delay(100);
							printf("��");
							delay(100);
							printf("��");
							delay(100);
							printf("��");
							delay(100);
							printf("��");
							delay(100);
							printf("\n\n\n[����ȭ �۾��� ���ϴ�.]\n");
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
						printf("[%s��(��) óġ�߽��ϴ�.]\n[������ ���� ��", MName);
						printf("ȭ");
						delay(100);
						printf("��");
						delay(200);
						printf("��");
						delay(400);
						printf("��");
						delay(800);
						printf("��");
						delay(1600);
						for (int co = 0; co < 70; co++) {
							printf("\n");
						}
						printf("�ƴ� \n");
						delay(1000);
						printf("�׷� �� ����.\n");
						delay(1000);
						printf("���� ����ִ���\n");
						delay(1000);
						printf("����\n");
						delay(1000);
						printf("������������ ��ǻ��̴�.\n");
						delay(3000);
						for (int co = 0; co < 1000; co++) {
							printf("���� !");
							delay(1);
						}
						delay(1000);
						printf("\n\n\n[����ȭ �۾��� ���ϴ�.]\n");
						for (int co = 0; co < 40; co) {
							printf("\n");
							delay(20);
						}
						printf("���� ���� ����ִ�.");
						delay(2000);
						ATTACK = ATTACK + 1;
						goto ATA;
					}
					//�¸� ����
					else if (ATTACK == 10) {
						printf("{��");
						delay(100);
						printf("��");
						delay(100);
						printf("��");
						delay(100);
						printf("��");
						delay(100);
						printf("��");
						delay(500);
						printf(".");
						delay(300);
						printf(".");
						delay(300);
						printf("��");
						delay(500);
						printf(".");
						delay(300);
						printf(".");
						delay(300);
						printf("��");
						delay(500);
						printf("��");
						delay(100);
						printf("}\n");
						delay(1000);
						if (Death < 3) {
							for (int co = 0; co < 10; co) {
								printf("13���� ������");
								delay(10);
							}
							for (int co = 0; co < 70; co++) {
								printf("\n");
							}
						}
						ATTACK = ATTACK + 1;
						printf("\n[������ ��ü�� Ȳ������ �˾Ƴ��� �׸� �׿����ϴ�.]\n[���� ������ ��ȭ�ο����� ���ʹ� ����� ���Դϴ�.]\n");
						delay(3000);
						printf("[�׸��� ��ŵ�..]\n");
						delay(10000);
						for (int co = 0; co < 40; co++) {
							printf("{������ �����ؾ���.}\n");
						}
						for (int co = 0; co < 400; co++) {
							printf("����");
							delay(3);
						}
						for (int co = 0; co < 40; co++) {
							printf("\n");
						}
						goto ATA;
					}
					else if (ATTACK == 11){
						printf("��� ���� ���ڸ��� ���ư��� ������ ��ȭ�� ��ã�ҽ��ϴ�.\n");
					}
					if (ATTACK % 2 == 1) {
						if (Skill < 250) {
							printf("[%s�� ���� óġ�� �������� ��ü ������ %d��ŭ �����ϴ�.]\n", Direction, ATTACK * 5);
							Hp = Hp + (ATTACK * 5);
							Str = Str + (ATTACK * 5);
							Dex = Dex + (ATTACK * 5);
							Skill = Skill + (ATTACK * 5);
						}
						else if (Skill >= 250) {
							printf("[%s�� ���� óġ�� ����� �Ѱ�ġ�� �̸� ����� ���� ��ü ������ %d��ŭ �����ϴ�.]\n", Direction, ATTACK * 10);
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
							printf("[��ü�� ��ȭ�Ǿ����ϴ�!]\n");
							WeaDExpH = 3 * WLVh * (1 + 1 * (WLVh / 10)) + 5;
						}
					}
					else if (WeaA == 1) {
						WeaExpA = WeaExpA + MExp;
						while (WeaExpA / WeaDExpA >= 1) {
							WLVa = WLVa + 1;
							WeaExpA = WeaExpA - WeaDExpA;
							printf("[���Ⱑ �����߽��ϴ�!]\n");
							WeaDExpA = 3 * WLVa * (1 + 1 * (WLVa / 10)) + 5;
						}
					}
					else if (WeaA == 2) {
						WeaExpB = WeaExpB + MExp;
						while (WeaExpB / WeaDExpB >= 1) {
							WLVb = WLVb + 1;
							WeaExpB = WeaExpB - WeaDExpB;
							printf("[���Ⱑ �����߽��ϴ�!]\n");
							WeaDExpB = 3 * WLVb * (1 + 1 * (WLVb / 10)) + 5;
						}
					}
					else if (WeaA == 3) {
						WeaExpC = WeaExpC + MExp;
						while (WeaExpC / WeaDExpC > 1) {
							WLVc = WLVc + 1;
							WeaExpC = WeaExpC - WeaDExpC;
							printf("[���Ⱑ �����߽��ϴ�!]\n");
							WeaDExpC = 3 * WLVc * (1 + 1 * (WLVc / 10)) + 5;
						}
					}
					Money = Money + MMoney;
					while (Exp / DExp >= 1) {
						printf("[������ �ϼ̽��ϴ�!]\n\n");
						if (choice == 1) {
							if (Skill < 250) {
								Free = Free + 10;
								Hp = Hp + 1;
								Str = Str + 1;
								Dex = Dex + 1;
								Skill = Skill + 1;
							}
							else if (Skill >= 250 && LIM == 0) {
								printf("[����� �Ѱ迡 �ٴ޾ҽ��ϴ�.]\n[������ �� ȹ�� ���� ���� + 10]\n[��ü ���� �ɷ�ġ + 1]\n[��� ������ �� �̻� �������� �ʽ��ϴ�.]\n");
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
							printf("[�ֻ��� %d�� ȹ��]\n[���� �ֻ��� : %d��]\n", PDice, Dice);
						AK:
							if (Skill >= 250 && LIM == 0) {
								printf("[����� �Ѱ迡 �ٴ޾ҽ��ϴ�.]\n[������ �� ȹ�� �ִ� ���� + 10]\n[��� ������ �� �̻� �������� �ʽ��ϴ�.]\n");
								LIM = 1;
							}
							if (Skill < 250) {
								HL = rand() % 5 + 1;
								printf("[ü�� %d ���]\n", HL);
								SL = rand() % 5 + 1;
								printf("[�ٷ� %d ���]\n", SL);
								DL = rand() % 5 + 1;
								printf("[��ø %d ���]\n", DL);
								SKL = rand() % 5 + 1;
								printf("[��� %d ���]\n", SKL);
							}
							else {
								HL = rand() % 15 + 1;
								printf("[ü�� %d ���]\n", HL);
								SL = rand() % 15 + 1;
								printf("[�ٷ� %d ���]\n", SL);
								DL = rand() % 15 + 1;
								printf("[��ø %d ���]\n", DL);
							}
						AL:
							if (Dice == 0) {
								printf("[������ ��� �ֻ����� ���� ���������� �����Ǿ����ϴ�.]\n");
								Hp = Hp + HL;
								Str = Str + SL;
								Dex = Dex + DL;
								Skill = Skill + SKL;
							}
							else if (Dice >= 1) {
								printf("[�ɷ�ġ ��·��� �̰����� �����Ͻðڽ��ϱ�?]\n[1.��]\n[2.�ƴϿ�(�ֻ��� 1�� ���)]\n���� : ");
								scanf("%d", &choiceL);
								if (choiceL == 1) {
									Hp = Hp + HL;
									Str = Str + SL;
									Dex = Dex + DL;
									Skill = Skill + SKL;
									if (Skill >= 250) {
										Left = Skill - 250;
									BP:
										printf("[����� �Ѱ�ġ�� ���� ���� %d���� ������ �ο��Ͻðڽ��ϱ�?]\n[1.ü��]\n[2.��]\n[3.��ø]\n���� : ", Left);
										scanf("%d", &choiceP);
										if (choiceP == 1) {
											Hp = Hp + Left;
											printf("[ü���� %d��ŭ ����߽��ϴ�.]\n", Left);
										}
										else if (choiceP == 2) {
											Str = Str + Left;
											printf("[�ٷ��� %d��ŭ ����߽��ϴ�.]\n", Left);
										}
										else if (choiceP == 3) {
											Dex = Dex + Left;
											printf("[��ø�� %d��ŭ ����߽��ϴ�.]\n", Left);
										}
										else if (choice != 1 && choiceP != 2 && choiceP != 3) {
											printf("[�ùٸ� ���� �Է��ϼ���.]\n"); goto BP;
										}
										Skill = 250 - Left;
									}
								}
								else if (choiceL == 2) {
									Dice = Dice - 1;
									printf("[���� �ֻ��� ���� : %d]\n", Dice);
									goto AK;
								}
								else {
									printf("[�ùٸ� ���� �Է����ּ���.]\n"); goto AL;
								}
							}
							if (choice == 2 && Skill == 250 && LIM == 0) {
								printf("[����� �Ѱ迡 �ٴ޾ҽ��ϴ�.]\n[������ �� ȹ�� �ִ� ���� + 10]\n[��� ������ �� �̻� �������� �ʽ��ϴ�.]\n");
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
							Job = "������";
							if (MU == 0) {
								printf("[�������� ������ ����]\n");
								MU = 1;
							}
						}
					}
					printf("\n[���� ��� : %d]\n", Money);
					printf("[���� ����ġ : %d/%d]\n", Exp, DExp);
				}
				else if (HpA < 1 && MHPA > 0) {
					Money = Money * 3 / 4;
					Death = Death + 1;
					Exp = Exp / 2;
					printf("[�������� �й��ϼ̽��ϴ�.]\n[���� 1/4�� �ҽ��ϴ�.]\n[���� ����ġ�� 1/2�� �ҽ��ϴ�.]\n");
					if (Death % 3 != 0 || Death == 0) {
						printf("[3ȸ ����� ���� ������ ���� 1���� �ҽ��ϴ�.]\n[���� ��� Ƚ�� : %d]\n", Death);
					}
					if (Death % 3 == 0 && Death > 0) {
						printf("[3��° ����Դϴ�.]\n");
						if (LIM == 0) {
							RA = rand() % 4;
						}
						else if (LIM == 1) {
							RA = rand() % 3;
						}
						switch (RA) {
						case 0: if (Str > 1) {
							Str = Str - 1; printf("[�ٷ��� 1 �����߽��ϴ�.]\n");
							break;
						}
						case 1: if (Dex > 1) {
							Dex = Dex - 1; printf("[��ø�� 1 �����߽��ϴ�.]\n");
							break;
						}
						case 2: if (Hp > 1) {
							Hp = Hp - 1; printf("[ü���� 10(1) �����߽��ϴ�.]\n");
							break;
						}
						case 3: if (Skill > 1) {
							Skill = Skill - 1; printf("[����� 1 �����߽��ϴ�.]\n");
							break;
						}
						}
						printf("[���� ��� Ƚ�� : %d]\n", Death);
					}
					printf("\n[���� ������ : %d]\n", Money);
					if (ATTACK % 2 == 1 && ATTACK != 9 && ATTACK != 10) {
						printf("[%s��(��) óġ�ϴµ� �����߽��ϴ�.]\n[������ �ٰ����� �ֽ��ϴ�.]\n[����ϼ���.]\n[���� �������� �մϴ�.]\n", MName);
						ATTACK = ATTACK + 1;
					}
					//���� ���� A 
					else if (ATTACK == 9) {
						printf("[��Ű� ������ ������ �����߽��ϴ�.]\n");
						return 0;
					}
					//���� ���� B
					else if (ATTACK == 10) {
						printf("[������ ��ü�� Ȳ����� ���� �˾Ƴ����� �ᱹ ������ �����߽��ϴ�.]\n");
						return 0;
					}
					if (ATTACK == 11) {
						printf("[������ �ʹ� �ʾ������ �մϴ�.]\n");
						printf("[������ ��� ���� ���ƽ��ϴ�.]");
						return 0; 
					}
				}
			Q:
				if (Auto == 1) {
					printf("[1.����ϱ�]\n[2.������]\n���� : ");
					scanf("%d", &AUTO);
					switch (AUTO) {
					case 1: goto K;
					case 2: Auto = 0; break;
					default: printf("[�ùٸ� ���� �Է����ּ���.]\n"); goto Q;
					}
				}
				break;
			}
			case 2: {
				if (Ex + rand() % 100 < 0) {
					ML = MStr + rand() % (MStr / 2);
					printf("\n[����ġ�µ� �����߽��ϴ�!.]\n\n[%d��ŭ�� ���ظ� �Ծ����ϴ�.]\n", ML * 2);
					HpA = HpA - ML * 2;
					goto e;
				}
				else printf("\n[����ġ�µ� �����߽��ϴ�.]\n\n"); goto Z;
			T:
				if (Auto == 1) {
					printf("[1.����ϱ�]\n[2.������]\n���� : ");
					scanf("%d", &AUTO);
					switch (AUTO) {
					case 1: goto K;
					case 2: Auto = 0; break;
					default: printf("[�ùٸ� ���� �Է����ּ���.]\n"); goto T;
					}
				}
			}
			default: printf("[�ùٸ� ���� �Է��ϼ���.]\n"); goto X;
			}
		}
		if (choice == 1) {
			if (choiceA == 5) {
			c:
				printf("[���� ���� : %d]\n\n", Free);
				printf("[ü���� ���� 1�� �þ�� 10�� ����մϴ�.]\n");
				printf("[�ٷ��� ���ݷ¿� ������ ��Ĩ�ϴ�.]\n");
				printf("[��ø�� �߰� ���ݰ� ������ ������ ��Ĩ�ϴ�.]\n");
				printf("[����� ���ο� ����� ������� �ʿ��մϴ�.]\n\n");
				printf("[1.ü��]\n[2.�ٷ�]\n[3.��ø]\n[4.���]\n[5.������]\n���� : ");
				scanf("%d", &choiceA);
			b:
				if (choiceA == 1) {
					printf("[ü��] : %d + ", Hp);
					scanf("%d", &B);
					if (B > Free || B < 0) {
						printf("[�ùٸ� ���� �Է����ּ���.]\n");
						goto b;
					}
					Hp = Hp + B;
					HpB = Hp + DtBA;
					HpA = HpB * 10;
					Free = Free - B;
				}
				else if (choiceA == 2) {
					printf("[�ٷ�] : %d + ", Str);
					scanf("%d", &B);
					if (B > Free || B < 0) {
						printf("[�ùٸ� ���� �Է����ּ���.]\n");
						goto b;
					}
					Str = Str + B;
					Free = Free - B;
				}
				else if (choiceA == 3) {
					printf("[��ø] : %d + ", Dex);
					scanf("%d", &B);
					if (B > Free || B < 0) {
						printf("[�ùٸ� ���� �Է����ּ���.]");
						goto b;
					}
					Dex = Dex + B;
					Free = Free - B;
				}
				else if (choiceA == 4 && LIM == 0) {
					printf("[���] : %d + ", Skill);
					scanf("%d", &B);
					if (B > Free || B < 0) {
						printf("[�ùٸ� ���� �Է����ּ���.]");
						goto b;
					}
					Skill = Skill + B;
					Free = Free - B;
					if (Skill > 250) {
						Left = Skill - 250;
						Free = Free + Left;
						Skill = 250;
						printf("[����� �Ѱ�ġ�� ���� ������ ������������ ��ȯ�˴ϴ�.]\n");
					}
				}
				else if (choiceA == 4 && LIM == 1) {
					printf("[�� �̻� ����� ������ų �� �����ϴ�.]\n");
				}
				else if (choiceA == 5) {
					continue;
				}
				else {
					printf("[�ùٸ� ���� �Է����ּ���.]"); goto c;
				}
			}
			//���� ������ ���´� �ﰢ����
			if (Triple == 1) {
			BA:
				printf("[1.%s]\n[2.%s]\n[3.%s]\n[4.������]\n���� : ", SaveNamea, SaveNameb, SaveNamec);
				scanf("%d", &choiceO);
				if (choiceO == 4) {
					continue;
				}
				if (SaveA == choiceO || SaveB == choiceO || SaveC == choiceO) {
					while (1) {
						printf("[����! ����� ���� ������ ������ �˴ϴ�!]\n[1.����]\n[2.������]\n���� : ");
						scanf("%d", &choiceL);
						if (choiceL == 1) {
							break;
						}
						else if (choiceL == 2) {
							goto START;
						}
						else printf("[�ùٸ� ���� �Է��ϼ���.]\n");
					}
				}
				else if (choiceO != 1 && choiceO != 2 && choiceO != 3) {
					printf("[�ùٸ� ���� �Է��ϼ���.]\n"); goto OTL;
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
					outA = fopen("�ؽ�Ʈ RPG Savefile 1.dat", "wb");
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
						printf("[������ �����߽��ϴ�.]\n");
					}
				}
				else if (choiceO == 2) {
					FILE* outB;
					outB = fopen("�ؽ�Ʈ RPG Savefile 2.dat", "wb");
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
						printf("[������ �����߽��ϴ�.]\n");
					}
				}
				else if (choiceO == 3) {
					FILE* outC;
					outC = fopen("�ؽ�Ʈ RPG Savefile 3.dat", "wb");
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
						printf("[������ �����߽��ϴ�.]\n");
					}
				}
				FILE* out;
				out = fopen("�ؽ�Ʈ RPG.dat", "wb");
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
					printf("[1.%s]\n[2.%s]\n[3.%s]\n[4.������]\n���� : ", SaveNamea, SaveNameb, SaveNamec);
					scanf("%d", &choiceO);
					if (choiceO == 4) {
						break;
					}
					if (choiceO == SaveA || choiceO == SaveB || choiceO == SaveC) {
						break;
					}
					else if (choiceO != 1 && choiceO != 2 && choiceO != 3) {
						if (choice == 0){
							printf("[�ҷ��� ������ �����ϴ�.]\n"); goto NEW;
						} 
						printf("[�ùٸ� ���� �Է��ϼ���.]\n");
					}
					else if (choice == 0) {
						printf("[�ҷ��� ������ �����ϴ�.]\n"); goto NEW;
					}
					else printf("[�ҷ��� ������ �����ϴ�.]\n"); goto START;
				}
				if (choiceO == 1) {
					FILE* outA;
					outA = fopen("�ؽ�Ʈ RPG Savefile 1.dat", "rb");
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
						printf("[������ �ҷ��Խ��ϴ�.]\n");
					}
				}
				else if (choiceO == 2) {
					FILE* outB;
					outB = fopen("�ؽ�Ʈ RPG Savefile 2.dat", "rb");
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
						printf("[������ �ҷ��Խ��ϴ�.]\n");
					}
				}
				else if (choiceO == 3) {
					FILE* outC;
					outC = fopen("�ؽ�Ʈ RPG Savefile 3.dat", "rb");
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
						printf("[������ �ҷ��Խ��ϴ�.]\n");
					}
				}
				FILE* out;
				out = fopen("�ؽ�Ʈ RPG.dat", "rb");
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
			//���� ���� 
		OTL:
			if (choiceA == 6) {
				goto BA;
			}
			else if (choiceA == 7) {
				goto BO;
			}
			else if (choiceA == 8) {
			KO:
				printf("[�����Ͻðڽ��ϱ�?]\n[1.��]\n[2.�ƴϿ�]\n���� : ");
				scanf("%d", &choiceH);
				if (choiceH == 1) {
					return 0;
				}
				else if (choiceH == 2) {
					continue;
				}
				else printf("[�ùٸ� ���� �Է��ϼ���.]\n"); goto KO;
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
				printf("[�����Ͻðڽ��ϱ�?]\n[1.��]\n[2.�ƴϿ�]\n���� : ");
				scanf("%d", &choiceH);
				if (choiceH == 1) {
					return 0;
				}
				else if (choiceH == 2) {
					continue;
				}
				else printf("[�ùٸ� ���� �Է��ϼ���.]\n"); goto OO;
			}
		}
		if (choiceA == 13) {
			printf("����� �� ������ ����� �˾Ƴ½��ϴ�.\n");
			delay(1000);
			printf("���ǰ� �¼� �ο켼��.");
			delay(1000);
			ATTACK = 11;
			goto ATA;
		}
	}
}
