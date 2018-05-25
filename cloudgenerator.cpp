/* ------------------------------------------------------------
name: "Cloud Generator"
version: "0.0"
Code generated with Faust 2.5.10 (https://faust.grame.fr)
Compilation options: -scal -ftz 0
------------------------------------------------------------ */

#ifndef  __mydsp_H__
#define  __mydsp_H__

#ifndef FAUSTFLOAT
#define FAUSTFLOAT float
#endif 

#include <cmath>
#include <math.h>

static float mydsp_faustpower2_f(float value) {
	return (value * value);
	
}

#ifndef FAUSTCLASS 
#define FAUSTCLASS mydsp
#endif
#ifdef __APPLE__ 
#define exp10f __exp10f
#define exp10 __exp10
#endif

class mydsp : public dsp {
	
 private:
	
	FAUSTFLOAT fHslider0;
	FAUSTFLOAT fCheckbox0;
	int iVec0[2];
	FAUSTFLOAT fHslider1;
	int fSamplingFreq;
	float fConst0;
	float fConst1;
	FAUSTFLOAT fHslider2;
	FAUSTFLOAT fHslider3;
	FAUSTFLOAT fHslider4;
	float fRec2[2];
	float fConst2;
	FAUSTFLOAT fHslider5;
	float fRec3[2];
	float fRec4[2];
	float fRec0[2];
	float fRec5[2];
	float fRec7[2];
	float fRec9[2];
	float fRec11[2];
	float fRec13[2];
	float fRec15[2];
	float fRec17[2];
	float fRec19[2];
	float fRec21[2];
	float fRec22[2];
	float fRec23[2];
	float fRec24[2];
	float fRec25[2];
	float fRec26[2];
	float fRec27[2];
	float fRec28[2];
	float fRec29[2];
	float fRec30[2];
	float fRec31[2];
	float fRec32[2];
	float fRec33[2];
	float fRec34[2];
	float fRec35[2];
	float fRec36[2];
	float fRec37[2];
	float fRec38[2];
	FAUSTFLOAT fHslider6;
	float fRec39[2];
	float fConst3;
	FAUSTFLOAT fHslider7;
	float fRec41[2];
	float fRec42[3];
	float fVec1[2];
	float fRec40[2];
	FAUSTFLOAT fButton0;
	float fConst4;
	FAUSTFLOAT fHslider8;
	float fRec43[2];
	float fConst5;
	FAUSTFLOAT fHslider9;
	FAUSTFLOAT fHslider10;
	float fRec45[2];
	FAUSTFLOAT fHslider11;
	float fRec44[2];
	FAUSTFLOAT fHslider12;
	float fRec46[2];
	
 public:
	
	void metadata(Meta* m) { 
		m->declare("basics.lib/name", "Faust Basic Element Library");
		m->declare("basics.lib/version", "0.0");
		m->declare("envelopes.lib/author", "GRAME");
		m->declare("envelopes.lib/copyright", "GRAME");
		m->declare("envelopes.lib/license", "LGPL with exception");
		m->declare("envelopes.lib/name", "Faust Envelope Library");
		m->declare("envelopes.lib/version", "0.0");
		m->declare("filters.lib/name", "Faust Filters Library");
		m->declare("filters.lib/version", "0.0");
		m->declare("maths.lib/author", "GRAME");
		m->declare("maths.lib/copyright", "GRAME");
		m->declare("maths.lib/license", "LGPL with exception");
		m->declare("maths.lib/name", "Faust Math Library");
		m->declare("maths.lib/version", "2.1");
		m->declare("name", "Cloud Generator");
		m->declare("oscillators.lib/name", "Faust Oscillator Library");
		m->declare("oscillators.lib/version", "0.0");
		m->declare("signals.lib/name", "Faust Signal Routing Library");
		m->declare("signals.lib/version", "0.0");
		m->declare("version", "0.0");
	}

	virtual int getNumInputs() {
		return 0;
		
	}
	virtual int getNumOutputs() {
		return 2;
		
	}
	virtual int getInputRate(int channel) {
		int rate;
		switch (channel) {
			default: {
				rate = -1;
				break;
			}
			
		}
		return rate;
		
	}
	virtual int getOutputRate(int channel) {
		int rate;
		switch (channel) {
			case 0: {
				rate = 1;
				break;
			}
			case 1: {
				rate = 1;
				break;
			}
			default: {
				rate = -1;
				break;
			}
			
		}
		return rate;
		
	}
	
	static void classInit(int samplingFreq) {
		
	}
	
	virtual void instanceConstants(int samplingFreq) {
		fSamplingFreq = samplingFreq;
		fConst0 = min(192000.0f, max(1.0f, float(fSamplingFreq)));
		fConst1 = (1.0f / fConst0);
		fConst2 = (6.28318548f / fConst0);
		fConst3 = (3.14159274f / fConst0);
		fConst4 = (0.00100000005f * fConst0);
		fConst5 = (1000.0f / fConst0);
		
	}
	
	virtual void instanceResetUserInterface() {
		fHslider0 = FAUSTFLOAT(0.5f);
		fCheckbox0 = FAUSTFLOAT(0.0f);
		fHslider1 = FAUSTFLOAT(0.0f);
		fHslider2 = FAUSTFLOAT(220.0f);
		fHslider3 = FAUSTFLOAT(0.01f);
		fHslider4 = FAUSTFLOAT(0.0f);
		fHslider5 = FAUSTFLOAT(1.0f);
		fHslider6 = FAUSTFLOAT(1.0f);
		fHslider7 = FAUSTFLOAT(10000.0f);
		fButton0 = FAUSTFLOAT(0.0f);
		fHslider8 = FAUSTFLOAT(500.0f);
		fHslider9 = FAUSTFLOAT(100.0f);
		fHslider10 = FAUSTFLOAT(10.0f);
		fHslider11 = FAUSTFLOAT(0.69999999999999996f);
		fHslider12 = FAUSTFLOAT(0.0f);
		
	}
	
	virtual void instanceClear() {
		for (int l0 = 0; (l0 < 2); l0 = (l0 + 1)) {
			iVec0[l0] = 0;
			
		}
		for (int l1 = 0; (l1 < 2); l1 = (l1 + 1)) {
			fRec2[l1] = 0.0f;
			
		}
		for (int l2 = 0; (l2 < 2); l2 = (l2 + 1)) {
			fRec3[l2] = 0.0f;
			
		}
		for (int l3 = 0; (l3 < 2); l3 = (l3 + 1)) {
			fRec4[l3] = 0.0f;
			
		}
		for (int l4 = 0; (l4 < 2); l4 = (l4 + 1)) {
			fRec0[l4] = 0.0f;
			
		}
		for (int l5 = 0; (l5 < 2); l5 = (l5 + 1)) {
			fRec5[l5] = 0.0f;
			
		}
		for (int l6 = 0; (l6 < 2); l6 = (l6 + 1)) {
			fRec7[l6] = 0.0f;
			
		}
		for (int l7 = 0; (l7 < 2); l7 = (l7 + 1)) {
			fRec9[l7] = 0.0f;
			
		}
		for (int l8 = 0; (l8 < 2); l8 = (l8 + 1)) {
			fRec11[l8] = 0.0f;
			
		}
		for (int l9 = 0; (l9 < 2); l9 = (l9 + 1)) {
			fRec13[l9] = 0.0f;
			
		}
		for (int l10 = 0; (l10 < 2); l10 = (l10 + 1)) {
			fRec15[l10] = 0.0f;
			
		}
		for (int l11 = 0; (l11 < 2); l11 = (l11 + 1)) {
			fRec17[l11] = 0.0f;
			
		}
		for (int l12 = 0; (l12 < 2); l12 = (l12 + 1)) {
			fRec19[l12] = 0.0f;
			
		}
		for (int l13 = 0; (l13 < 2); l13 = (l13 + 1)) {
			fRec21[l13] = 0.0f;
			
		}
		for (int l14 = 0; (l14 < 2); l14 = (l14 + 1)) {
			fRec22[l14] = 0.0f;
			
		}
		for (int l15 = 0; (l15 < 2); l15 = (l15 + 1)) {
			fRec23[l15] = 0.0f;
			
		}
		for (int l16 = 0; (l16 < 2); l16 = (l16 + 1)) {
			fRec24[l16] = 0.0f;
			
		}
		for (int l17 = 0; (l17 < 2); l17 = (l17 + 1)) {
			fRec25[l17] = 0.0f;
			
		}
		for (int l18 = 0; (l18 < 2); l18 = (l18 + 1)) {
			fRec26[l18] = 0.0f;
			
		}
		for (int l19 = 0; (l19 < 2); l19 = (l19 + 1)) {
			fRec27[l19] = 0.0f;
			
		}
		for (int l20 = 0; (l20 < 2); l20 = (l20 + 1)) {
			fRec28[l20] = 0.0f;
			
		}
		for (int l21 = 0; (l21 < 2); l21 = (l21 + 1)) {
			fRec29[l21] = 0.0f;
			
		}
		for (int l22 = 0; (l22 < 2); l22 = (l22 + 1)) {
			fRec30[l22] = 0.0f;
			
		}
		for (int l23 = 0; (l23 < 2); l23 = (l23 + 1)) {
			fRec31[l23] = 0.0f;
			
		}
		for (int l24 = 0; (l24 < 2); l24 = (l24 + 1)) {
			fRec32[l24] = 0.0f;
			
		}
		for (int l25 = 0; (l25 < 2); l25 = (l25 + 1)) {
			fRec33[l25] = 0.0f;
			
		}
		for (int l26 = 0; (l26 < 2); l26 = (l26 + 1)) {
			fRec34[l26] = 0.0f;
			
		}
		for (int l27 = 0; (l27 < 2); l27 = (l27 + 1)) {
			fRec35[l27] = 0.0f;
			
		}
		for (int l28 = 0; (l28 < 2); l28 = (l28 + 1)) {
			fRec36[l28] = 0.0f;
			
		}
		for (int l29 = 0; (l29 < 2); l29 = (l29 + 1)) {
			fRec37[l29] = 0.0f;
			
		}
		for (int l30 = 0; (l30 < 2); l30 = (l30 + 1)) {
			fRec38[l30] = 0.0f;
			
		}
		for (int l31 = 0; (l31 < 2); l31 = (l31 + 1)) {
			fRec39[l31] = 0.0f;
			
		}
		for (int l32 = 0; (l32 < 2); l32 = (l32 + 1)) {
			fRec41[l32] = 0.0f;
			
		}
		for (int l33 = 0; (l33 < 3); l33 = (l33 + 1)) {
			fRec42[l33] = 0.0f;
			
		}
		for (int l34 = 0; (l34 < 2); l34 = (l34 + 1)) {
			fVec1[l34] = 0.0f;
			
		}
		for (int l35 = 0; (l35 < 2); l35 = (l35 + 1)) {
			fRec40[l35] = 0.0f;
			
		}
		for (int l36 = 0; (l36 < 2); l36 = (l36 + 1)) {
			fRec43[l36] = 0.0f;
			
		}
		for (int l37 = 0; (l37 < 2); l37 = (l37 + 1)) {
			fRec45[l37] = 0.0f;
			
		}
		for (int l38 = 0; (l38 < 2); l38 = (l38 + 1)) {
			fRec44[l38] = 0.0f;
			
		}
		for (int l39 = 0; (l39 < 2); l39 = (l39 + 1)) {
			fRec46[l39] = 0.0f;
			
		}
		
	}
	
	virtual void init(int samplingFreq) {
		classInit(samplingFreq);
		instanceInit(samplingFreq);
	}
	virtual void instanceInit(int samplingFreq) {
		instanceConstants(samplingFreq);
		instanceResetUserInterface();
		instanceClear();
	}
	
	virtual mydsp* clone() {
		return new mydsp();
	}
	virtual int getSampleRate() {
		return fSamplingFreq;
		
	}
	
	virtual void buildUserInterface(UI* ui_interface) {
		ui_interface->openHorizontalBox("Cloud Generator");
		ui_interface->openVerticalBox("Envelope");
		ui_interface->declare(&fHslider10, "1", "");
		ui_interface->declare(&fHslider10, "style", "knob");
		ui_interface->declare(&fHslider10, "unit", "ms");
		ui_interface->addHorizontalSlider("Attack", &fHslider10, 10.0f, 0.100000001f, 3000.0f, 0.100000001f);
		ui_interface->declare(&fHslider9, "2", "");
		ui_interface->declare(&fHslider9, "style", "knob");
		ui_interface->declare(&fHslider9, "unit", "ms");
		ui_interface->addHorizontalSlider("Decay", &fHslider9, 100.0f, 1.0f, 3000.0f, 0.100000001f);
		ui_interface->declare(&fHslider11, "3", "");
		ui_interface->declare(&fHslider11, "style", "knob");
		ui_interface->addHorizontalSlider("Sustain", &fHslider11, 0.699999988f, 0.0f, 1.0f, 0.00999999978f);
		ui_interface->declare(&fHslider8, "4", "");
		ui_interface->declare(&fHslider8, "style", "knob");
		ui_interface->declare(&fHslider8, "unit", "ms");
		ui_interface->addHorizontalSlider("Release", &fHslider8, 500.0f, 0.100000001f, 5000.0f, 0.100000001f);
		ui_interface->closeBox();
		ui_interface->openVerticalBox("MIDI");
		ui_interface->declare(&fHslider2, "unit", "Hz");
		ui_interface->addHorizontalSlider("freq", &fHslider2, 220.0f, 20.0f, 20000.0f, 0.100000001f);
		ui_interface->addHorizontalSlider("gain", &fHslider0, 0.5f, 0.0f, 10.0f, 0.00999999978f);
		ui_interface->addButton("gate", &fButton0);
		ui_interface->closeBox();
		ui_interface->openVerticalBox("Modulation");
		ui_interface->declare(&fHslider3, "1", "");
		ui_interface->declare(&fHslider3, "style", "knob");
		ui_interface->declare(&fHslider3, "tooltip", "Modulates the individual detuning of the 9 parallel oscillators");
		ui_interface->addHorizontalSlider("Spread", &fHslider3, 0.00999999978f, 0.0f, 1.0f, 0.00999999978f);
		ui_interface->declare(&fHslider4, "2", "");
		ui_interface->declare(&fHslider4, "style", "knob");
		ui_interface->declare(&fHslider4, "tooltip", "The amount of the sinusoidal LFO modulating the pitch of the oscillators");
		ui_interface->addHorizontalSlider("Leslie Amount", &fHslider4, 0.0f, 0.0f, 1.0f, 0.00999999978f);
		ui_interface->declare(&fHslider5, "3", "");
		ui_interface->declare(&fHslider5, "style", "knob");
		ui_interface->declare(&fHslider5, "tooltip", "The frequency of the sinusodial LFO modulating the pitch of the oscillators");
		ui_interface->declare(&fHslider5, "unit", "Hz");
		ui_interface->addHorizontalSlider("Leslie Bandwidth", &fHslider5, 1.0f, 0.00999999978f, 20.0f, 0.00999999978f);
		ui_interface->declare(&fHslider6, "4", "");
		ui_interface->declare(&fHslider6, "style", "knob");
		ui_interface->declare(&fHslider6, "tooltip", "A simple cubic distortion unit");
		ui_interface->addHorizontalSlider("Richness", &fHslider6, 1.0f, 1.0f, 10.0f, 0.00999999978f);
		ui_interface->closeBox();
		ui_interface->openVerticalBox("Standard");
		ui_interface->declare(&fHslider1, "1", "");
		ui_interface->declare(&fHslider1, "style", "radio{'Saw':0; 'Sine':1}");
		ui_interface->addHorizontalSlider("Oscillator Type", &fHslider1, 0.0f, 0.0f, 1.0f, 1.0f);
		ui_interface->declare(&fCheckbox0, "2", "");
		ui_interface->declare(&fCheckbox0, "tooltip", "A third-order elliptic (Cauer) lowpass filter");
		ui_interface->addCheckButton("Lowpass Filter", &fCheckbox0);
		ui_interface->declare(&fHslider7, "3", "");
		ui_interface->declare(&fHslider7, "unit", "Hz");
		ui_interface->addHorizontalSlider("Cutoff", &fHslider7, 10000.0f, 20.0f, 20000.0f, 1.0f);
		ui_interface->declare(&fHslider12, "4", "");
		ui_interface->declare(&fHslider12, "unit", "dB");
		ui_interface->addHorizontalSlider("Volume", &fHslider12, 0.0f, -128.0f, 6.0f, 0.00999999978f);
		ui_interface->closeBox();
		ui_interface->closeBox();
		
	}
	
	virtual void compute(int count, FAUSTFLOAT** inputs, FAUSTFLOAT** outputs) {
		FAUSTFLOAT* output0 = outputs[0];
		FAUSTFLOAT* output1 = outputs[1];
		float fSlow0 = float(fHslider0);
		float fSlow1 = float(fCheckbox0);
		int iSlow2 = (fSlow1 == 0.0f);
		float fSlow3 = float(fHslider1);
		int iSlow4 = (fSlow3 == 0.0f);
		float fSlow5 = float(fHslider2);
		float fSlow6 = mydsp_faustpower2_f(float(fHslider3));
		float fSlow7 = (fSlow5 * powf(2.0f, fSlow6));
		float fSlow8 = (0.00100000005f * float(fHslider4));
		float fSlow9 = (fConst2 * float(fHslider5));
		float fSlow10 = sinf(fSlow9);
		float fSlow11 = cosf(fSlow9);
		float fSlow12 = (0.0f - fSlow10);
		float fSlow13 = (fSlow5 * powf(0.569999993f, fSlow6));
		float fSlow14 = (fSlow5 * powf(1.75f, fSlow6));
		float fSlow15 = (fSlow5 * powf(0.660000026f, fSlow6));
		float fSlow16 = (fSlow5 * powf(1.5f, fSlow6));
		float fSlow17 = (fSlow5 * powf(0.800000012f, fSlow6));
		float fSlow18 = (fSlow5 * powf(1.0f, fSlow6));
		float fSlow19 = (fSlow5 * powf(1.25f, fSlow6));
		float fSlow20 = (fSlow5 * powf(0.5f, fSlow6));
		int iSlow21 = (fSlow3 == 1.0f);
		float fSlow22 = (0.00100000005f * float(fHslider6));
		int iSlow23 = (fSlow1 == 1.0f);
		float fSlow24 = (5.00000006e-08f * mydsp_faustpower2_f(float(fHslider7)));
		float fSlow25 = float(fButton0);
		int iSlow26 = (fSlow25 > 0.0f);
		int iSlow27 = (iSlow26 > 0);
		float fSlow28 = float(fHslider8);
		float fSlow29 = (fConst4 * fSlow28);
		float fSlow30 = (fConst5 / fSlow28);
		int iSlow31 = ((fSlow25 == 0.0f) > 0);
		float fSlow32 = float(fHslider10);
		float fSlow33 = (float(fHslider9) + fSlow32);
		float fSlow34 = (fConst4 * fSlow33);
		float fSlow35 = (fConst4 * fSlow32);
		float fSlow36 = (float(fHslider11) * fSlow25);
		float fSlow37 = ((fSlow36 + -1.0f) / (0.0f - (fConst4 * (fSlow32 - fSlow33))));
		float fSlow38 = (fConst5 / fSlow32);
		float fSlow39 = (0.00100000005f * float(fHslider12));
		for (int i = 0; (i < count); i = (i + 1)) {
			iVec0[0] = 1;
			fRec2[0] = (fSlow8 + (0.999000013f * fRec2[1]));
			fRec3[0] = ((fSlow10 * fRec4[1]) + (fSlow11 * fRec3[1]));
			int iTemp0 = (1 - iVec0[1]);
			fRec4[0] = (((fSlow11 * fRec4[1]) + (fSlow12 * fRec3[1])) + float(iTemp0));
			float fTemp1 = ((0.00999999978f * (fRec2[0] * fRec3[0])) + 1.0f);
			float fTemp2 = powf(fSlow7, fTemp1);
			float fTemp3 = max(1.00000001e-07f, fabsf(fTemp2));
			float fTemp4 = (fConst1 * fTemp3);
			float fTemp5 = (fTemp4 + fRec0[1]);
			float fTemp6 = (fTemp5 + -1.0f);
			int iTemp7 = (fTemp6 < 0.0f);
			fRec0[0] = (iTemp7?fTemp5:fTemp6);
			float fRec1 = (iTemp7?fTemp5:((fTemp4 + (fTemp6 * (1.0f - (fConst0 / fTemp3)))) + fRec0[1]));
			float fTemp8 = powf(fSlow13, fTemp1);
			float fTemp9 = max(1.00000001e-07f, fabsf(fTemp8));
			float fTemp10 = (fRec5[1] + (fConst1 * fTemp9));
			float fTemp11 = (fTemp10 + -1.0f);
			int iTemp12 = (fTemp11 < 0.0f);
			fRec5[0] = (iTemp12?fTemp10:fTemp11);
			float fRec6 = (iTemp12?fTemp10:(fTemp10 + (fTemp11 * (1.0f - (fConst0 / fTemp9)))));
			float fTemp13 = powf(fSlow14, fTemp1);
			float fTemp14 = max(1.00000001e-07f, fabsf(fTemp13));
			float fTemp15 = (fRec7[1] + (fConst1 * fTemp14));
			float fTemp16 = (fTemp15 + -1.0f);
			int iTemp17 = (fTemp16 < 0.0f);
			fRec7[0] = (iTemp17?fTemp15:fTemp16);
			float fRec8 = (iTemp17?fTemp15:(fTemp15 + (fTemp16 * (1.0f - (fConst0 / fTemp14)))));
			float fTemp18 = powf(fSlow15, fTemp1);
			float fTemp19 = max(1.00000001e-07f, fabsf(fTemp18));
			float fTemp20 = (fRec9[1] + (fConst1 * fTemp19));
			float fTemp21 = (fTemp20 + -1.0f);
			int iTemp22 = (fTemp21 < 0.0f);
			fRec9[0] = (iTemp22?fTemp20:fTemp21);
			float fRec10 = (iTemp22?fTemp20:(fTemp20 + (fTemp21 * (1.0f - (fConst0 / fTemp19)))));
			float fTemp23 = powf(fSlow16, fTemp1);
			float fTemp24 = max(1.00000001e-07f, fabsf(fTemp23));
			float fTemp25 = (fRec11[1] + (fConst1 * fTemp24));
			float fTemp26 = (fTemp25 + -1.0f);
			int iTemp27 = (fTemp26 < 0.0f);
			fRec11[0] = (iTemp27?fTemp25:fTemp26);
			float fRec12 = (iTemp27?fTemp25:(fTemp25 + (fTemp26 * (1.0f - (fConst0 / fTemp24)))));
			float fTemp28 = powf(fSlow17, fTemp1);
			float fTemp29 = max(1.00000001e-07f, fabsf(fTemp28));
			float fTemp30 = (fRec13[1] + (fConst1 * fTemp29));
			float fTemp31 = (fTemp30 + -1.0f);
			int iTemp32 = (fTemp31 < 0.0f);
			fRec13[0] = (iTemp32?fTemp30:fTemp31);
			float fRec14 = (iTemp32?fTemp30:(fTemp30 + (fTemp31 * (1.0f - (fConst0 / fTemp29)))));
			float fTemp33 = powf(fSlow18, fTemp1);
			float fTemp34 = max(1.00000001e-07f, fabsf(fTemp33));
			float fTemp35 = (fRec15[1] + (fConst1 * fTemp34));
			float fTemp36 = (fTemp35 + -1.0f);
			int iTemp37 = (fTemp36 < 0.0f);
			fRec15[0] = (iTemp37?fTemp35:fTemp36);
			float fRec16 = (iTemp37?fTemp35:(fTemp35 + (fTemp36 * (1.0f - (fConst0 / fTemp34)))));
			float fTemp38 = powf(fSlow19, fTemp1);
			float fTemp39 = max(1.00000001e-07f, fabsf(fTemp38));
			float fTemp40 = (fRec17[1] + (fConst1 * fTemp39));
			float fTemp41 = (fTemp40 + -1.0f);
			int iTemp42 = (fTemp41 < 0.0f);
			fRec17[0] = (iTemp42?fTemp40:fTemp41);
			float fRec18 = (iTemp42?fTemp40:(fTemp40 + (fTemp41 * (1.0f - (fConst0 / fTemp39)))));
			float fTemp43 = powf(fSlow20, fTemp1);
			float fTemp44 = max(1.00000001e-07f, fabsf(fTemp43));
			float fTemp45 = (fRec19[1] + (fConst1 * fTemp44));
			float fTemp46 = (fTemp45 + -1.0f);
			int iTemp47 = (fTemp46 < 0.0f);
			fRec19[0] = (iTemp47?fTemp45:fTemp46);
			float fRec20 = (iTemp47?fTemp45:(fTemp45 + (fTemp46 * (1.0f - (fConst0 / fTemp44)))));
			float fTemp48 = (fConst2 * fTemp33);
			float fTemp49 = sinf(fTemp48);
			float fTemp50 = cosf(fTemp48);
			fRec21[0] = ((fRec22[1] * fTemp49) + (fRec21[1] * fTemp50));
			fRec22[0] = (((fRec22[1] * fTemp50) + (fRec21[1] * (0.0f - fTemp49))) + float(iTemp0));
			float fTemp51 = (fConst2 * fTemp38);
			float fTemp52 = sinf(fTemp51);
			float fTemp53 = cosf(fTemp51);
			fRec23[0] = ((fRec24[1] * fTemp52) + (fRec23[1] * fTemp53));
			fRec24[0] = (((fRec24[1] * fTemp53) + (fRec23[1] * (0.0f - fTemp52))) + float(iTemp0));
			float fTemp54 = (fConst2 * fTemp28);
			float fTemp55 = sinf(fTemp54);
			float fTemp56 = cosf(fTemp54);
			fRec25[0] = ((fRec26[1] * fTemp55) + (fRec25[1] * fTemp56));
			fRec26[0] = (((fRec26[1] * fTemp56) + (fRec25[1] * (0.0f - fTemp55))) + float(iTemp0));
			float fTemp57 = (fConst2 * fTemp23);
			float fTemp58 = sinf(fTemp57);
			float fTemp59 = cosf(fTemp57);
			fRec27[0] = ((fRec28[1] * fTemp58) + (fRec27[1] * fTemp59));
			fRec28[0] = (((fRec28[1] * fTemp59) + (fRec27[1] * (0.0f - fTemp58))) + float(iTemp0));
			float fTemp60 = (fConst2 * fTemp18);
			float fTemp61 = sinf(fTemp60);
			float fTemp62 = cosf(fTemp60);
			fRec29[0] = ((fRec30[1] * fTemp61) + (fRec29[1] * fTemp62));
			fRec30[0] = (((fRec30[1] * fTemp62) + (fRec29[1] * (0.0f - fTemp61))) + float(iTemp0));
			float fTemp63 = (fConst2 * fTemp13);
			float fTemp64 = sinf(fTemp63);
			float fTemp65 = cosf(fTemp63);
			fRec31[0] = ((fRec32[1] * fTemp64) + (fRec31[1] * fTemp65));
			fRec32[0] = (((fRec32[1] * fTemp65) + (fRec31[1] * (0.0f - fTemp64))) + float(iTemp0));
			float fTemp66 = (fConst2 * fTemp8);
			float fTemp67 = sinf(fTemp66);
			float fTemp68 = cosf(fTemp66);
			fRec33[0] = ((fRec34[1] * fTemp67) + (fRec33[1] * fTemp68));
			fRec34[0] = (((fRec34[1] * fTemp68) + (fRec33[1] * (0.0f - fTemp67))) + float(iTemp0));
			float fTemp69 = (fConst2 * fTemp2);
			float fTemp70 = sinf(fTemp69);
			float fTemp71 = cosf(fTemp69);
			fRec35[0] = ((fRec36[1] * fTemp70) + (fRec35[1] * fTemp71));
			fRec36[0] = (((fRec36[1] * fTemp71) + (fRec35[1] * (0.0f - fTemp70))) + float(iTemp0));
			float fTemp72 = (fConst2 * fTemp43);
			float fTemp73 = sinf(fTemp72);
			float fTemp74 = cosf(fTemp72);
			fRec37[0] = ((fRec38[1] * fTemp73) + (fRec37[1] * fTemp74));
			fRec38[0] = (((fRec38[1] * fTemp74) + (fRec37[1] * (0.0f - fTemp73))) + float(iTemp0));
			fRec39[0] = (fSlow22 + (0.999000013f * fRec39[1]));
			float fTemp75 = max(-1.0f, min(1.0f, (0.200000003f * (((float(iSlow4) * (-1.0f - (2.0f * ((1.0f - (fRec1 + (fRec6 - (1.0f - (fRec8 + (fRec10 - (1.0f - (fRec12 + (fRec14 - (1.0f - (fRec16 + fRec18))))))))))) - fRec20)))) + (float(iSlow21) * ((((((((fRec21[0] + fRec23[0]) + fRec25[0]) + fRec27[0]) + fRec29[0]) + fRec31[0]) + fRec33[0]) + fRec35[0]) + fRec37[0]))) * fRec39[0]))));
			float fTemp76 = (fTemp75 * (1.0f - (0.333333343f * mydsp_faustpower2_f(fTemp75))));
			fRec41[0] = (fSlow24 + (0.999000013f * fRec41[1]));
			float fTemp77 = tanf((fConst3 * fRec41[0]));
			float fTemp78 = (1.0f / fTemp77);
			float fTemp79 = (fTemp78 + 0.822445929f);
			float fTemp80 = mydsp_faustpower2_f(fTemp77);
			float fTemp81 = (((fTemp78 + 0.802636743f) / fTemp77) + 1.4122709f);
			fRec42[0] = (fTemp76 - (((fRec42[2] * (((fTemp78 + -0.802636743f) / fTemp77) + 1.4122709f)) + (2.0f * (fRec42[1] * (1.4122709f - (1.0f / fTemp80))))) / fTemp81));
			float fTemp82 = (0.0198091455f / fTemp80);
			float fTemp83 = (fTemp82 + 1.16151643f);
			float fTemp84 = (((fRec42[2] * fTemp83) + ((fTemp83 * fRec42[0]) + (2.0f * (fRec42[1] * (1.16151643f - fTemp82))))) / fTemp81);
			fVec1[0] = fTemp84;
			fRec40[0] = ((fRec40[1] * (0.0f - ((0.822445929f - fTemp78) / fTemp79))) + ((fTemp84 + fVec1[1]) / fTemp79));
			fRec43[0] = (iSlow27?0.0f:min(fSlow29, (fRec43[1] + 1.0f)));
			fRec45[0] = (iSlow31?0.0f:min(fSlow34, (fRec45[1] + 1.0f)));
			int iTemp85 = (fRec45[0] < fSlow35);
			fRec44[0] = (iSlow26?(float(iSlow26) * (iTemp85?((fRec45[0] < 0.0f)?0.0f:(iTemp85?(fSlow38 * fRec45[0]):1.0f)):((fRec45[0] < fSlow34)?((fSlow37 * (fRec45[0] - fSlow35)) + 1.0f):fSlow36))):fRec44[1]);
			fRec46[0] = (fSlow39 + (0.999000013f * fRec46[1]));
			float fTemp86 = (fSlow0 * ((((float(iSlow2) * fTemp76) + (float(iSlow23) * fRec40[0])) * ((fRec43[0] < 0.0f)?fRec44[0]:((fRec43[0] < fSlow29)?((fSlow30 * (fRec43[0] * (0.0f - fRec44[0]))) + fRec44[0]):0.0f))) * powf(10.0f, (0.0500000007f * fRec46[0]))));
			output0[i] = FAUSTFLOAT(fTemp86);
			output1[i] = FAUSTFLOAT(fTemp86);
			iVec0[1] = iVec0[0];
			fRec2[1] = fRec2[0];
			fRec3[1] = fRec3[0];
			fRec4[1] = fRec4[0];
			fRec0[1] = fRec0[0];
			fRec5[1] = fRec5[0];
			fRec7[1] = fRec7[0];
			fRec9[1] = fRec9[0];
			fRec11[1] = fRec11[0];
			fRec13[1] = fRec13[0];
			fRec15[1] = fRec15[0];
			fRec17[1] = fRec17[0];
			fRec19[1] = fRec19[0];
			fRec21[1] = fRec21[0];
			fRec22[1] = fRec22[0];
			fRec23[1] = fRec23[0];
			fRec24[1] = fRec24[0];
			fRec25[1] = fRec25[0];
			fRec26[1] = fRec26[0];
			fRec27[1] = fRec27[0];
			fRec28[1] = fRec28[0];
			fRec29[1] = fRec29[0];
			fRec30[1] = fRec30[0];
			fRec31[1] = fRec31[0];
			fRec32[1] = fRec32[0];
			fRec33[1] = fRec33[0];
			fRec34[1] = fRec34[0];
			fRec35[1] = fRec35[0];
			fRec36[1] = fRec36[0];
			fRec37[1] = fRec37[0];
			fRec38[1] = fRec38[0];
			fRec39[1] = fRec39[0];
			fRec41[1] = fRec41[0];
			fRec42[2] = fRec42[1];
			fRec42[1] = fRec42[0];
			fVec1[1] = fVec1[0];
			fRec40[1] = fRec40[0];
			fRec43[1] = fRec43[0];
			fRec45[1] = fRec45[0];
			fRec44[1] = fRec44[0];
			fRec46[1] = fRec46[0];
			
		}
		
	}

	
};

#endif
