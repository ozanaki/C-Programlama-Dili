using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Vize_Final
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            float vize, final;
            float ortalama;

            if (textBox1.Text.Length > 0 &&
               textBox2.Text.Length > 0 &&
               textBox3.Text.Length == 0)
            {
                vize = float.Parse(textBox1.Text);
                final = float.Parse(textBox2.Text);
                ortalama = vize * 0.3f + final * 0.7f;
                textBox3.Text = ortalama.ToString();
            }
            else if(textBox1.Text.Length > 0 &&
               textBox2.Text.Length == 0 &&
               textBox3.Text.Length > 0)
            {
                vize = float.Parse(textBox1.Text);
                ortalama = float.Parse(textBox3.Text);
                final = (ortalama - 0.3f * vize) / 0.7f;
                textBox2.Text = final.ToString();
            }
            else if (textBox1.Text.Length == 0 &&
               textBox2.Text.Length > 0 &&
               textBox3.Text.Length > 0)
            {
                final = float.Parse(textBox2.Text);
                ortalama = float.Parse(textBox3.Text);
                vize = (ortalama - 0.7f * final) / 0.3f;
                textBox1.Text = vize.ToString();
            }
            else
            {
                MessageBox.Show("İki kutucuğu doldurun, herhangi biri boş kalsın.");
            }

        }
    }
}
