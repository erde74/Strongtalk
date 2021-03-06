/* Copyright 1994, 1995 LongView Technologies L.L.C. $Revision: 1.21 $ */
/* Copyright (c) 2006, Sun Microsystems, Inc.
All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the 
following conditions are met:

    * Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following 
	  disclaimer in the documentation and/or other materials provided with the distribution.
    * Neither the name of Sun Microsystems nor the names of its contributors may be used to endorse or promote products derived 
	  from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT 
NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL 
THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES 
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS 
INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE 
OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE


*/

// OBJECT hierarchy
// This hierarchy is a representation hierarchy, i.e. if A is a superclass
// of B, A's representation is a prefix of B's representation.

typedef class  oopDesc*                       oop;
typedef class    markOopDesc*                 markOop;
typedef class    memOopDesc*                  memOop;
typedef class      associationOopDesc*        associationOop;
typedef class      blockClosureOopDesc*       blockClosureOop;
typedef class      byteArrayOopDesc*          byteArrayOop;
typedef class        symbolOopDesc*           symbolOop;
typedef class      contextOopDesc*            contextOop;
typedef class      doubleByteArrayOopDesc*    doubleByteArrayOop;
typedef class      doubleOopDesc*             doubleOop;
typedef class      doubleValueArrayOopDesc*   doubleValueArrayOop;
typedef class      klassOopDesc*              klassOop;
typedef class      methodOopDesc*             methodOop;
typedef class      mixinOopDesc*              mixinOop;
typedef class      objArrayOopDesc*           objArrayOop;
typedef class        weakArrayOopDesc*        weakArrayOop;
typedef class      processOopDesc*            processOop;
typedef class      proxyOopDesc*              proxyOop;
typedef class      vframeOopDesc*             vframeOop;
typedef class    smiOopDesc*                  smiOop;

// The following were not used anywhere - slr 18/10/2008
// They appeared under memOopDesc
//typedef class      systemDictionaryDesc*      systemDictionaryOop;
//typedef class      messageOopDesc*            messageOop;


// The klass hierarchy is separate from the oop hierarchy.

class      Klass;
class        memOopKlass;
class          associationKlass;
class          blockClosureKlass;
class          byteArrayKlass;
class            symbolKlass;
class          contextKlass;
class          doubleByteArrayKlass;
class          doubleKlass;
class          doubleValueArrayKlass;
class          klassKlass;
class          methodKlass;
class          mixinKlass;
class          objArrayKlass;
class            weakArrayKlass;
class          processKlass;
class          proxyKlass;
class          vframeKlass;
class        smiKlass;



