#ifndef MDP_COMMON_XML
#define MDP_COMMON_XML

/* Autogenerated file, DO NOT EDIT manually!

This file was generated by the rules-ng-ng headergen tool in this git repository:
http://github.com/freedreno/envytools/
git clone https://github.com/freedreno/envytools.git

The rules-ng-ng source files this header was generated from are:
- /home/robclark/src/freedreno/envytools/rnndb/msm.xml                 (    676 bytes, from 2017-05-17 13:21:27)
- /home/robclark/src/freedreno/envytools/rnndb/freedreno_copyright.xml (   1572 bytes, from 2017-05-17 13:21:27)
- /home/robclark/src/freedreno/envytools/rnndb/mdp/mdp4.xml            (  20915 bytes, from 2017-05-17 13:21:27)
- /home/robclark/src/freedreno/envytools/rnndb/mdp/mdp_common.xml      (   2849 bytes, from 2017-05-17 13:21:27)
- /home/robclark/src/freedreno/envytools/rnndb/mdp/mdp5.xml            (  37411 bytes, from 2017-05-17 13:21:27)
- /home/robclark/src/freedreno/envytools/rnndb/dsi/dsi.xml             (  33004 bytes, from 2017-05-17 13:21:27)
- /home/robclark/src/freedreno/envytools/rnndb/dsi/sfpb.xml            (    602 bytes, from 2017-05-17 13:21:27)
- /home/robclark/src/freedreno/envytools/rnndb/dsi/mmss_cc.xml         (   1686 bytes, from 2017-05-17 13:21:27)
- /home/robclark/src/freedreno/envytools/rnndb/hdmi/qfprom.xml         (    600 bytes, from 2017-05-17 13:21:27)
- /home/robclark/src/freedreno/envytools/rnndb/hdmi/hdmi.xml           (  41799 bytes, from 2017-06-16 12:32:42)
- /home/robclark/src/freedreno/envytools/rnndb/edp/edp.xml             (  10416 bytes, from 2017-05-17 13:21:27)

Copyright (C) 2013-2017 by the following authors:
- Rob Clark <robdclark@gmail.com> (robclark)
- Ilia Mirkin <imirkin@alum.mit.edu> (imirkin)

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice (including the
next paragraph) shall be included in all copies or substantial
portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE COPYRIGHT OWNER(S) AND/OR ITS SUPPLIERS BE
LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/


enum mdp_chroma_samp_type {
	CHROMA_FULL = 0,
	CHROMA_H2V1 = 1,
	CHROMA_H1V2 = 2,
	CHROMA_420 = 3,
};

enum mdp_fetch_type {
	MDP_PLANE_INTERLEAVED = 0,
	MDP_PLANE_PLANAR = 1,
	MDP_PLANE_PSEUDO_PLANAR = 2,
};

enum mdp_mixer_stage_id {
	STAGE_UNUSED = 0,
	STAGE_BASE = 1,
	STAGE0 = 2,
	STAGE1 = 3,
	STAGE2 = 4,
	STAGE3 = 5,
	STAGE4 = 6,
	STAGE5 = 7,
	STAGE6 = 8,
	STAGE_MAX = 8,
};

enum mdp_alpha_type {
	FG_CONST = 0,
	BG_CONST = 1,
	FG_PIXEL = 2,
	BG_PIXEL = 3,
};

enum mdp_component_type {
	COMP_0 = 0,
	COMP_1_2 = 1,
	COMP_3 = 2,
	COMP_MAX = 3,
};

enum mdp_bpc {
	BPC1 = 0,
	BPC5 = 1,
	BPC6 = 2,
	BPC8 = 3,
};

enum mdp_bpc_alpha {
	BPC1A = 0,
	BPC4A = 1,
	BPC6A = 2,
	BPC8A = 3,
};


#endif /* MDP_COMMON_XML */
