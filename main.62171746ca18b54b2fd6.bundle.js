(window.webpackJsonp=window.webpackJsonp||[]).push([[0],{108:function(module,__webpack_exports__,__webpack_require__){"use strict";var react=__webpack_require__(2),ThemeContext_bs=__webpack_require__(80);var make=ThemeContext_bs.b.Provider;function reducer(state,action){switch(0|action.tag){case 0:return{lightTheme:action[0],darkTheme:state.darkTheme,mode:state.mode};case 1:return{lightTheme:state.lightTheme,darkTheme:action[0],mode:state.mode};case 2:return{lightTheme:state.lightTheme,darkTheme:state.darkTheme,mode:action[0]}}}function ThemeProvider(Props){var children=Props.children,match=Props.value,value=void 0!==match?match:ThemeContext_bs.a,match$1=react.useReducer(reducer,value);return react.createElement(make,function makeProps(value,children){return{value:value,children:children}}([match$1[0],match$1[1]],children))}__webpack_require__.d(__webpack_exports__,"a",(function(){return ThemeProvider_bs_make}));var ThemeProvider_bs_make=ThemeProvider;ThemeProvider.__docgenInfo={description:"",methods:[],displayName:"ThemeProvider"},"undefined"!=typeof STORYBOOK_REACT_CLASSES&&(STORYBOOK_REACT_CLASSES["src/Theme/ThemeProvider.bs.js"]={name:"ThemeProvider",docgenInfo:ThemeProvider.__docgenInfo,path:"src/Theme/ThemeProvider.bs.js"})},136:function(module,__webpack_exports__,__webpack_require__){"use strict";__webpack_require__.d(__webpack_exports__,"a",(function(){return make}));var react__WEBPACK_IMPORTED_MODULE_0__=__webpack_require__(2),_ahrefs_bs_emotion_src_Emotion_bs_js__WEBPACK_IMPORTED_MODULE_1__=__webpack_require__(1),emotion__WEBPACK_IMPORTED_MODULE_2__=__webpack_require__(22),$$default=_ahrefs_bs_emotion_src_Emotion_bs_js__WEBPACK_IMPORTED_MODULE_1__.f(void 0,[_ahrefs_bs_emotion_src_Emotion_bs_js__WEBPACK_IMPORTED_MODULE_1__.l("default"),[_ahrefs_bs_emotion_src_Emotion_bs_js__WEBPACK_IMPORTED_MODULE_1__.p([5691738,.5],[5691738,1]),[_ahrefs_bs_emotion_src_Emotion_bs_js__WEBPACK_IMPORTED_MODULE_1__.i("Courier"),[_ahrefs_bs_emotion_src_Emotion_bs_js__WEBPACK_IMPORTED_MODULE_1__.b([25096,1],12956715,[5194459,"aaaaaa"]),[_ahrefs_bs_emotion_src_Emotion_bs_js__WEBPACK_IMPORTED_MODULE_1__.e([5194459,"555555"]),[_ahrefs_bs_emotion_src_Emotion_bs_js__WEBPACK_IMPORTED_MODULE_1__.a([5194459,"fafafa"]),[_ahrefs_bs_emotion_src_Emotion_bs_js__WEBPACK_IMPORTED_MODULE_1__.b([25096,1],12956715,[5194459,"999999"]),[_ahrefs_bs_emotion_src_Emotion_bs_js__WEBPACK_IMPORTED_MODULE_1__.d([25096,2]),0]]]]]]]]);function Code(Props){var children=Props.children;return react__WEBPACK_IMPORTED_MODULE_0__.createElement("div",{className:emotion__WEBPACK_IMPORTED_MODULE_2__.b($$default)},children)}var make=Code;Code.__docgenInfo={description:"",methods:[],displayName:"Code"},"undefined"!=typeof STORYBOOK_REACT_CLASSES&&(STORYBOOK_REACT_CLASSES["src/Code/Code.bs.js"]={name:"Code",docgenInfo:Code.__docgenInfo,path:"src/Code/Code.bs.js"})},307:function(module,exports,__webpack_require__){__webpack_require__(308),__webpack_require__(454),__webpack_require__(455),module.exports=__webpack_require__(607)},372:function(module,exports){},41:function(module,__webpack_exports__,__webpack_require__){"use strict";var react=__webpack_require__(2),index_esm=__webpack_require__(22),ThemeContext_bs=__webpack_require__(80),Emotion_bs=__webpack_require__(1),large=Emotion_bs.f(void 0,[Emotion_bs.l("large"),[Emotion_bs.j([5691738,2]),0]]),medium=Emotion_bs.f(void 0,[Emotion_bs.l("medium"),[Emotion_bs.j([5691738,1.6]),0]]),small=Emotion_bs.f(void 0,[Emotion_bs.l("small"),[Emotion_bs.j([5691738,1.2]),0]]);function $$default(theme){return Emotion_bs.f(void 0,[Emotion_bs.l("default"),[Emotion_bs.e([5194459,theme.text.default]),[Emotion_bs.i("Arial"),[Emotion_bs.n([5691738,.5]),0]]]])}function TypographyStyles_bs_primary(theme){return Emotion_bs.f(void 0,[Emotion_bs.l("primary"),[Emotion_bs.e([5194459,theme.text.primary]),0]])}function getClass(size){if(void 0===size)return"";switch(size){case 0:return large;case 1:return medium;case 2:return small}}function Typography(Props){var match=Props.primary,primary=void 0!==match&&match,size=Props.size,children=Props.children,theme=ThemeContext_bs.c(0);return react.createElement("span",{className:index_esm.b($$default(theme),getClass(size),primary?TypographyStyles_bs_primary(theme):"")},children)}__webpack_require__.d(__webpack_exports__,"a",(function(){return make}));var make=Typography;Typography.__docgenInfo={description:"",methods:[],displayName:"Typography"},"undefined"!=typeof STORYBOOK_REACT_CLASSES&&(STORYBOOK_REACT_CLASSES["src/Typography/Typography.bs.js"]={name:"Typography",docgenInfo:Typography.__docgenInfo,path:"src/Typography/Typography.bs.js"})},607:function(module,__webpack_exports__,__webpack_require__){"use strict";__webpack_require__.r(__webpack_exports__),function(module){var _storybook_react__WEBPACK_IMPORTED_MODULE_0__=__webpack_require__(303);module._StorybookPreserveDecorators=!0,Object(_storybook_react__WEBPACK_IMPORTED_MODULE_0__.configure)([__webpack_require__(644)],module)}.call(this,__webpack_require__(608)(module))},644:function(module,exports,__webpack_require__){var map={"./ButtonShowcase.bs.js":645,"./CheckboxShowcase.bs.js":650,"./CodeShowcase.bs.js":646,"./RadioShowcase.bs.js":648,"./TextInputShowcase.bs.js":649,"./TypographyShowcase.bs.js":647};function webpackContext(req){var id=webpackContextResolve(req);return __webpack_require__(id)}function webpackContextResolve(req){if(!__webpack_require__.o(map,req)){var e=new Error("Cannot find module '"+req+"'");throw e.code="MODULE_NOT_FOUND",e}return map[req]}webpackContext.keys=function webpackContextKeys(){return Object.keys(map)},webpackContext.resolve=webpackContextResolve,module.exports=webpackContext,webpackContext.id=644},645:function(module,__webpack_exports__,__webpack_require__){"use strict";__webpack_require__.r(__webpack_exports__),__webpack_require__.d(__webpack_exports__,"$$default",(function(){return $$default})),__webpack_require__.d(__webpack_exports__,"default",(function(){return $$default})),__webpack_require__.d(__webpack_exports__,"primary",(function(){return primary}));var _src_Code_Code_bs_js__WEBPACK_IMPORTED_MODULE_0__=__webpack_require__(136),react__WEBPACK_IMPORTED_MODULE_1__=__webpack_require__(2),_src_Theme_ThemeProvider_bs_js__WEBPACK_IMPORTED_MODULE_2__=__webpack_require__(108),$$default={title:"Button",excludeStories:["$$default"]};function primary(){return react__WEBPACK_IMPORTED_MODULE_1__.createElement(_src_Theme_ThemeProvider_bs_js__WEBPACK_IMPORTED_MODULE_2__.a,{children:react__WEBPACK_IMPORTED_MODULE_1__.createElement(_src_Code_Code_bs_js__WEBPACK_IMPORTED_MODULE_0__.a,{children:"Hello"})})}primary.__docgenInfo={description:"",methods:[],displayName:"primary"},"undefined"!=typeof STORYBOOK_REACT_CLASSES&&(STORYBOOK_REACT_CLASSES["stories/ButtonShowcase.bs.js"]={name:"primary",docgenInfo:primary.__docgenInfo,path:"stories/ButtonShowcase.bs.js"})},646:function(module,__webpack_exports__,__webpack_require__){"use strict";__webpack_require__.r(__webpack_exports__),__webpack_require__.d(__webpack_exports__,"$$default",(function(){return $$default})),__webpack_require__.d(__webpack_exports__,"default",(function(){return $$default})),__webpack_require__.d(__webpack_exports__,"normal",(function(){return normal}));var _src_Code_Code_bs_js__WEBPACK_IMPORTED_MODULE_0__=__webpack_require__(136),react__WEBPACK_IMPORTED_MODULE_1__=__webpack_require__(2),$$default={title:"Code",excludeStories:["$$default"]};function normal(){return react__WEBPACK_IMPORTED_MODULE_1__.createElement(_src_Code_Code_bs_js__WEBPACK_IMPORTED_MODULE_0__.a,{children:"yarn add @generous-folks/reason-ui"})}normal.__docgenInfo={description:"",methods:[],displayName:"normal"},"undefined"!=typeof STORYBOOK_REACT_CLASSES&&(STORYBOOK_REACT_CLASSES["stories/CodeShowcase.bs.js"]={name:"normal",docgenInfo:normal.__docgenInfo,path:"stories/CodeShowcase.bs.js"})},647:function(module,__webpack_exports__,__webpack_require__){"use strict";__webpack_require__.r(__webpack_exports__),__webpack_require__.d(__webpack_exports__,"$$default",(function(){return $$default})),__webpack_require__.d(__webpack_exports__,"default",(function(){return $$default})),__webpack_require__.d(__webpack_exports__,"content",(function(){return content})),__webpack_require__.d(__webpack_exports__,"normal",(function(){return normal})),__webpack_require__.d(__webpack_exports__,"primary",(function(){return primary}));var react__WEBPACK_IMPORTED_MODULE_0__=__webpack_require__(2),_src_Typography_Typography_bs_js__WEBPACK_IMPORTED_MODULE_1__=__webpack_require__(41),_src_Theme_ThemeProvider_bs_js__WEBPACK_IMPORTED_MODULE_2__=__webpack_require__(108),$$default={title:"Typo",excludeStories:["$$default","content"]},content="Hello World";function normal(){return react__WEBPACK_IMPORTED_MODULE_0__.createElement(_src_Theme_ThemeProvider_bs_js__WEBPACK_IMPORTED_MODULE_2__.a,{children:null},react__WEBPACK_IMPORTED_MODULE_0__.createElement(_src_Typography_Typography_bs_js__WEBPACK_IMPORTED_MODULE_1__.a,{size:0,children:content}),react__WEBPACK_IMPORTED_MODULE_0__.createElement(_src_Typography_Typography_bs_js__WEBPACK_IMPORTED_MODULE_1__.a,{size:1,children:content}),react__WEBPACK_IMPORTED_MODULE_0__.createElement(_src_Typography_Typography_bs_js__WEBPACK_IMPORTED_MODULE_1__.a,{size:2,children:content}))}function primary(){return react__WEBPACK_IMPORTED_MODULE_0__.createElement(_src_Theme_ThemeProvider_bs_js__WEBPACK_IMPORTED_MODULE_2__.a,{children:null},react__WEBPACK_IMPORTED_MODULE_0__.createElement(_src_Typography_Typography_bs_js__WEBPACK_IMPORTED_MODULE_1__.a,{primary:!0,size:0,children:content}),react__WEBPACK_IMPORTED_MODULE_0__.createElement(_src_Typography_Typography_bs_js__WEBPACK_IMPORTED_MODULE_1__.a,{primary:!0,size:1,children:content}),react__WEBPACK_IMPORTED_MODULE_0__.createElement(_src_Typography_Typography_bs_js__WEBPACK_IMPORTED_MODULE_1__.a,{primary:!0,size:2,children:content}))}normal.__docgenInfo={description:"",methods:[],displayName:"normal"},primary.__docgenInfo={description:"",methods:[],displayName:"primary"},"undefined"!=typeof STORYBOOK_REACT_CLASSES&&(STORYBOOK_REACT_CLASSES["stories/TypographyShowcase.bs.js"]={name:"normal",docgenInfo:normal.__docgenInfo,path:"stories/TypographyShowcase.bs.js"}),"undefined"!=typeof STORYBOOK_REACT_CLASSES&&(STORYBOOK_REACT_CLASSES["stories/TypographyShowcase.bs.js"]={name:"primary",docgenInfo:primary.__docgenInfo,path:"stories/TypographyShowcase.bs.js"})},648:function(module,__webpack_exports__,__webpack_require__){"use strict";__webpack_require__.r(__webpack_exports__);__webpack_require__(21),__webpack_require__(15),__webpack_require__(27);var array=__webpack_require__(305),curry=__webpack_require__(0),react=__webpack_require__(2),Emotion_bs=__webpack_require__(1),index_esm=__webpack_require__(22),defaultStyle=Emotion_bs.f(void 0,[Emotion_bs.l("defaultStyle"),[Emotion_bs.b([25096,3],12956715,[5194459,"222222"]),[Emotion_bs.d([5691738,1]),[Emotion_bs.g(-786317123),[Emotion_bs.e([5194459,"ffffff"]),[Emotion_bs.r(98248149),[Emotion_bs.h(-147785676),[Emotion_bs.u([5691738,1]),[Emotion_bs.k([5691738,1]),[Emotion_bs.s(-922086728),0]]]]]]]]]]),checkStyle=Emotion_bs.f(void 0,[Emotion_bs.l("checkStyle"),[Emotion_bs.e([5194459,"000000"]),0]]),inputStyle=Emotion_bs.f(void 0,[Emotion_bs.l("inputStyle"),[Emotion_bs.t(-862584982),0]]);function Radio(Props){var values=Props.values,match=Props.defaultValue,defaultValue=void 0!==match?match:"",match$1=react.useState((function(){return defaultValue})),setCurrent=match$1[1],current=match$1[0];return react.createElement(react.Fragment,void 0,array.a((function(value){return react.createElement("label",void 0,react.createElement("input",{className:inputStyle,checked:current===value,type:"radio",value:value,onChange:function onChange(e){return curry.a(setCurrent,e.target.value)}}),react.createElement("span",{className:index_esm.b(defaultStyle,current===value?checkStyle:"")},"•"),"  "+value,react.createElement("br",void 0))}),values))}var make=Radio;Radio.__docgenInfo={description:"",methods:[],displayName:"Radio"},"undefined"!=typeof STORYBOOK_REACT_CLASSES&&(STORYBOOK_REACT_CLASSES["src/Radio/Radio.bs.js"]={name:"Radio",docgenInfo:Radio.__docgenInfo,path:"src/Radio/Radio.bs.js"}),__webpack_require__.d(__webpack_exports__,"$$default",(function(){return $$default})),__webpack_require__.d(__webpack_exports__,"default",(function(){return $$default})),__webpack_require__.d(__webpack_exports__,"normal",(function(){return normal}));var $$default={title:"Radio",excludeStories:["$$default"]};function normal(){return react.createElement(make,{values:["Toto","Tata","Titi"],defaultValue:"Tata"})}normal.__docgenInfo={description:"",methods:[],displayName:"normal"},"undefined"!=typeof STORYBOOK_REACT_CLASSES&&(STORYBOOK_REACT_CLASSES["stories/RadioShowcase.bs.js"]={name:"normal",docgenInfo:normal.__docgenInfo,path:"stories/RadioShowcase.bs.js"})},649:function(module,__webpack_exports__,__webpack_require__){"use strict";__webpack_require__.r(__webpack_exports__);var react=__webpack_require__(2),curry=(__webpack_require__(55),__webpack_require__(0)),Emotion_bs=__webpack_require__(1),index_esm=__webpack_require__(22),Typography_bs=__webpack_require__(41),caml_option=__webpack_require__(6),defaultStyle=Emotion_bs.f(void 0,[Emotion_bs.l("defaultStyle"),[Emotion_bs.k([5691738,1]),[Emotion_bs.u(-1065951377),[Emotion_bs.j([5691738,1]),[Emotion_bs.p([5691738,.5],[5691738,1]),[Emotion_bs.n([5691738,.3]),[Emotion_bs.b([25096,3],12956715,[5194459,"333333"]),[Emotion_bs.d([25096,3]),[Emotion_bs.a([-878128972,[0,0,0,0]]),0]]]]]]]]]),primaryStyle=Emotion_bs.f(void 0,[Emotion_bs.l("primaryStyle"),[Emotion_bs.c([5194459,"000088"]),0]]),disabledStyle=Emotion_bs.f(void 0,[Emotion_bs.l("disabledStyle"),[Emotion_bs.o(.5),0]]);function createLabel(param){return void 0!==param?react.createElement(Typography_bs.a,{size:2,children:null},param,react.createElement("br",void 0)):null}function TextInput(Props){var value=Props.value,onChange=Props.onChange,match=Props.disabled,disabled=void 0!==match&&match,match$1=Props.primary,primary=void 0!==match$1&&match$1,match$2=Props.placeholder,placeholder=void 0!==match$2?match$2:"",label=Props.label,id=Props.id,name=Props.name,onSelect=Props.onSelect,match$3=Props.type_,type_=void 0!==match$3?match$3:"text",match$4=Props.children,children=void 0!==match$4?caml_option.b(match$4):null,match$5=react.useState((function(){return""})),setInternalValue=match$5[1],onChange$1=void 0!==onChange?onChange:function($$event){return curry.a(setInternalValue,$$event.target.value)},value$1=void 0!==value?value:match$5[0],tmp={className:index_esm.b(defaultStyle,primary?primaryStyle:""),disabled:disabled,placeholder:placeholder,type:type_,value:value$1,onChange:onChange$1};return void 0!==id&&(tmp.id=caml_option.b(id)),void 0!==name&&(tmp.name=caml_option.b(name)),void 0!==onSelect&&(tmp.onSelect=caml_option.b(onSelect)),react.createElement("label",{className:index_esm.b(disabled?disabledStyle:"")},createLabel(label),children,react.createElement("input",tmp))}var make=TextInput;createLabel.__docgenInfo={description:"",methods:[],displayName:"createLabel"},"undefined"!=typeof STORYBOOK_REACT_CLASSES&&(STORYBOOK_REACT_CLASSES["src/TextInput/TextInput.bs.js"]={name:"createLabel",docgenInfo:createLabel.__docgenInfo,path:"src/TextInput/TextInput.bs.js"}),TextInput.__docgenInfo={description:"",methods:[],displayName:"TextInput"},"undefined"!=typeof STORYBOOK_REACT_CLASSES&&(STORYBOOK_REACT_CLASSES["src/TextInput/TextInput.bs.js"]={name:"TextInput",docgenInfo:TextInput.__docgenInfo,path:"src/TextInput/TextInput.bs.js"}),__webpack_require__.d(__webpack_exports__,"$$default",(function(){return $$default})),__webpack_require__.d(__webpack_exports__,"default",(function(){return $$default})),__webpack_require__.d(__webpack_exports__,"normal",(function(){return normal}));var $$default={title:"TextInput",excludeStories:["$$default"]};function normal(){return react.createElement(make,{disabled:!1,primary:!1,label:"Sushi"})}normal.__docgenInfo={description:"",methods:[],displayName:"normal"},"undefined"!=typeof STORYBOOK_REACT_CLASSES&&(STORYBOOK_REACT_CLASSES["stories/TextInputShowcase.bs.js"]={name:"normal",docgenInfo:normal.__docgenInfo,path:"stories/TextInputShowcase.bs.js"})},650:function(module,__webpack_exports__,__webpack_require__){"use strict";__webpack_require__.r(__webpack_exports__);var react=__webpack_require__(2),curry=__webpack_require__(0),Emotion_bs=__webpack_require__(1),index_esm=__webpack_require__(22),caml_option=__webpack_require__(6),defaultStyle=Emotion_bs.f(void 0,[Emotion_bs.l("defaultStyle"),[Emotion_bs.b([25096,3],12956715,[5194459,"222222"]),[Emotion_bs.q(-1013592457),[Emotion_bs.m([25096,0]),[Emotion_bs.d([25096,3]),[Emotion_bs.g(-786317123),[Emotion_bs.e([5194459,"ffffff"]),[Emotion_bs.r(98248149),[Emotion_bs.h(-147785676),[Emotion_bs.u([5691738,1]),[Emotion_bs.k([5691738,1]),[Emotion_bs.s(-922086728),0]]]]]]]]]]]]),checkStyle=Emotion_bs.f(void 0,[Emotion_bs.l("checkStyle"),[Emotion_bs.e([5194459,"000000"]),0]]),disabledStyle=Emotion_bs.f(void 0,[Emotion_bs.l("disabledStyle"),[Emotion_bs.o(.5),0]]),inputStyle=Emotion_bs.f(void 0,[Emotion_bs.l("inputStyle"),[Emotion_bs.t(-862584982),0]]);function Checkbox(Props){var checked=Props.checked,onChange=Props.onChange,match=Props.disabled,disabled=void 0!==match&&match,match$1=Props.label,label=void 0!==match$1?match$1:"",match$2=Props.children,children=void 0!==match$2?caml_option.b(match$2):null,match$3=react.useState((function(){return!1})),setInternalChecked=match$3[1],internalChecked=match$3[0],onChange$1=void 0!==onChange?onChange:function(){return curry.a(setInternalChecked,(function(){return!internalChecked}))},checked$1=void 0!==checked?checked:internalChecked;return react.createElement("label",{className:index_esm.b(disabled?disabledStyle:"")},react.createElement("input",{className:inputStyle,checked:checked$1,disabled:disabled,type:"checkbox",onChange:onChange$1}),react.createElement("span",{className:index_esm.b(defaultStyle,checked$1?checkStyle:"")},"✓"),label,children)}var make=Checkbox;Checkbox.__docgenInfo={description:"",methods:[],displayName:"Checkbox"},"undefined"!=typeof STORYBOOK_REACT_CLASSES&&(STORYBOOK_REACT_CLASSES["src/Checkbox/Checkbox.bs.js"]={name:"Checkbox",docgenInfo:Checkbox.__docgenInfo,path:"src/Checkbox/Checkbox.bs.js"});var Typography_bs=__webpack_require__(41);__webpack_require__.d(__webpack_exports__,"$$default",(function(){return $$default})),__webpack_require__.d(__webpack_exports__,"default",(function(){return $$default})),__webpack_require__.d(__webpack_exports__,"uncontrolled",(function(){return uncontrolled})),__webpack_require__.d(__webpack_exports__,"controlled",(function(){return controlled}));var $$default={title:"Checkbox",excludeStories:["$$default"]};function uncontrolled(){return react.createElement(make,{disabled:!1,children:react.createElement(Typography_bs.a,{size:2,children:"Hi there !"})})}function controlled(){return react.createElement(make,{checked:!0,disabled:!1,children:react.createElement(Typography_bs.a,{size:2,children:"I am controlled"})})}uncontrolled.__docgenInfo={description:"",methods:[],displayName:"uncontrolled"},controlled.__docgenInfo={description:"",methods:[],displayName:"controlled"},"undefined"!=typeof STORYBOOK_REACT_CLASSES&&(STORYBOOK_REACT_CLASSES["stories/CheckboxShowcase.bs.js"]={name:"uncontrolled",docgenInfo:uncontrolled.__docgenInfo,path:"stories/CheckboxShowcase.bs.js"}),"undefined"!=typeof STORYBOOK_REACT_CLASSES&&(STORYBOOK_REACT_CLASSES["stories/CheckboxShowcase.bs.js"]={name:"controlled",docgenInfo:controlled.__docgenInfo,path:"stories/CheckboxShowcase.bs.js"})},80:function(module,__webpack_exports__,__webpack_require__){"use strict";var common={black:"000000",white:"ffffff"},error={main:"f44336",light:"e57373",dark:"d32f2f",contrastText:"ffffff"},fuschia={main:"f50057",light:"ff4081",dark:"c51162",contrastText:"ffffff"},green={main:"4caf50",light:"81c784",dark:"388e3c",contrastText:"292929"},indigo={main:"3f51b5",light:"7986cb",dark:"303f9f",contrastText:"ffffff"},lightblue={main:"2196f3",light:"64b5f6",dark:"1976d2",contrastText:"ffffff"},orange={main:"ff9800",light:"ffb74d",dark:"f57c00",contrastText:"292929"},grey={main:"9e9e9e",light:"e0e0e0",dark:"424242",contrastText:"303030"},light={mode:1,colors:{common:common,primary:indigo,secondary:fuschia,error:error,warning:orange,info:lightblue,success:green,grey:grey},background:{primary:common.white,secondary:common.black,default:common.white,accent:"123456",disabled:"fafafa"},action:{primary:"000088",secondary:"ffff88",default:common.white,disabled:"575757"},text:{primary:"000088",secondary:"ffff88",default:common.black,disabled:"575757",hint:"123456"}},dark={mode:0,colors:{common:common,primary:fuschia,secondary:indigo,error:error,warning:orange,info:lightblue,success:green,grey:grey},background:{primary:common.white,secondary:common.black,default:common.white,accent:"123456",disabled:"fafafa"},action:{primary:"000088",secondary:"ffff88",default:common.white,disabled:"575757"},text:{primary:"ffff88",secondary:"000088",default:common.black,disabled:"575757",hint:"123456"}},react=__webpack_require__(2);__webpack_require__.d(__webpack_exports__,"a",(function(){return initialValue})),__webpack_require__.d(__webpack_exports__,"b",(function(){return themeContext})),__webpack_require__.d(__webpack_exports__,"c",(function(){return useTheme}));var initialValue={lightTheme:light,darkTheme:dark,mode:1};var initialContext=[{lightTheme:light,darkTheme:dark,mode:1},function initialContext_001(){return 0}],themeContext=react.createContext(initialContext);function useTheme(){var match$1=react.useContext(themeContext)[0];return match$1.mode?match$1.lightTheme:match$1.darkTheme}}},[[307,1,2]]]);
//# sourceMappingURL=main.62171746ca18b54b2fd6.bundle.js.map