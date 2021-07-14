#pragma once
#include "StackFunction.h"

#include<string.h>
#include<stdlib.h>
#include<math.h>


#define ADD 0
#define SUB 1
#define MUL 2
#define DIV 3
#define POW 4
#define LP 1000 // '('
#define RP 1001 // ')'
#define SIN 101
#define COS 102
#define TAN 103
#define X 9
#define VAL 20

#define MAX 1000

struct ITEM {
	int type;
	double val;
};
//char str[100];
struct ITEM queue[MAX];
int q_head, q_tail;
struct ITEM stack[MAX];
int stack_p;
int cnt;
namespace CalculateForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing; 

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  button1;

	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

		StackFunction St;
		
		System::Drawing::Graphics^ G;
		//array <char>^nue;
		int func_init = 0;
		int ip;
		int w ;
		int h ;
		int h_bot ;
		int h_top ;
		double a = -5,b = 5;
		double tp = -5, bt = 5;
		double tp2 = -5, bt2 = 5;
		double in = 0.5;
		int step = 1000;
		//int y_ab=20;

	private: System::Windows::Forms::Timer^  timer1;


	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
			 int w_left;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox1->Location = System::Drawing::Point(21, 35);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(283, 43);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"cos(x+2)";
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->panel1->Location = System::Drawing::Point(423, 8);
			this->panel1->Name = L"panel1";
			this->panel1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->panel1->Size = System::Drawing::Size(740, 634);
			this->panel1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button1->Location = System::Drawing::Point(202, 95);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(102, 39);
			this->button1->TabIndex = 2;
			this->button1->Text = L"製圖";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button2->Location = System::Drawing::Point(156, 314);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(54, 52);
			this->button2->TabIndex = 6;
			this->button2->Text = L"↑";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button3->Location = System::Drawing::Point(105, 364);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(54, 52);
			this->button3->TabIndex = 7;
			this->button3->Text = L"←";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button4->Location = System::Drawing::Point(156, 415);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(54, 52);
			this->button4->TabIndex = 8;
			this->button4->Text = L"↓";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button5->Location = System::Drawing::Point(207, 364);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(54, 52);
			this->button5->TabIndex = 9;
			this->button5->Text = L"→";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button6->Location = System::Drawing::Point(21, 95);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(114, 39);
			this->button6->TabIndex = 10;
			this->button6->Text = L"轉換後序";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->button7->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button7->Location = System::Drawing::Point(357, 277);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(60, 120);
			this->button7->TabIndex = 11;
			this->button7->Text = L"↓↑";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->button8->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button8->Location = System::Drawing::Point(357, 414);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(60, 120);
			this->button8->TabIndex = 12;
			this->button8->Text = L"↑↓";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button9->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button9->Location = System::Drawing::Point(451, 648);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(131, 54);
			this->button9->TabIndex = 13;
			this->button9->Text = L"→ ←";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button10->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button10->Location = System::Drawing::Point(599, 648);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(131, 54);
			this->button10->TabIndex = 14;
			this->button10->Text = L"← →";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(110, 184);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 36);
			this->label1->TabIndex = 15;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label2->Location = System::Drawing::Point(26, 184);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 36);
			this->label2->TabIndex = 16;
			this->label2->Text = L"後序:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(45, 552);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(121, 25);
			this->label3->TabIndex = 17;
			this->label3->Text = L"紅色-原函數";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label4->ForeColor = System::Drawing::Color::Blue;
			this->label4->Location = System::Drawing::Point(45, 592);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(101, 25);
			this->label4->TabIndex = 18;
			this->label4->Text = L"藍色-微分";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(45, 630);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(101, 25);
			this->label5->TabIndex = 19;
			this->label5->Text = L"綠色-積分";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1175, 714);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Resize += gcnew System::EventHandler(this, &MyForm::MyForm_Resize);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int isp(struct ITEM data) {
			if (data.type == ADD) return 1;
			if (data.type == SUB) return 1;
			if (data.type == MUL) return 2;
			if (data.type == DIV) return 2;
			if (data.type == POW) return 3;
			if (data.type == SIN) return 100;
			if (data.type == COS) return 100;
			if (data.type == TAN) return 100;
			if (data.type == LP) return 0;
		}

		int icp(struct ITEM data) {
			if (data.type == ADD) return 1;
			if (data.type == SUB) return 1;
			if (data.type == MUL) return 2;
			if (data.type == DIV) return 2;
			if (data.type == POW) return 3;
			if (data.type == SIN) return 100;
			if (data.type == COS) return 100;
			if (data.type == TAN) return 100;
			if (data.type == LP) return 9999;
		}

		void init_q() {
			q_head = 0;
			q_tail = 0;
		}
		void init_st() {
			stack_p = 0;
		}
		int q_empty() {
			if (q_head == q_tail) return 1;
			else return 0;
			//檢查字串是否結束
		}
		struct ITEM q_look() {
			struct ITEM tmp;
			if (q_empty()) {
				tmp.type = -1;
			}
			else {
				tmp = queue[q_head];
			}
			return tmp;
		}
		void enqueue(struct ITEM data) {
			queue[q_tail++] = data;
		}

		struct ITEM dequeue() {
			struct ITEM tmp;
			if (q_empty()) {
				tmp.type = -1;
			}
			else {
				tmp = queue[q_head++];
			}
			return tmp;
		}

		int st_empty() {
			if (stack_p == 0) return 1;
			else return 0;
		}

		void push(struct ITEM data) {
			stack[stack_p++] = data;
		}

		struct ITEM pop() {
			struct ITEM tmp;
			if (st_empty())
				tmp.type = -1;
			else
				tmp = stack[--stack_p];
			return tmp;
		}


		struct ITEM st_look() {
			struct ITEM tmp;
			if (st_empty())
				tmp.type = -1;
			else
				tmp = stack[stack_p - 1];
			return tmp;
		}

		//struct ITEM term_to_item(char * str) {
		struct ITEM term_to_item(char *str) {
			//MessageBox::Show(Convert::ToString(str[0]));
			struct ITEM item;
			item.type = -1; //means error
			if (str[0] == '+') {
				//MessageBox::Show("get: +");
				item.type = ADD;
			}
			if (str[0] == '-') {
				//MessageBox::Show("get: -");
				item.type = SUB;
			}
			if (str[0] == '*') {
				//MessageBox::Show("get: *");
				item.type = MUL;
			}
			if (str[0] == '/') {
				//MessageBox::Show("get: /");
				item.type = DIV;
			}
			if (str[0] == '^') {
				item.type = POW;
			}
			if (str[0] == '(') {
				item.type = LP;
			}
			if (str[0] == ')') {
				item.type = RP;
			}
			if (str[0]>='0' && str[0]<='9') {
				item.type = VAL;
				item.val = atof(str);
			}
			if (!strcmp(str, "cos")) {
				item.type = COS;
			}
			if (!strcmp(str, "sin")) {
				item.type = SIN;
			}
			if (!strcmp(str, "x")) {
				item.type = X;
			}
			return item;
		}

		void to_postfix(struct ITEM data[], int cnt) {
			int i = 0;
			while (i < cnt) {
				//label1->Text = label1->Text + " " + data[i].type.ToString();
				//MessageBox::Show(data[i].type.ToString());
				if (data[i].type == VAL || data[i].type == X)
					enqueue(data[i]);
				else {
					if (data[i].type != RP) {
						while (!st_empty()) {
							//if ( isp( st_look() ) >= icp(data[i]) )
							if (isp(st_look()) > icp(data[i]) ||
								(isp(st_look()) == icp(data[i]) && icp(data[i])<100))
								enqueue(pop());
							else
								break;
						}
						push(data[i]);
					}
					else { // is ')'
						while (st_look().type != LP) {
							enqueue(pop());
						}
						pop();
					}
				}
				i++;
			}
			while (!st_empty()) enqueue(pop());
		}

		int need_2_op(struct ITEM data) {
			if (data.type == ADD) return 1;
			if (data.type == SUB) return 1;
			if (data.type == MUL) return 1;
			if (data.type == DIV) return 1;
			if (data.type == POW) return 1;
			return 0;
		}

		double postfix_computation(struct ITEM postfix[], int cnt, double x) {
			//printf("\n");
			//printf("x=%.2lf\n", x);
			int i = 0;
			double op1_val, op2_val;
			struct ITEM res, op1, op2;
			res.type = VAL;
			while (i < cnt) {
				if (postfix[i].type == VAL || postfix[i].type == X)
					push(postfix[i]);
				else {
					if (need_2_op(postfix[i])) { //+,-,*,/
						op2 = pop();
						op1 = pop();
						if (op1.type == X) op1_val = x;
						else op1_val = op1.val;
						if (op2.type == X) op2_val = x;
						else op2_val = op2.val;

						if (postfix[i].type == ADD)
							res.val = op1_val + op2_val;
						if (postfix[i].type == SUB)
							res.val = op1_val - op2_val;
						if (postfix[i].type == MUL)
							res.val = op1_val*op2_val;
						if (postfix[i].type == DIV)
							res.val = op1_val / op2_val;
						if (postfix[i].type == POW)
							res.val = pow(op1_val, op2_val);
						/*printf("%.2lf %s %.2lf = %.2lf\n",
							op1_val,
							postfix[i].type == ADD ? " + " :
							postfix[i].type == SUB ? " - " :
							postfix[i].type == MUL ? " * " :
							postfix[i].type == DIV ? " / " :
							postfix[i].type == POW ? " ^ " :
							" ? ",
							op2_val, res.val);*/
					}
					else { // Sin, Cos, Tan
						op1 = pop();
						if (op1.type == X) op1_val = x;
						else op1_val = op1.val;

						if (postfix[i].type == SIN)
							res.val = sin(op1_val);
						if (postfix[i].type == COS)
							res.val = cos(op1_val);
						if (postfix[i].type == TAN)
							res.val = tan(op1_val);

						/*printf("%s(%.2lf)  = %.2lf\n",
							postfix[i].type == SIN ? "Sin" :
							postfix[i].type == COS ? "Cos" :
							postfix[i].type == TAN ? "Tan" :
							" Error",
							op1_val, res.val);*/
					}
					push(res);
				}
				i++;
			}
			op1 = pop() ;
			if(op1.type==X) op1_val = x;
			else op1_val=op1.val;
			return op1_val;
		}

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		
		
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		draw_all();
		
	}
	void draw_all() {
		if (func_init == 0) return;
		w = panel1->Width;
		h = panel1->Height;
		h_bot = panel1->Bottom;
		h_top = panel1->Top;
		w_left = panel1->Left;
		
		
		G = panel1->CreateGraphics();
		G->Clear(System::Drawing::Color::White);
		//for (int i = 0; i < 11; i++) {
		/*array<System::Drawing::Point>^ PT;

		PT = gcnew array<System::Drawing::Point>(3);
		PT[0] = System::Drawing::Point(0, 10);
		PT[1] = System::Drawing::Point(20, 30);
		PT[2] = System::Drawing::Point(10, 50);
		//}*/

		//G->DrawCurve(System::Drawing::Pens::Red, PT);
		
		//G->DrawLine(System::Drawing::Pens::DarkSeaGreen, (int)coor_left(300), (int)coor_top(tp), (int)coor_left(300), (int)coor_top(bt));
		//G->DrawLine(System::Drawing::Pens::Black, w / 2, h_top, w / 2, h_bot);
		
		for (double i = tp; i < bt; i+=in) {
			G->DrawLine(System::Drawing::Pens::LightGray, (int)coor_left(a), (int)coor_top(i), (int)coor_left(b), (int)coor_top(i));
		}
		for (double i = a; i < b; i+=in) {
			G->DrawLine(System::Drawing::Pens::LightGray, (int)coor_left(i), (int)coor_top(tp), (int)coor_left(i), (int)coor_top(bt));

		}
		FontFamily ^ fnt = gcnew FontFamily(L"Times New Roman");
		System::Drawing::Font(fnt, 30.00F);
		G->DrawLine(System::Drawing::Pens::Black, (int)coor_left(a), (int)coor_top(0), (int)coor_left(b), (int)coor_top(0));
		G->DrawLine(System::Drawing::Pens::Black, (int)coor_left(0), (int)coor_top(tp), (int)coor_left(0), (int)coor_top(bt));
		double dx = 0.5;
		double x = a - dx;
		FontFamily ^ fntFamily = gcnew FontFamily(L"Times New Roman");
		System::Drawing::Font ^ fntWrite = gcnew System::Drawing::Font(fntFamily, 10.00F, FontStyle::Regular);
		while (x <= b) {
			
			String^ dstring = System::Math::Round(x,1).ToString();
			G->DrawString(dstring, fntWrite, Brushes::DimGray, (int)coor_left(x), (int)coor_top(0));
			x = x + dx;
		}
		x = tp - dx;
		while (x <= bt) {

			String^ dstring = System::Math::Round(x, 1).ToString();
			G->DrawString(dstring, fntWrite, Brushes::DimGray, (int)coor_left(0), (int)coor_top(x));
			x = x + dx;
		}
		/*for (int i = 0; i < 5; i++) {
			String^ dstring = i.ToString();
			FontFamily ^ fntFamily = gcnew FontFamily(L"Times New Roman");
			System::Drawing::Font ^ fntWrite = gcnew System::Drawing::Font(fntFamily, 12.00F, FontStyle::Regular);
			G->DrawString(dstring, fntWrite, Brushes::Blue, (int)coor_left(0), (int)coor_top(tp));
		}*/
		//e.Graphics.DrawString(drawString, drawFont, drawBrush, x, y, drawFormat);
		Afunction();
		Ifunction();
		Dfunction();
	}
	void Agstruck(System::String^x) {

		//MessageBox::Show(x);

	}
	char * cnvrt(System::String^x) {

		/*pin_ptr<const wchar_t> wch = PtrToStringChars(x);
		size_t origsize = wcslen(wch) + 1;
		const size_t newsize = origsize * 2;
		size_t convertedChars = 0;
		char *nstring = new char[newsize];
		wcstombs_s(&convertedChars, nstring, newsize, wch, _TRUNCATE);
		return nstring;*/
		char *nstring = new char[1000];
		int i;
		for (i = 0; i < x->Length; i++) {
			//nstring[i] = x->Substring(i, 1)->ToChar
			nstring[i] = Convert::ToChar(x->Substring(i, 1));
			//Convert::ToChar(x->Substring(i, 1))
		}
		nstring[i] = '\0';
		return nstring;
	}
	double coor_left(double x) {
		return w*(x-a) / (b - a);
		//w ->視窗寬度  a->預設最左邊的X軸數值  b->預設最右邊的X軸數值
		//意思為寬度乘以X值與最右方的預設x值，再除以預設的(虛擬)X軸長度
	}
	double coor_top(double y) {
		return h*(y - bt) / (tp - bt);
		//h ->視窗高度 tp->預設最上方的Y軸數值 bt->預設最下方的Y軸數值
		//意思為高度乘以Y值與最下方的預設y值，再除以預設的(虛擬)Y軸長度
	}

	//double inter_left(double x) {
	//	return w*(x - a) / (b - a)+350;
	//}
	double inter_top(double y) {
		return h*(y - bt2) / ((tp2 - bt2));
	}
	
	double differential(double x) {
		//微分
		double dx = 0.005;
		double sum = 0;

	    sum=(func(x+dx) - func(x)) / dx;  //f(x+a)-f(x)/a
		return sum;
	}
	double func(double x) {
		//原函式->使用者使用textbox輸入的函式
		//帶入X值求出Y值(val)

		double val;
		init_st();  //將stack的數值初始化
		val = postfix_computation(queue, q_head, x); //將x值帶入後序計算
		//queue->  textbox 經過分割後的字串(struct)，包含字串的權限以及內容
		//q_head-> textbox 經過分割後的字串長度
		return val;

	}
	double intg(double x) {
		double dx = 0.005;
		double sum = 0;
		if (x < 0) dx =-0.005;
		double i;
		for (i = 0; (x >= 0 && i <= x) || (x < 0 && i >= x); i = i + dx){
			sum = sum + func(i)*dx;
		}
		return sum;
		
	}
			 void Afunction() {
				 array<System::Drawing::Point>^ PN;
			
				 double x;
				 double y;
				 double dx=(b-a)/step; //(b-a)為預先設定之X軸長度，step為點的總數

				 PN = gcnew array<System::Drawing::Point>(step);

				 x = a; //使X值一開始為預設最右方(最小)X值
				 for (int i = 0; i < step; i++) {
					 y = func(x); //X值帶入函式得出Y值
					 //另有積分 y=intg(x) 以及微分 y=differential(x)

					 PN[i] = System::Drawing::Point(coor_left(x), coor_top(y));
					 //將計算出的點帶入視窗
					 x = x + dx;
				 }
				
				
				 
				 G->DrawCurve(System::Drawing::Pens::Red, PN);
				
			 }
			 void Ifunction() {
				 //2*x+5

				
				 array<System::Drawing::Point>^ PI;
				 double x;
				 double y;
				 double dx = (b - a) / step;
				 PI = gcnew array<System::Drawing::Point>(step);
				 x = a;
				 for (int i = 0; i < step; i++) {
					 //y = intergral(x);
					 y = intg(x);
					 PI[i] = System::Drawing::Point(coor_left(x), coor_top(y));
					 x = x + dx;
				 }
				


				
				  G->DrawCurve(System::Drawing::Pens::YellowGreen, PI);
			 }
			 void Dfunction() {
				 //2*x+5


				 array<System::Drawing::Point>^ PD;
				 double x;
				 double y;
				 double dx = (b - a) / step;
				 PD = gcnew array<System::Drawing::Point>(step);
				 x = a;
				 for (int i = 0; i < step; i++) {
					 y = differential(x);
					 PD[i] = System::Drawing::Point(coor_left(x), coor_top(y));
					 x = x + dx;
				 }




				 G->DrawCurve(System::Drawing::Pens::Blue, PD);
			 }

			
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		
	}
private: System::Void MyForm_Resize(System::Object^  sender, System::EventArgs^  e) {
	draw_all();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	double delta = (tp - bt) / 10;
	double delta2 = (tp2 - bt2) / 10;
	tp2 = tp2 - delta2;
	bt2 = bt2 - delta2;
	tp = tp - delta;
	bt = bt - delta;
	draw_all();
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	double delta = (b - a) / 10;

	a = a + delta;
	b = b + delta;
	draw_all();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	double delta = (b - a) / 10;

	a = a - delta;
	b = b - delta;
	draw_all();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	double delta = (tp - bt) / 10;
	double delta2 = (tp2 - bt2) / 10;
	tp2 = tp2 + delta2;
	bt2 = bt2 + delta2;
	tp = tp + delta;
	bt = bt + delta;
	draw_all();
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	cnt = 0;
	struct ITEM item[1000];
	struct ITEM get;
	String^function = textBox1->Text;
	String^newFunction;
	int aflag = 0, numflag = 0;
	for (int i = 0; i <= textBox1->TextLength-1 ; i++) {

		if (function[i].IsNumber(function[i]) == true) {
			//MessageBox::Show("num");
			St.putIn(Convert::ToString(function[i]));
			numflag++;
			aflag = 1;
		}
		else if (function[i].IsLetter(function[i]) == true) {
			//MessageBox::Show("char");
			aflag = 0;
			if (numflag != 0) {

				//MessageBox::Show((St.putOut()));
				Agstruck(St.putOut());
				item[cnt++] = term_to_item(cnvrt(St.putOut()));
				St.endStack();
				St.putIn("*");
				//MessageBox::Show((St.putOut()));
				Agstruck(St.putOut());
				item[cnt++] = term_to_item(cnvrt(St.putOut()));
				St.endStack();
				aflag = 0;
				numflag = 0;
			}

			St.putIn(Convert::ToString(function[i]));
			aflag++;

		}
		else {
			if (aflag != 0) {
				//MessageBox::Show((St.putOut()));
				Agstruck(St.putOut());
				//item[cnt++] = term_to_item(cnvrt(St.putOut()));
				item[cnt++] = term_to_item(cnvrt(St.putOut()));
				St.endStack();
				aflag = 0;
				numflag = 0;
			}
			
				St.putIn(Convert::ToString(function[i]));
				//MessageBox::Show((St.putOut()));
				Agstruck(St.putOut());
				item[cnt++] = term_to_item(cnvrt(St.putOut()));
				St.endStack();
				//add
				aflag = 0;
				//add end
				numflag = 0;
			
		}
		if (aflag == 3) {

			//MessageBox::Show((St.putOut()));
			Agstruck(St.putOut());
			item[cnt++] = term_to_item(cnvrt(St.putOut()));
			St.endStack();
			aflag = 0;
			numflag = 0;
		}


		//MessageBox::Show(newFunction);

	}

	//MessageBox::Show((St.putOut()));
	if (St.putOut() != "") {
		Agstruck(St.putOut());
		item[cnt++] = term_to_item(cnvrt(St.putOut()));
		St.endStack();
	}
	
	
	


	/////////////////////////////////////////////////////////////////////
	//for (cnt = 0; cnt < ip + 1; cnt++) {
		//item[cnt] =term_to_item(*str[cnt]);

	//}
		
		
	//item[cnt++] = term_to_item("x");
	/*item[cnt++] = term_to_item("^");
	item[cnt++] = term_to_item("2");
	item[cnt++] = term_to_item("+");
	item[cnt++] = term_to_item("x");*/
	
	

	//MessageBox::Show(cnt.ToString());
	init_q();
	init_st();
	to_postfix(item, cnt);

	
	label1->Text = "";
	while (!q_empty()) {
		get = dequeue();
		if (get.type == ADD) label1->Text = label1->Text + ("+ ");
		else if (get.type == SUB) label1->Text = label1->Text + ("- ");
		else if (get.type == MUL) label1->Text = label1->Text + ("* ");
		else if (get.type == DIV) label1->Text = label1->Text + ("/ ");
		else if (get.type == X) label1->Text = label1->Text + ("x ");
		else if (get.type == POW) label1->Text = label1->Text + ("^ ");
		else if (get.type == LP) label1->Text = label1->Text + ("( ");
		else if (get.type == RP) label1->Text = label1->Text + (") ");
		else if (get.type == SIN) label1->Text = label1->Text + ("Sin ");
		else if (get.type == COS) label1->Text = label1->Text + ("Cos ");
		else if (get.type == TAN) label1->Text = label1->Text + ("Tan ");
		else if (get.type == VAL) label1->Text = label1->Text + ( get.val.ToString());
		else label1->Text = label1->Text + ("Error ");
	}
	func_init = 1;
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	double delta = 1.2;
	double mp = (tp + bt) / 2;
	double mp2 = (tp2 + bt2) / 2;
	tp = mp + (tp - mp)*delta;
	bt = mp - (mp - bt)*delta;
	tp2 = mp2 + (tp2 - mp2)*delta;
	bt2 = mp2 - (mp2 - bt2)*delta;
	
	draw_all();
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	double delta = 0.8;
	double mp = (tp + bt) / 2;
	double mp2 = (tp2 + bt2) / 2;
	tp = mp + (tp - mp)*delta;
	bt = mp - (mp - bt)*delta;
	tp2 = mp2 + (tp2 - mp2)*delta;
	bt2 = mp2 - (mp2 - bt2)*delta;
	
	draw_all();
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {

	double delta = 1.2;
	double mp = (tp + bt) / 2;
	a = mp + (a - mp)*delta;
	b = mp - (mp - b)*delta;
	if (b - a > 5) in = 0.2;
	if (b - a > 10) in = 0.5;
	if (b - a > 20) in = 1;
	if (b - a > 40) in = 2;
	if (b - a > 80) in = 4;
	if (b - a > 160) in = 8;
	//MessageBox::Show(in.ToString());
	draw_all();
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	double delta = 0.8;
	double mp = (tp + bt) / 2;
	a = mp + (a - mp)*delta;
	b = mp - (mp - b)*delta;
	if (b - a > 5) in = 0.2;
	if (b - a > 10) in = 0.5;
	if (b - a > 20) in = 1;
	if (b - a > 40) in = 2;
	if (b - a > 80) in = 4;
	if (b - a > 160) in = 8;

	draw_all();
}
};
}
