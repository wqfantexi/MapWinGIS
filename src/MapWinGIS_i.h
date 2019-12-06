

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Fri Dec 06 22:00:35 2019
 */
 /* Compiler settings for MapWinGIS.idl:
	 Oicf, W3, Zp8, env=Win64 (32b run), target_arch=AMD64 8.00.0603
	 protocol : dce , ms_ext, c_ext, robust
	 error checks: allocation ref bounds_check enum stub_data
	 VC __declspec() decoration level:
		  __declspec(uuid()), __declspec(selectany), __declspec(novtable)
		  DECLSPEC_UUID(), MIDL_INTERFACE()
 */
 /* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __MapWinGIS_i_h__
#define __MapWinGIS_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif


/* header files for imported files */
#include "ocidl.h"


enum tkWmsVersion
{
	wvEmpty = 0,
	wvAuto = 1,
	wv100 = 2,
	wv110 = 3,
	wv111 = 4,
	wv13 = 5
};

enum tkCallbackVerbosity
{
	cvAll = 0,
	cvLimited = 1
};

enum tkFunctionGroup
{
	fgMath = 0,
	fgStrings = 1,
	fgGeometry = 2,
	fgBranching = 3,
	fgConversion = 4
};

enum tkLayerType
{
	ltUndefined = 0,
	ltVector = 1,
	ltRaster = 2
};

enum tkRasterRendering
{
	rrUnknown = 0,
	rrSingleBand = 1,
	rrRGB = 2,
	rrColorScheme = 3,
	rrBuiltInColorTable = 4
};

enum tkCustomDrawingFlags
{
	CustomDrawingNone = 0,
	OnDrawBackBufferHdc = 1,
	OnDrawBackBufferBitmapData = 2,
	BeforeAfterDrawing = 4,
	BeforeAfterLayers = 8
};

enum tkGdalDataType
{
	gdtUnknown = 0,
	gdtByte = 1,
	gdtUInt16 = 2,
	gdtInt16 = 3,
	gdtUInt32 = 4,
	gdtInt32 = 5,
	gdtFloat32 = 6,
	gdtFloat64 = 7,
	gdtCInt16 = 8,
	gdtCInt32 = 9,
	gdtCFloat32 = 10,
	gdtCFloat64 = 11
};

enum tkPaletteInterpretation
{
	piGray = 0,
	piRGB = 1,
	piCMYK = 2,
	piHLS = 3
};

enum tkColorInterpretation
{
	ciUndefined = 0,
	ciGrayIndex = 1,
	ciPaletteIndex = 2,
	ciRedBand = 3,
	ciGreenBand = 4,
	ciBlueBand = 5,
	ciAlphaBand = 6,
	ciHueBand = 7,
	ciSaturationBand = 8,
	ciLightnessBand = 9,
	ciCyanBand = 10,
	ciMagentaBand = 11,
	ciYellowBand = 12,
	ciBlackBand = 13,
	ciYCbCr_YBand = 14,
	ciYCbCr_CbBand = 15,
	ciYCbCr_CrBand = 16
};

enum tkBearingType
{
	btAbsolute = 0,
	btReducedNDE = 1,
	btReducedNED = 2,
	btRelative = 3,
	btLeftAngle = 4,
	btRightAngle = 5
};

enum tkProxyAuthentication
{
	asBasic = 0,
	asNtlm = 1
};

enum tkPixelOffsetMode
{
	pomDefault = 0,
	pomHighPerformance = 1,
	pomHighQuality = 2
};

enum tkIdentifierMode
{
	imAllLayers = 0,
	imSingleLayer = 1,
	imAllLayersStopOnFirst = 2
};

enum tkEditorBehavior
{
	ebVertexEditor = 0,
	ebPartEditor = 1
};

enum tkEditorOverlay
{
	eoAddPart = 0,
	eoRemovePart = 1
};

enum tkBufferCap
{
	bcROUND = 0,
	bcFLAT = 1,
	bcSQUARE = 2
};

enum tkBufferJoin
{
	bjROUND = 0,
	bjMITRE = 1,
	bjBEVEL = 2
};

enum tkCategoryValue
{
	cvSingleValue = 0,
	cvRange = 1,
	cvExpression = 2
};

enum tkEditorValidation
{
	evBasic = 0,
	evCheckWithGeos = 1,
	evFixWithGeos = 2
};

enum tkUndoShortcut
{
	usNone = 0,
	usCtrlZ = 1,
	usRightMouseButton = 2
};

enum tkDeleteTarget
{
	dtNone = 0,
	dtShape = 1,
	dtPart = 2,
	dtVertex = 3
};

enum tkLengthDisplayMode
{
	ldmMetric = 0,
	ldmAmerican = 1
};

enum tkEditorState
{
	esNone = 0,
	esDigitize = 1,
	esEdit = 2,
	esDigitizeUnbound = 3,
	esOverlay = 4
};

enum tkLayerSelection
{
	lsAllLayers = 0,
	lsNoLayer = 1,
	lsActiveLayer = 2
};

enum tkSnapMode
{
	smVertices = 0,
	smVerticesAndLines = 1,
	smLines = 2
};

enum tkUndoOperation
{
	uoAddShape = 0,
	uoRemoveShape = 1,
	uoEditShape = 2,
	uoMoveShapes = 3,
	uoRotateShapes = 4
};

enum tkMwBoolean
{
	blnFalse = 0,
	blnTrue = 1
};

enum tkOgrEncoding
{
	oseUtf8 = 0,
	oseAnsi = 1
};

enum tkOgrSaveType
{
	ostGeometryOnly = 0,
	ostAttributesOnly = 1,
	ostSaveAll = 2
};

enum tkOgrLayerCapability
{
	olcRandomRead = 0,
	olcSequentialWrite = 1,
	olcRandomWrite = 2,
	olcFastSpatialFilter = 3,
	olcFastFeatureCount = 4,
	olcFastGetExtent = 5,
	olcCreateField = 6,
	olcDeleteField = 7,
	olcReorderFields = 8,
	olcAlterFieldDefn = 9,
	olcTransactions = 10,
	olcDeleteFeature = 11,
	olcFastSetNextByIndex = 12,
	olcStringsAsUTF8 = 13,
	olcIgnoreFields = 14,
	olcCreateGeomField = 15
};

enum tkOgrSaveResult
{
	osrNoChanges = 0,
	osrAllSaved = 1,
	osrSomeSaved = 2,
	osrNoneSaved = 3
};

enum tkGdalDriverMetadata
{
	dmdUnknown = -1,
	dmdLONGNAME = 0,
	dmdHELPTOPIC = 1,
	dmdMIMETYPE = 2,
	dmdEXTENSION = 3,
	dmdEXTENSIONS = 4,
	dmdCREATIONOPTIONLIST = 5,
	dmdOPENOPTIONLIST = 6,
	dmdCREATIONDATATYPES = 7,
	dmdSUBDATASETS = 8,
	dmdOPEN = 9,
	dmdCREATE = 10,
	dmdCREATECOPY = 11,
	dmdVIRTUALIO = 12,
	dmdLAYER_CREATIONOPTIONLIST = 13,
	dmdOGR_DRIVER = 14,
	dmdRaster = 15,
	dmdVector = 16,
	dmdNotNullFields = 17,
	dmdDefaultFields = 18,
	dmdNotNullGeometries = 19,
	dmCreationFieldDataTypes = 20
};

enum tkOgrSourceType
{
	ogrUninitialized = 0,
	ogrFile = 1,
	ogrDbTable = 2,
	ogrQuery = 3
};

enum tkOgrDSCapability
{
	odcCreateLayer = 0,
	odcDeleteLayer = 1,
	odcCreateGeomFieldAfterCreateLayer = 2,
	odcCreateDataSource = 3,
	odcDeleteDataSource = 4
};

enum tkShapeSelectAction
{
	saShapeEditor = 0
};

enum tkShapeEditingAction
{
	eaCreated = 0,
	eaMoved = 1,
	eaVextexEditing = 2,
	eaCustom = 3
};

enum tkAngleFormat
{
	afDegrees = 0,
	afMinutes = 1,
	afSeconds = 2,
	afRadians = 3
};

enum tkAreaDisplayMode
{
	admMetric = 0,
	admHectars = 1,
	admAmerican = 2
};

enum tkCustomState
{
	csAuto = 0,
	csTrue = 1,
	csFalse = 2
};

enum tkZoomBarVerbosity
{
	zbvZoomOnly = 0,
	zbvFull = 1,
	zbvNone = 2
};

enum tkZoomBoxStyle
{
	zbsRubberBand = 0,
	zbsGray = 1,
	zbsGrayInverted = 2,
	zbsOrange = 3,
	zbsBlue = 4
};

enum tkRasterOverviewCreation
{
	rocAuto = 0,
	rocYes = 1,
	rocNo = 2
};

enum tkTiffCompression
{
	tkmAUTO = -1,
	tkmJPEG = 0,
	tkmLZW = 1,
	tkmPACKBITS = 2,
	tkmDEFLATE = 3,
	tkmCCITTRLE = 4,
	tkmCCITTFAX3 = 5,
	tkmCCITTFAX4 = 6,
	tkmNONE = 7
};

enum tkTilesProjectionStatus
{
	tpsNative = 0,
	tpsCompatible = 1,
	tpsEmptyOrInvalid = 2
};

enum tkRedrawType
{
	RedrawAll = 1,
	RedrawSkipDataLayers = 2,
	RedrawMinimal = 3,
	RedrawSkipAllLayers = 4
};

enum tkCoordinatesDisplay
{
	cdmNone = 0,
	cdmAuto = 1,
	cdmDegrees = 2,
	cdmMapUnits = 3
};

enum tkMapProjection
{
	PROJECTION_CUSTOM = -1,
	PROJECTION_NONE = 0,
	PROJECTION_WGS84 = 1,
	PROJECTION_GOOGLE_MERCATOR = 2
};

enum tkKnownExtents
{
	keSiliconValley = -3,
	keGreenwich = -2,
	keNone = -1,
	keWorld = 0,
	keAfghanistan = 1,
	keAland_Islands = 2,
	keAlbania = 3,
	keAlgeria = 4,
	keAmerican_Samoa = 5,
	keAndorra = 6,
	keAngola = 7,
	keAnguilla = 8,
	keAntigua = 9,
	keArgentina = 10,
	keArmenia = 11,
	keAruba = 12,
	keAustralia = 13,
	keAustria = 14,
	keAzerbaijan = 15,
	keBahamas = 16,
	keBahrain = 17,
	keBangladesh = 18,
	keBarbados = 19,
	keBelarus = 20,
	keBelgium = 21,
	keBelize = 22,
	keBenin = 23,
	keBermuda = 24,
	keBhutan = 25,
	keBolivia = 26,
	keBosnia_and_Herzegovina = 27,
	keBotswana = 28,
	keBrazil = 29,
	keBritish_Virgin_Islands = 30,
	keBrunei = 31,
	keBulgaria = 32,
	keBurkina_Faso = 33,
	keBurundi = 34,
	keCambodia = 35,
	keCameroon = 36,
	keCanada = 37,
	keCape_Verde = 38,
	keCayman_Islands = 39,
	keCentral_African_Republic = 40,
	keChad = 41,
	keChile = 42,
	keChina = 43,
	keCocos_Islands = 44,
	keColombia = 45,
	keComoros = 46,
	keCongo = 47,
	keCook_Islands = 48,
	keCosta_Rica = 49,
	keCroatia = 50,
	keCuba = 51,
	keCyprus = 52,
	keCzech_Republic = 53,
	keDenmark = 54,
	keDjibouti = 55,
	keDominica = 56,
	keDominican_Republic = 57,
	keDR_Congo = 58,
	keEcuador = 59,
	keEgypt = 60,
	keEl_Salvador = 61,
	keEquatorial_Guinea = 62,
	keEritrea = 63,
	keEstonia = 64,
	keEthiopia = 65,
	keFaeroe_Islands = 66,
	keFalkland_Islands = 67,
	keFiji = 68,
	keFinland = 69,
	keFrance = 70,
	keFrench_Guiana = 71,
	keFrench_Polynesia = 72,
	keGabon = 73,
	keGambia = 74,
	keGeorgia = 75,
	keGermany = 76,
	keGhana = 77,
	keGibraltar = 78,
	keGreat_Britain = 79,
	keGreece = 80,
	keGreenland = 81,
	keGrenada = 82,
	keGuadeloupe = 83,
	keGuam = 84,
	keGuatemala = 85,
	keGuernsey = 86,
	keGuinea = 87,
	keGuinea_Bissau = 88,
	keGuyana = 89,
	keHaiti = 90,
	keHonduras = 91,
	keHungary = 92,
	keIceland = 93,
	keIndia = 94,
	keIndonesia = 95,
	keIran = 96,
	keIraq = 97,
	keIreland = 98,
	keIsle_of_Man = 99,
	keIsrael = 100,
	keItaly = 101,
	keIvory_Coast = 102,
	keJamaica = 103,
	keJapan = 104,
	keJersey = 105,
	keJordan = 106,
	keKazakhstan = 107,
	keKenya = 108,
	keKiribati = 109,
	keKuwait = 110,
	keKyrgyzstan = 111,
	keLaos = 112,
	keLatvia = 113,
	keLebanon = 114,
	keLesotho = 115,
	keLiberia = 116,
	keLibya = 117,
	keLiechtenstein = 118,
	keLithuania = 119,
	keLuxembourg = 120,
	keMacao = 121,
	keMacedonia = 122,
	keMadagascar = 123,
	keMalawi = 124,
	keMalaysia = 125,
	keMaldives = 126,
	keMali = 127,
	keMalta = 128,
	keMarshall_Islands = 129,
	keMartinique = 130,
	keMauritania = 131,
	keMauritius = 132,
	keMayotte = 133,
	keMexico = 134,
	keMicronesia = 135,
	keMoldova = 136,
	keMonaco = 137,
	keMongolia = 138,
	keMontenegro = 139,
	keMontserrat = 140,
	keMorocco = 141,
	keMozambique = 142,
	keNamibia = 143,
	keNauru = 144,
	keNepal = 145,
	keNetherlands = 146,
	keNew_Caledonia = 147,
	keNew_Zealand = 148,
	keNicaragua = 149,
	keNiger = 150,
	keNigeria = 151,
	keNiue = 152,
	keNorfolk_Island = 153,
	keNorth_Korea = 154,
	keNorthern_Mariana_Islands = 155,
	keNorway = 156,
	keOccupied_Palestinian_Territory = 157,
	keOman = 158,
	kePakistan = 159,
	kePalau = 160,
	kePanama = 161,
	kePapua_New_Guinea = 162,
	keParaguay = 163,
	kePeru = 164,
	kePhilippines = 165,
	kePitcairn = 166,
	kePoland = 167,
	kePortugal = 168,
	kePuerto_Rico = 169,
	keQatar = 170,
	keReunion_Island = 171,
	keRomania = 172,
	keRussia = 173,
	keRwanda = 174,
	keSaint_Barthelemy = 175,
	keSaint_Martin_French_part = 176,
	keSamoa = 177,
	keSan_Marino = 178,
	keSao_Tome_and_Principe = 179,
	keSaudi_Arabia = 180,
	keSenegal = 181,
	keSerbia = 182,
	keSeychelles = 183,
	keSierra_Leone = 184,
	keSingapore = 185,
	keSlovakia = 186,
	keSlovenia = 187,
	keSolomon_Islands = 188,
	keSomalia = 189,
	keSouth_Africa = 190,
	keSouth_Korea = 191,
	keSpain = 192,
	keSri_Lanka = 193,
	keSt_Helena = 194,
	keSt_Kitts_and_Nevis = 195,
	keSt_Lucia = 196,
	keSt_Pierre_and_Miquelon = 197,
	keSt_Vincent = 198,
	keSudan = 199,
	keSuriname = 200,
	keSvalbard_and_Jan_Mayen = 201,
	keSwaziland = 202,
	keSweden = 203,
	keSwitzerland = 204,
	keSyria = 205,
	keTajikistan = 206,
	keTanzania = 207,
	keThailand = 208,
	keTimor_Leste = 209,
	keTogo = 210,
	keTokelau = 211,
	keTonga = 212,
	keTrinidad_and_Tobago = 213,
	keTunisia = 214,
	keTurkey = 215,
	keTurkmenistan = 216,
	keTurks_and_Caicos_Islands = 217,
	keTuvalu = 218,
	keUganda = 219,
	keUkraine = 220,
	keUnited_Arab_Emirates = 221,
	keUruguay = 222,
	keUS_Virgin_Islands = 223,
	keUSA = 224,
	keUzbekistan = 225,
	keVanuatu = 226,
	keVenezuela = 227,
	keVietnam = 228,
	keWallis_and_Futuna = 229,
	keWestern_Sahara = 230,
	keYemen = 231,
	keZambia = 232,
	keZimbabwe = 233
};

enum tkZoomBehavior
{
	zbDefault = 0,
	zbUseTileLevels = 1
};

enum tkSupportType
{
	stGdal = 0,
	stGdalOverviews = 1
};

enum tkFileOpenStrategy
{
	fosNotSupported = -1,
	fosAutoDetect = 0,
	fosRgbImage = 1,
	fosDirectGrid = 2,
	fosProxyForGrid = 3,
	fosVectorLayer = 4,
	fosVectorDatasource = 5
};

enum tkFieldOperationValidity
{
	fovValid = 0,
	fovFieldNotFound = 1,
	fovNotSupported = 2
};

enum tkFieldStatOperation
{
	fsoSum = 0,
	fsoMin = 1,
	fsoMax = 2,
	fsoAvg = 3,
	fsoWeightedAvg = 4,
	fsoMode = 5
};

enum tkShapeValidationType
{
	svtInput = 0,
	svtOutput = 1
};

enum tkShapeValidationMode
{
	NoValidation = 0,
	TryFixProceedOnFailure = 1,
	TryFixSkipOnFailure = 2,
	AbortOnErrors = 3
};

enum tkShapeValidationStatus
{
	WasntValidated = 0,
	Valid = 1,
	InvalidFixed = 2,
	InvalidSkipped = 3,
	InvalidReturned = 4,
	OperationAborted = 5
};

enum tkScalebarUnits
{
	Metric = 0,
	American = (Metric + 1),
	GoogleStyle = (American + 1)
};

enum tkInterface
{
	idChart = 0,
	idChartField = 1,
	idCharts = 2,
	idColorScheme = 3,
	idESRIGridManager = 4,
	idExtents = 5,
	idField = 6,
	idGeoProjection = 7,
	idGlobalSettings = 8,
	idGrid = 9,
	idGridColorBreak = 10,
	idGridColorScheme = 11,
	idGridHeader = 12,
	idImage = 13,
	idLabelCategory = 14,
	idLabel = 15,
	idLabels = 16,
	idLinePattern = 17,
	idLineSegment = 18,
	idPoint = 19,
	idShape = 20,
	idShapeDrawingOptions = 21,
	idShapefile = 22,
	idShapefileCategories = 23,
	idShapefileCategory = 24,
	idShapefileColorBreak = 25,
	idShapefileColorScheme = 26,
	idShapeNetwork = 27,
	idTable = 28,
	idTileProviders = 29,
	idTiles = 30,
	idTin = 31,
	idUtils = 32,
	idVector = 33,
	idShapeValidationInfo = 34,
	idMeasuring = 35,
	idFileManager = 36,
	idFieldStatOperations = 37,
	idShapeEditor = 38,
	idOgrDatasource = 39,
	idOgrLayer = 40,
	idUndoList = 41,
	idIdentifier = 42,
	idSelectionList = 43,
	idDrawingRectangle = 44,
	idGdalRasterBand = 45,
	idHistogram = 46,
	idGdalDataset = 47,
	idGdalDriver = 48,
	idGdalDriverManager = 49,
	idFunction = 50,
	idExpression = 51,
	idWmsLayer = 52,
	idGdalUtils = 53
};

enum tkTileProjection
{
	SphericalMercator = 0,
	Amersfoort = 1
};

enum tkCacheType
{
	RAM = 0,
	Disk = 1
};

enum tkTileProvider
{
	ProviderNone = -1,
	OpenStreetMap = 0,
	OpenCycleMap = 1,
	OpenTransportMap = 2,
	BingMaps = 3,
	BingSatellite = 4,
	BingHybrid = 5,
	HereMaps = 10,
	HereSatellite = 11,
	HereHybrid = 12,
	HereTerrain = 13,
	Rosreestr = 21,
	OpenHumanitarianMap = 22,
	MapQuestAerial = 23,
	ProviderCustom = 1024
};

enum tkCursor
{
	crsrMapDefault = 0,
	crsrAppStarting = 1,
	crsrArrow = 2,
	crsrCross = 3,
	crsrHelp = 4,
	crsrIBeam = 5,
	crsrNo = 6,
	crsrSizeAll = 7,
	crsrSizeNESW = 8,
	crsrSizeNS = 9,
	crsrSizeNWSE = 10,
	crsrSizeWE = 11,
	crsrUpArrow = 12,
	crsrWait = 13,
	crsrUserDefined = 14,
	crsrHand = 15
};

enum tkResizeBehavior
{
	rbClassic = 0,
	rbModern = 1,
	rbIntuitive = 2,
	rbWarp = 3,
	rbKeepScale = 4
};

enum tkCursorMode
{
	cmZoomIn = 0,
	cmZoomOut = 1,
	cmPan = 2,
	cmSelection = 3,
	cmNone = 4,
	cmMeasure = 5,
	cmAddShape = 6,
	cmEditShape = 8,
	cmSplitByPolyline = 9,
	cmIdentify = 10,
	cmMoveShapes = 11,
	cmRotateShapes = 12,
	cmSelectByPolygon = 13,
	cmEraseByPolygon = 14,
	cmSplitByPolygon = 15,
	cmClipByPolygon = 16
};

enum tkLineStipple
{
	lsNone = 0,
	lsDotted = 1,
	lsDashed = 2,
	lsDashDotDash = 3,
	lsDoubleSolid = 4,
	lsDoubleSolidPlusDash = 5,
	lsTrainTracks = 6,
	lsCustom = 7,
	lsDashDotDot = 8
};

enum tkFillStipple
{
	fsNone = 0,
	fsVerticalBars = 1,
	fsHorizontalBars = 2,
	fsDiagonalDownRight = 3,
	fsDiagonalDownLeft = 4,
	fsPolkaDot = 5,
	fsCustom = 6,
	fsCross = 7,
	fsRaster = 8
};

enum tkDrawReferenceList
{
	dlScreenReferencedList = 0,
	dlSpatiallyReferencedList = 1
};

enum tkDrawMode
{
	dmPoints = 0,
	dmLines = 1,
	dmLineLoop = 2,
	dmLineStrip = 3,
	dmTriangles = 4,
	dmTriangleStrip = 5,
	dmTriangleFan = 6,
	dmQuads = 7,
	dmQuadStrip = 8,
	dmPolygon = 9
};

enum tkPointType
{
	ptSquare = 0,
	ptCircle = 1,
	ptDiamond = 2,
	ptTriangleUp = 3,
	ptTriangleDown = 4,
	ptTriangleLeft = 5,
	ptTriangleRight = 6,
	ptUserDefined = 7,
	ptImageList = 8,
	ptFontChar = 9
};

enum tkLockMode
{
	lmUnlock = 0,
	lmLock = 1
};

enum tkHJustification
{
	hjLeft = 0,
	hjCenter = 1,
	hjRight = 2,
	hjNone = 3,
	hjRaw = 4
};

enum SplitMethod
{
	InscribedRadius = 0,
	AngleDeviation = 1
} 	SplitMethod;

enum PolygonOperation
{
	DIFFERENCE_OPERATION = 0,
	INTERSECTION_OPERATION = 1,
	EXCLUSIVEOR_OPERATION = 2,
	UNION_OPERATION = 3
} 	PolygonOperation;

enum ColoringType
{
	Hillshade = 0,
	Gradient = 1,
	Random = 2
} 	ColoringType;

enum GradientModel
{
	Logorithmic = 0,
	Linear = 1,
	Exponential = 2
} 	GradientModel;

enum PredefinedColorScheme
{
	FallLeaves = 0,
	SummerMountains = 1,
	Desert = 2,
	Glaciers = 3,
	Meadow = 4,
	ValleyFires = 5,
	DeadSea = 6,
	Highway1 = 7,
	Rainbow = 8,
	ReversedRainbow = 9
} 	PredefinedColorScheme;

enum tkSpatialRelation
{
	srContains = 0,
	srCrosses = 1,
	srDisjoint = 2,
	srEquals = 3,
	srIntersects = 4,
	srOverlaps = 5,
	srTouches = 6,
	srWithin = 7
};

enum tkClipOperation
{
	clDifference = 0,
	clIntersection = 1,
	clSymDifference = 2,
	clUnion = 3,
	clClip = 4
};

enum tkShapeDrawingMethod
{
	dmStandard = 0,
	dmNewWithSelection = 1,
	dmNewWithLabels = 2,
	dmNewSymbology = 3
};

enum tkLabelAlignment
{
	laTopLeft = 0,
	laTopCenter = 1,
	laTopRight = 2,
	laCenterLeft = 3,
	laCenter = 4,
	laCenterRight = 5,
	laBottomLeft = 6,
	laBottomCenter = 7,
	laBottomRight = 8
};

enum tkLabelPositioning
{
	lpCenter = 0,
	lpCentroid = 1,
	lpInteriorPoint = 2,
	lpFirstSegment = 3,
	lpLastSegment = 4,
	lpMiddleSegment = 5,
	lpLongestSegement = 6,
	lpNone = 7
};

enum tkVerticalPosition
{
	vpAboveParentLayer = 0,
	vpAboveAllLayers = 1
};

enum tkClassificationType
{
	ctNaturalBreaks = 0,
	ctUniqueValues = 1,
	ctEqualIntervals = 2,
	ctEqualCount = 3,
	ctStandardDeviation = 4,
	ctEqualSumOfValues = 5
};

enum tkColorSchemeType
{
	ctSchemeRandom = 0,
	ctSchemeGraduated = 1
};

enum tkLineLabelOrientation
{
	lorHorizontal = 0,
	lorParallel = 1,
	lorPerpindicular = 2
};

enum tkLabelFrameType
{
	lfRectangle = 0,
	lfRoundedRectangle = 1,
	lfPointedRectangle = 2
};

enum tkUnitsOfMeasure
{
	umDecimalDegrees = 0,
	umMiliMeters = 1,
	umCentimeters = 2,
	umInches = 3,
	umFeets = 4,
	umYards = 5,
	umMeters = 6,
	umMiles = 7,
	umKilometers = 8
};

enum tkLabelElements
{
	leFont = 0,
	leFontOutline = 1,
	leShadow = 2,
	leHalo = 3,
	leFrameBackground = 4,
	leFrameOutline = 5,
	leDefault = 6
};

enum tkShapeElements
{
	shElementDefault = 0,
	shElementFill = 1,
	shElementFill2 = 2,
	shElementLines = 3,
	shElementFillBackground = 4
};

enum tkLinearGradientMode
{
	gmHorizontal = 0,
	gmVertical = 1,
	gmForwardDiagonal = 2,
	gmBackwardDiagonal = 3,
	gmNone = 4
};

enum tkInterpolationMode
{
	imBilinear = 3,
	imBicubic = 4,
	imNone = 5,
	imHighQualityBilinear = 6,
	imHighQualityBicubic = 7
};

enum tkGDALResamplingMethod
{
	grmNone = 0,
	grmNearest = (grmNone + 1),
	grmGauss = (grmNearest + 1),
	grmCubic = (grmGauss + 1),
	grmCubicSpline = (grmCubic + 1),
	grmAverage = (grmCubicSpline + 1),
	grmAverageMagphase = (grmAverage + 1),
	grmBilinear = (grmAverageMagphase + 1),
	grmLanczos = (grmBilinear + 1),
	grmMode = (grmLanczos + 1)
};

enum tkResamplingType
{
	rtNone = 0,
	rtLinear = 1,
	rtCubic = 2,
	rtLanczos = 3
};

enum tkGradientType
{
	gtLinear = 0,
	gtRectangular = 1,
	gtCircle = 2
};

enum tkGDIPlusHatchStyle
{
	hsNone = -1,
	hsHorizontal = 0,
	hsVertical = 1,
	hsForwardDiagonal = 2,
	hsBackwardDiagonal = 3,
	hsCross = 4,
	hsDiagonalCross = 5,
	hsPercent05 = 6,
	hsPercent10 = 7,
	hsPercent20 = 8,
	hsPercent25 = 9,
	hsPercent30 = 10,
	hsPercent40 = 11,
	hsPercent50 = 12,
	hsPercent60 = 13,
	hsPercent70 = 14,
	hsPercent75 = 15,
	hsPercent80 = 16,
	hsPercent90 = 17,
	hsLightDownwardDiagonal = 18,
	hsLightUpwardDiagonal = 19,
	hsDarkDownwardDiagonal = 20,
	hsDarkUpwardDiagonal = 21,
	hsWideDownwardDiagonal = 22,
	hsWideUpwardDiagonal = 23,
	hsLightVertical = 24,
	hsLightHorizontal = 25,
	hsNarrowVertical = 26,
	hsNarrowHorizontal = 27,
	hsDarkVertical = 28,
	hsDarkHorizontal = 29,
	hsDashedDownwardDiagonal = 30,
	hsDashedUpwardDiagonal = 31,
	hsDashedHorizontal = 32,
	hsDashedVertical = 33,
	hsSmallConfetti = 34,
	hsLargeConfetti = 35,
	hsZigZag = 36,
	hsWave = 37,
	hsDiagonalBrick = 38,
	hsHorizontalBrick = 39,
	hsWeave = 40,
	hsPlaid = 41,
	hsDivot = 42,
	hsDottedGrid = 43,
	hsDottedDiamond = 44,
	hsShingle = 45,
	hsTrellis = 46,
	hsSphere = 47,
	hsSmallGrid = 48,
	hsSmallCheckerBoard = 49,
	hsLargeCheckerBoard = 50,
	hsOutlinedDiamond = 51,
	hsSolidDiamond = 52
};

enum tkPointSymbolType
{
	ptSymbolStandard = 0,
	ptSymbolFontCharacter = 1,
	ptSymbolPicture = 2
};

enum tkFillType
{
	ftStandard = 0,
	ftHatch = 1,
	ftGradient = 2,
	ftPicture = 3
};

enum tkPointShapeType
{
	ptShapeRegular = 0,
	ptShapeCross = 1,
	ptShapeStar = 2,
	ptShapeCircle = 3,
	ptShapeArrow = 4,
	ptShapeFlag = 5
};

enum tkDefaultPointSymbol
{
	dpsSquare = 0,
	dpsCircle = 1,
	dpsDiamond = 2,
	dpsTriangleUp = 3,
	dpsTriangleDown = 4,
	dpsTriangleLeft = 5,
	dpsTriangleRight = 6,
	dpsCross = 7,
	dpsXCross = 8,
	dpsStar = 9,
	dpsPentagon = 10,
	dpsArrowUp = 11,
	dpsArrowDown = 12,
	dpsArrowLeft = 13,
	dpsArrowRight = 14,
	dpsAsterisk = 15,
	dpsFlag = 16
};

enum tkPointReflectionType
{
	prtNone = 0,
	prtLeftToRight = 1,
	prtTopToBottom = 2
};

enum tkGradientBounds
{
	gbWholeLayer = 0,
	gbPerShape = 1
};

enum tkVectorDrawingMode
{
	vdmGDI = 0,
	vdmGDIMixed = 1,
	vdmGDIPlus = 2
};

enum tkChartType
{
	chtBarChart = 0,
	chtPieChart = 1
};

enum tkGeometryEngine
{
	engineGeos = 0,
	engineClipper = 1
};

enum tkSelectionAppearance
{
	saSelectionColor = 0,
	saDrawingOptions = 1
};

enum tkCollisionMode
{
	AllowCollisions = 0,
	LocalList = 1,
	GlobalList = 2
};

enum tkTextRenderingHint
{
	SystemDefault = 0,
	SingleBitPerPixelGridFit = (SystemDefault + 1),
	SingleBitPerPixel = (SingleBitPerPixelGridFit + 1),
	AntiAliasGridFit = (SingleBitPerPixel + 1),
	HintAntiAlias = (AntiAliasGridFit + 1),
	ClearTypeGridFit = (HintAntiAlias + 1)
};

enum tkSmoothingMode
{
	DefaultMode = 0,
	HighSpeedMode = (DefaultMode + 1),
	HighQualityMode = (HighSpeedMode + 1),
	None = (HighQualityMode + 1),
	AntiAlias = (None + 1)
};

enum tkCompositingQuality
{
	Default = 0,
	HighSpeed = (Default + 1),
	HighQuality = (HighSpeed + 1),
	GammaCorrected = (HighQuality + 1),
	AssumeLinear = (GammaCorrected + 1)
};

enum tkMapColor
{
	AliceBlue = 0xfff0f8ff,
	AntiqueWhite = 0xfffaebd7,
	Aqua = 0xff00ffff,
	Aquamarine = 0xff7fffd4,
	Azure = 0xfff0ffff,
	Beige = 0xfff5f5dc,
	Bisque = 0xffffe4c4,
	Black = 0xff000000,
	BlanchedAlmond = 0xffffebcd,
	Blue = 0xff0000ff,
	BlueViolet = 0xff8a2be2,
	Brown = 0xffa52a2a,
	BurlyWood = 0xffdeb887,
	CadetBlue = 0xff5f9ea0,
	Chartreuse = 0xff7fff00,
	Chocolate = 0xffd2691e,
	Coral = 0xffff7f50,
	CornflowerBlue = 0xff6495ed,
	Cornsilk = 0xfffff8dc,
	Crimson = 0xffdc143c,
	Cyan = 0xff00ffff,
	DarkBlue = 0xff00008b,
	DarkCyan = 0xff008b8b,
	DarkGoldenrod = 0xffb8860b,
	DarkGray = 0xffa9a9a9,
	DarkGreen = 0xff006400,
	DarkKhaki = 0xffbdb76b,
	DarkMagenta = 0xff8b008b,
	DarkOliveGreen = 0xff556b2f,
	DarkOrange = 0xffff8c00,
	DarkOrchid = 0xff9932cc,
	DarkRed = 0xff8b0000,
	DarkSalmon = 0xffe9967a,
	DarkSeaGreen = 0xff8fbc8b,
	DarkSlateBlue = 0xff483d8b,
	DarkSlateGray = 0xff2f4f4f,
	DarkTurquoise = 0xff00ced1,
	DarkViolet = 0xff9400d3,
	DeepPink = 0xffff1493,
	DeepSkyBlue = 0xff00bfff,
	DimGray = 0xff696969,
	DodgerBlue = 0xff1e90ff,
	Firebrick = 0xffb22222,
	FloralWhite = 0xfffffaf0,
	ForestGreen = 0xff228b22,
	Fuchsia = 0xffff00ff,
	Gainsboro = 0xffdcdcdc,
	GhostWhite = 0xfff8f8ff,
	Gold = 0xffffd700,
	Goldenrod = 0xffdaa520,
	Gray = 0xff808080,
	Green = 0xff008000,
	GreenYellow = 0xffadff2f,
	Honeydew = 0xfff0fff0,
	HotPink = 0xffff69b4,
	IndianRed = 0xffcd5c5c,
	Indigo = 0xff4b0082,
	Ivory = 0xfffffff0,
	Khaki = 0xfff0e68c,
	Lavender = 0xffe6e6fa,
	LavenderBlush = 0xfffff0f5,
	LawnGreen = 0xff7cfc00,
	LemonChiffon = 0xfffffacd,
	LightBlue = 0xffadd8e6,
	LightCoral = 0xfff08080,
	LightCyan = 0xffe0ffff,
	LightGoldenrodYellow = 0xfffafad2,
	LightGray = 0xffd3d3d3,
	LightGreen = 0xff90ee90,
	LightPink = 0xffffb6c1,
	LightSalmon = 0xffffa07a,
	LightSeaGreen = 0xff20b2aa,
	LightSkyBlue = 0xff87cefa,
	LightSlateGray = 0xff778899,
	LightSteelBlue = 0xffb0c4de,
	LightYellow = 0xffffffe0,
	Lime = 0xff00ff00,
	LimeGreen = 0xff32cd32,
	Linen = 0xfffaf0e6,
	Magenta = 0xffff00ff,
	Maroon = 0xff800000,
	MediumAquamarine = 0xff66cdaa,
	MediumBlue = 0xff0000cd,
	MediumOrchid = 0xffba55d3,
	MediumPurple = 0xff9370db,
	MediumSeaGreen = 0xff3cb371,
	MediumSlateBlue = 0xff7b68ee,
	MediumSpringGreen = 0xff00fa9a,
	MediumTurquoise = 0xff48d1cc,
	MediumVioletRed = 0xffc71585,
	MidnightBlue = 0xff191970,
	MintCream = 0xfff5fffa,
	MistyRose = 0xffffe4e1,
	Moccasin = 0xffffe4b5,
	NavajoWhite = 0xffffdead,
	Navy = 0xff000080,
	OldLace = 0xfffdf5e6,
	Olive = 0xff808000,
	OliveDrab = 0xff6b8e23,
	Orange = 0xffffa500,
	OrangeRed = 0xffff4500,
	Orchid = 0xffda70d6,
	PaleGoldenrod = 0xffeee8aa,
	PaleGreen = 0xff98fb98,
	PaleTurquoise = 0xffafeeee,
	PaleVioletRed = 0xffdb7093,
	PapayaWhip = 0xffffefd5,
	PeachPuff = 0xffffdab9,
	Peru = 0xffcd853f,
	Pink = 0xffffc0cb,
	Plum = 0xffdda0dd,
	PowderBlue = 0xffb0e0e6,
	Purple = 0xff800080,
	Red = 0xffff0000,
	RosyBrown = 0xffbc8f8f,
	RoyalBlue = 0xff4169e1,
	SaddleBrown = 0xff8b4513,
	Salmon = 0xfffa8072,
	SandyBrown = 0xfff4a460,
	SeaGreen = 0xff2e8b57,
	SeaShell = 0xfffff5ee,
	Sienna = 0xffa0522d,
	Silver = 0xffc0c0c0,
	SkyBlue = 0xff87ceeb,
	SlateBlue = 0xff6a5acd,
	SlateGray = 0xff708090,
	Snow = 0xfffffafa,
	SpringGreen = 0xff00ff7f,
	SteelBlue = 0xff4682b4,
	Tan = 0xffd2b48c,
	Teal = 0xff008080,
	Thistle = 0xffd8bfd8,
	Tomato = 0xffff6347,
	Turquoise = 0xff40e0d0,
	Violet = 0xffee82ee,
	Wheat = 0xfff5deb3,
	White = 0xffffffff,
	WhiteSmoke = 0xfff5f5f5,
	Yellow = 0xffffff00,
	YellowGreen = 0xff9acd32
};

enum tkDashStyle
{
	dsSolid = 0,
	dsDash = 1,
	dsDot = 2,
	dsDashDot = 3,
	dsDashDotDot = 4,
	dsCustom = 5
};

enum tkVertexType
{
	vtSquare = 0,
	vtCircle = 1
};

enum tkLineType
{
	lltSimple = 0,
	lltMarker = 1
};

enum tkChartValuesStyle
{
	vsHorizontal = 0,
	vsVertical = 1
};

enum tkShapefileSourceType
{
	sstUninitialized = 0,
	sstDiskBased = 1,
	sstInMemory = 2
};

enum tkImageSourceType
{
	istUninitialized = 0,
	istDiskBased = 1,
	istInMemory = 2,
	istGDALBased = 3,
	istGDIPlus = 4
};

enum tkGridSourceType
{
	gstUninitialized = 0,
	gstGDALBased = 1,
	gstNative = 2
};

enum tkGridProxyFormat
{
	gpfBmpProxy = 0,
	gpfTiffProxy = 1
};

enum tkGridProxyMode
{
	gpmAuto = 0,
	gpmUseProxy = 1,
	gpmNoProxy = 2
};

enum tkSavingMode
{
	modeNone = 0,
	modeStandard = 1,
	modeXML = 2,
	modeDBF = 3,
	modeXMLOverwrite = 4
};

enum tkMeasuringAction
{
	PointAdded = 0,
	PointRemoved = 1,
	MesuringStopped = 2,
	MeasuringStopped = 2
};

#pragma deprecated(MesuringStopped)
enum tkCanDisplayGridWoProxy
{
	cdwYes = 0,
	cdwUnsupportedFormat = 1,
	cdwSizeLimitation = 2
};

enum tkMeasuringType
{
	MeasureDistance = 0,
	MeasureArea = 1
};

enum tkLocalizedStrings
{
	lsHectars = 0,
	lsMeters = 1,
	lsKilometers = 2,
	lsSquareKilometers = 3,
	lsSquareMeters = 4,
	lsMapUnits = 5,
	lsSquareMapUnits = 6,
	lsMiles = 7,
	lsFeet = 8,
	lsLatitude = 9,
	lsLongitude = 10,
	lsRadians = 11,
	lsNorthEast = 12,
	lsSouthEast = 13,
	lsSouthWest = 14,
	lsNorthWest = 15,
	lsNorth = 16,
	lsEast = 17,
	lsSouth = 18,
	lsWest = 19,
	lsAcres = 20,
	lsSquareFeet = 21,
	lsSquareMiles = 22
};

enum tkProjectionParameter
{
	LatitudeOfOrigin = 0,
	CentralMeridian = 1,
	ScaleFactor = 2,
	FalseEasting = 3,
	FalseNorthing = 4,
	LongitudeOfOrigin = 5
};

enum tkGeogCSParameter
{
	SemiMajor = 0,
	SemiMinor = 1,
	InverseFlattening = 2,
	PrimeMeridian = 3,
	AngularUnit = 4
};

enum tkGdalErrorType
{
	GdalNone = 0,
	GdalDebug = 1,
	GdalWarning = 2,
	GdalFailure = 3,
	GdalFatal = 4,
	GdalUndefined = 5
};

enum tkGdalError
{
	GdalErrorNone = 0,
	GdalErrorAppDefined = 1,
	GdalErrorOutOfMemory = 2,
	GdalErrorFileIO = 3,
	GdalErrorOpenFailed = 4,
	GdalErrorIllegalArg = 5,
	GdalErrorNotSupported = 6,
	GdalErrorAssertionFailed = 7,
	GdalErrorNoWriteAccess = 8,
	GdalErrorUserInterrupt = 9,
	GdalErrorObjectNull = 10,
	GdalErrorUndefined = 11
};

enum ShpfileType
{
	SHP_NULLSHAPE = 0,
	SHP_POINT = 1,
	SHP_POLYLINE = 3,
	SHP_POLYGON = 5,
	SHP_MULTIPOINT = 8,
	SHP_POINTZ = 11,
	SHP_POLYLINEZ = 13,
	SHP_POLYGONZ = 15,
	SHP_MULTIPOINTZ = 18,
	SHP_POINTM = 21,
	SHP_POLYLINEM = 23,
	SHP_POLYGONM = 25,
	SHP_MULTIPOINTM = 28,
	SHP_MULTIPATCH = 31
} 	ShpfileType;

enum SelectMode
{
	INTERSECTION = 0,
	INCLUSION = 1
} 	SelectMode;

enum ImageType
{
	BITMAP_FILE = 0,
	GIF_FILE = 1,
	USE_FILE_EXTENSION = 2,
	TIFF_FILE = 3,
	JPEG_FILE = 4,
	PNG_FILE = 5,
	PPM_FILE = 7,
	ECW_FILE = 8,
	JPEG2000_FILE = 9,
	SID_FILE = 10,
	PNM_FILE = 11,
	PGM_FILE = 12,
	BIL_FILE = 13,
	ADF_FILE = 14,
	GRD_FILE = 15,
	IMG_FILE = 16,
	ASC_FILE = 17,
	BT_FILE = 18,
	MAP_FILE = 19,
	LF2_FILE = 20,
	KAP_FILE = 21,
	DEM_FILE = 22,
	NTF_FILE = 23,
	NETCDF_FILE = 24,
	VRT_FILE = 25
} 	ImageType;

enum FieldType
{
	STRING_FIELD = 0,
	INTEGER_FIELD = 1,
	DOUBLE_FIELD = 2,
	BOOLEAN_FIELD = 3,
	DATE_FIELD = 4
} 	FieldType;

enum GridDataType
{
	ShortDataType = 0,
	LongDataType = 1,
	FloatDataType = 2,
	DoubleDataType = 3,
	InvalidDataType = -1,
	UnknownDataType = 4,
	ByteDataType = 5
} 	GridDataType;

enum GridFileType
{
	Ascii = 0,
	Binary = 1,
	Esri = 2,
	GeoTiff = 3,
	Sdts = 4,
	PAux = 5,
	PCIDsk = 6,
	DTed = 7,
	Bil = 8,
	Ecw = 9,
	MrSid = 10,
	Flt = 11,
	Dem = 12,
	UseExtension = 13,
	InvalidGridFileType = -1
} 	GridFileType;

enum AmbiguityResolution
{
	Z_VALUE = 0,
	DISTANCE_TO_OUTLET = 1,
	NO_RESOLUTION = 2
} 	AmbiguityResolution;

enum tkValueType
{
	vtDouble = 0,
	vtString = 1,
	vtBoolean = 2,
	vtFloatArray = 3
};

enum tkGridSchemeRetrieval
{
	gsrAuto = 0,
	gsrDiskBased = 1,
	gsrDiskBasedForProxy = 2,
	gsrGdalColorTable = 3
};

enum tkGridSchemeGeneration
{
	gsgGradient = 0,
	gsgUniqueValues = 1,
	gsgUniqueValuesOrGradient = 2
};

enum tkGridRendering
{
	grForceForAllFormats = 0,
	grForGridsOnly = 1,
	grNever = 2
};

enum tkCoordinateSystem
{
	csAbidjan_1987 = 4143,
	csAccra = 4168,
	csAdindan = 4201,
	csAfgooye = 4205,
	csAgadez = 4206,
	csAGD66 = 4202,
	csAGD84 = 4203,
	csAin_el_Abd = 4204,
	csAlbanian_1987 = 4191,
	csAmerican_Samoa_1962 = 4169,
	csAmersfoort = 4289,
	csAmmassalik_1958 = 4196,
	csAnguilla_1957 = 4600,
	csAntigua_1943 = 4601,
	csAratu = 4208,
	csArc_1950 = 4209,
	csArc_1960 = 4210,
	csAscension_Island_1958 = 4712,
	csATF_Paris = 4901,
	csATS77 = 4122,
	csAustralian_Antarctic = 4176,
	csAyabelle_Lighthouse = 4713,
	csAzores_Central_1948 = 4183,
	csAzores_Central_1995 = 4665,
	csAzores_Occidental_1939 = 4182,
	csAzores_Oriental_1940 = 4184,
	csAzores_Oriental_1995 = 4664,
	csBarbados_1938 = 4212,
	csBatavia = 4211,
	csBatavia_Jakarta = 4813,
	csBDA2000 = 4762,
	csBeduaram = 4213,
	csBeijing_1954 = 4214,
	csBelge_1950 = 4215,
	csBelge_1950_Brussels = 4809,
	csBelge_1972 = 4313,
	csBellevue = 4714,
	csBermuda_1957 = 4216,
	csBern_1898_Bern = 4801,
	csBern_1938 = 4306,
	csBissau = 4165,
	csBogota_1975 = 4218,
	csBogota_1975_Bogota = 4802,
	csBukit_Rimpah = 4219,
	csCadastre_1997 = 4475,
	csCamacupa = 4220,
	csCamp_Area_Astro = 4715,
	csCampo_Inchauspe = 4221,
	csCape = 4222,
	csCape_Canaveral = 4717,
	csCarthage = 4223,
	csCarthage_Paris = 4816,
	csCH1903 = 4149,
	csCH1903_plus = 4150,
	csChatham_Islands_1971 = 4672,
	csChatham_Islands_1979 = 4673,
	csChina_Geodetic_Coordinate_System_2000 = 4490,
	csChos_Malal_1914 = 4160,
	csCHTRF95 = 4151,
	csChua = 4224,
	csCocos_Islands_1965 = 4708,
	csCombani_1950 = 4632,
	csConakry_1905 = 4315,
	csCorrego_Alegre = 4225,
	csCSG67 = 4623,
	csDabola_1981 = 4155,
	csDatum_73 = 4274,
	csDealul_Piscului_1930 = 4316,
	csDeception_Island = 4736,
	csDeir_ez_Zor = 4227,
	csDGN95 = 4755,
	csDHDN = 4314,
	csDiego_Garcia_1969 = 4724,
	csDominica_1945 = 4602,
	csDouala_1948 = 4192,
	csDRUKREF_03 = 5264,
	csEaster_Island_1967 = 4719,
	csED50 = 4230,
	csED50_ED77 = 4154,
	csED79 = 4668,
	csED87 = 4231,
	csEgypt_1907 = 4229,
	csEgypt_1930 = 4199,
	csEgypt_Gulf_of_Suez_S_650_TL = 4706,
	csELD79 = 4159,
	csEST92 = 4133,
	csEST97 = 4180,
	csETRS89 = 4258,
	csFahud = 4232,
	csFatu_Iva_72 = 4688,
	csFD54 = 4741,
	csFD58 = 4132,
	csFiji_1956 = 4721,
	csFiji_1986 = 4720,
	csfk89 = 4753,
	csFort_Marigot = 4621,
	csGan_1970 = 4684,
	csGaroua = 4197,
	csGDA94 = 4283,
	csGDBD2009 = 5246,
	csGDM2000 = 4742,
	csGGRS87 = 4121,
	csGR96 = 4747,
	csGrand_Cayman_1959 = 4723,
	csGrand_Comoros = 4646,
	csGreek = 4120,
	csGreek_Athens = 4815,
	csGrenada_1953 = 4603,
	csGuadeloupe_1948 = 4622,
	csGuam_1963 = 4675,
	csGulshan_303 = 4682,
	csHanoi_1972 = 4147,
	csHartebeesthoek94 = 4148,
	csHD1909 = 3819,
	csHD72 = 4237,
	csHelle_1954 = 4660,
	csHerat_North = 4255,
	csHito_XVIII_1963 = 4254,
	csHjorsey_1955 = 4658,
	csHong_Kong_1963 = 4738,
	csHong_Kong_1963_67 = 4739,
	csHong_Kong_1980 = 4611,
	csHTRS96 = 4761,
	csHu_Tzu_Shan_1950 = 4236,
	csID74 = 4238,
	csIGC_1962_6th_Parallel_South = 4697,
	csIGCB_1955 = 4701,
	csIGM95 = 4670,
	csIGN_1962_Kerguelen = 4698,
	csIGN_Astro_1960 = 4700,
	csIGN53_Mare = 4641,
	csIGN56_Lifou = 4633,
	csIGN63_Hiva_Oa = 4689,
	csIGN72_Grande_Terre = 4662,
	csIGN72_Nuku_Hiva = 4630,
	csIGRS = 3889,
	csIKBD_92 = 4667,
	csIndian_1954 = 4239,
	csIndian_1960 = 4131,
	csIndian_1975 = 4240,
	csIRENET95 = 4173,
	csISN93 = 4659,
	csIsrael = 4141,
	csIwo_Jima_1945 = 4709,
	csJAD2001 = 4758,
	csJAD69 = 4242,
	csJamaica_1875 = 4241,
	csJGD2000 = 4612,
	csJohnston_Island_1961 = 4725,
	csJouik_1961 = 4679,
	csKalianpur_1880 = 4243,
	csKalianpur_1937 = 4144,
	csKalianpur_1962 = 4145,
	csKalianpur_1975 = 4146,
	csKandawala = 4244,
	csKarbala_1979 = 4743,
	csKasai_1953 = 4696,
	csKatanga_1955 = 4695,
	csKertau_RSO = 4751,
	csKertau_1968 = 4245,
	csKKJ = 4123,
	csKOC = 4246,
	csKorea_2000 = 4737,
	csKorean_1985 = 4162,
	csKorean_1995 = 4166,
	csKousseri = 4198,
	csKUDAMS = 4319,
	csKusaie_1951 = 4735,
	csLa_Canoa = 4247,
	csLake = 4249,
	csLao_1993 = 4677,
	csLao_1997 = 4678,
	csLe_Pouce_1934 = 4699,
	csLeigon = 4250,
	csLGD2006 = 4754,
	csLiberia_1964 = 4251,
	csLisbon = 4207,
	csLisbon_Lisbon = 4803,
	csLisbon_1890 = 4666,
	csLisbon_1890_Lisbon = 4904,
	csLittle_Cayman_1961 = 4726,
	csLKS92 = 4661,
	csLKS94 = 4669,
	csLocodjo_1965 = 4142,
	csLoma_Quintana = 4288,
	csLome = 4252,
	csLuxembourg_1930 = 4181,
	csLuzon_1911 = 4253,
	csMadrid_1870_Madrid = 4903,
	csMadzansua = 4128,
	csMAGNA_SIRGAS = 4686,
	csMahe_1971 = 4256,
	csMakassar = 4257,
	csMakassar_Jakarta = 4804,
	csMalongo_1987 = 4259,
	csManoca_1962 = 4193,
	csMarcus_Island_1952 = 4711,
	csMarshall_Islands_1960 = 4732,
	csMartinique_1938 = 4625,
	csMassawa = 4262,
	csMaupiti_83 = 4692,
	csMauritania_1999 = 4702,
	csMerchich = 4261,
	csMexican_Datum_of_1993 = 4483,
	csMGI = 4312,
	csMGI_Ferro = 4805,
	csMGI_1901 = 3906,
	csMhast_offshore = 4705,
	csMhast_onshore = 4704,
	csMhast_1951 = 4703,
	csMidway_1961 = 4727,
	csMinna = 4263,
	csMOLDREF99 = 4023,
	csMonte_Mario = 4265,
	csMonte_Mario_Rome = 4806,
	csMontserrat_1958 = 4604,
	csMoorea_87 = 4691,
	csMOP78 = 4639,
	csMount_Dillon = 4157,
	csMoznet = 4130,
	csMporaloko = 4266,
	csNAD27 = 4267,
	csNAD27_Michigan = 4268,
	csNAD27_76 = 4608,
	csNAD27_CGQ77 = 4609,
	csNAD83 = 4269,
	csNAD83_CSRS = 4617,
	csNAD83_HARN = 4152,
	csNAD83_NSRS2007 = 4759,
	csNahrwan_1934 = 4744,
	csNahrwan_1967 = 4270,
	csNakhl_e_Ghanem = 4693,
	csNaparima_1955 = 4158,
	csNaparima_1972 = 4271,
	csNEA74_Noumea = 4644,
	csNew_Beijing = 4555,
	csNGN = 4318,
	csNGO_1948 = 4273,
	csNGO_1948_Oslo = 4817,
	csNord_Sahara_1959 = 4307,
	csNouakchott_1965 = 4680,
	csNSWC_9Z_2 = 4276,
	csNTF = 4275,
	csNTF_Paris = 4807,
	csNZGD2000 = 4167,
	csNZGD49 = 4272,
	csObservatario = 4129,
	csOld_Hawaiian = 4135,
	csOS_SN80 = 4279,
	csOSGB_1936 = 4277,
	csOSGB70 = 4278,
	csOSNI_1952 = 4188,
	csPadang = 4280,
	csPadang_Jakarta = 4808,
	csPalestine_1923 = 4281,
	csPampa_del_Castillo = 4161,
	csPD_83 = 4746,
	csPerroud_1950 = 4637,
	csPetrels_1972 = 4636,
	csPhoenix_Islands_1966 = 4716,
	csPico_de_las_Nieves_1984 = 4728,
	csPitcairn_1967 = 4729,
	csPitcairn_2006 = 4763,
	csPoint_58 = 4620,
	csPointe_Noire = 4282,
	csPorto_Santo = 4615,
	csPorto_Santo_1995 = 4663,
	csPOSGAR_94 = 4694,
	csPOSGAR_98 = 4190,
	csPrincipe = 4824,
	csPRS92 = 4683,
	csPSAD56 = 4248,
	csPSD93 = 4134,
	csPTRA08 = 5013,
	csPuerto_Rico = 4139,
	csPulkovo_1942 = 4284,
	csPulkovo_1942_58 = 4179,
	csPulkovo_1942_83 = 4178,
	csPulkovo_1995 = 4200,
	csPZ_90 = 4740,
	csQatar_1948 = 4286,
	csQatar_1974 = 4285,
	csQND95 = 4614,
	csQornoq_1927 = 4194,
	csRassadiran = 4153,
	csRD_83 = 4745,
	csREGCAN95 = 4081,
	csREGVEN = 4189,
	csReunion_1947 = 4626,
	csReykjavik_1900 = 4657,
	csRGF93 = 4171,
	csRGFG95 = 4624,
	csRGM04 = 4470,
	csRGNC91_93 = 4749,
	csRGPF = 4687,
	csRGR92 = 4627,
	csRGRDC_2005 = 4046,
	csRGSPM06 = 4463,
	csRRAF_1991 = 4558,
	csRSRGD2000 = 4764,
	csRT38 = 4308,
	csRT38_Stockholm = 4814,
	csRT90 = 4124,
	csSAD69 = 4618,
	csSaint_Pierre_et_Miquelon_1950 = 4638,
	csSanto_1965 = 4730,
	csSao_Tome = 4823,
	csSapper_Hill_1943 = 4292,
	csSchwarzeck = 4293,
	csScoresbysund_1952 = 4195,
	csSegara = 4613,
	csSegara_Jakarta = 4820,
	csSelvagem_Grande = 4616,
	csSerindung = 4295,
	csSierra_Leone_1924 = 4174,
	csSierra_Leone_1968 = 4175,
	csSIRGAS_1995 = 4170,
	csSIRGAS_2000 = 4674,
	csS_JTSK = 4156,
	csS_JTSK_Ferro = 4818,
	csS_JTSK_05 = 5228,
	csS_JTSK_05_Ferro = 5229,
	csSLD99 = 5233,
	csSlovenia_1996 = 4765,
	csSolomon_1968 = 4718,
	csSouth_Georgia_1968 = 4722,
	csSouth_Yemen = 4164,
	csSREF98 = 4075,
	csSt_George_Island = 4138,
	csSt_Helena_1971 = 4710,
	csSt_Kitts_1955 = 4605,
	csSt_Lawrence_Island = 4136,
	csSt_Lucia_1955 = 4606,
	csSt_Paul_Island = 4137,
	csSt_Vincent_1945 = 4607,
	csST71_Belep = 4643,
	csST84_Ile_des_Pins = 4642,
	csST87_Ouvea = 4750,
	csSVY21 = 4757,
	csSWEREF99 = 4619,
	csTahaa_54 = 4629,
	csTahiti_52 = 4628,
	csTahiti_79 = 4690,
	csTananarive = 4297,
	csTananarive_Paris = 4810,
	csTC_1948 = 4303,
	csTern_Island_1961 = 4707,
	csTete = 4127,
	csTimbalai_1948 = 4298,
	csTM65 = 4299,
	csTM75 = 4300,
	csTokyo = 4301,
	csTokyo_1892 = 5132,
	csTrinidad_1903 = 4302,
	csTristan_1968 = 4734,
	csTUREF = 5252,
	csTWD67 = 3821,
	csTWD97 = 3824,
	csVanua_Levu_1915 = 4748,
	csVientiane_1982 = 4676,
	csViti_Levu_1912 = 4752,
	csVN_2000 = 4756,
	csVoirol_1875 = 4304,
	csVoirol_1875_Paris = 4811,
	csVoirol_1879 = 4671,
	csVoirol_1879_Paris = 4821,
	csWake_Island_1952 = 4733,
	csWGS_66 = 4760,
	csWGS_72 = 4322,
	csWGS_72BE = 4324,
	csWGS_84 = 4326,
	csXian_1980 = 4610,
	csYacare = 4309,
	csYemen_NGN96 = 4163,
	csYoff = 4310,
	csZanderij = 4311
};

enum tkNad83Projection
{
	Nad83_Kentucky_North = 2205,
	Nad83_Arizona_East_ft = 2222,
	Nad83_Arizona_Central_ft = 2223,
	Nad83_Arizona_West_ft = 2224,
	Nad83_California_zone_1_ftUS = 2225,
	Nad83_California_zone_2_ftUS = 2226,
	Nad83_California_zone_3_ftUS = 2227,
	Nad83_California_zone_4_ftUS = 2228,
	Nad83_California_zone_5_ftUS = 2229,
	Nad83_California_zone_6_ftUS = 2230,
	Nad83_Colorado_North_ftUS = 2231,
	Nad83_Colorado_Central_ftUS = 2232,
	Nad83_Colorado_South_ftUS = 2233,
	Nad83_Connecticut_ftUS = 2234,
	Nad83_Delaware_ftUS = 2235,
	Nad83_Florida_East_ftUS = 2236,
	Nad83_Florida_West_ftUS = 2237,
	Nad83_Florida_North_ftUS = 2238,
	Nad83_Georgia_East_ftUS = 2239,
	Nad83_Georgia_West_ftUS = 2240,
	Nad83_Idaho_East_ftUS = 2241,
	Nad83_Idaho_Central_ftUS = 2242,
	Nad83_Idaho_West_ftUS = 2243,
	Nad83_Kentucky_North_ftUS = 2246,
	Nad83_Kentucky_South_ftUS = 2247,
	Nad83_Maryland_ftUS = 2248,
	Nad83_Massachusetts_Mainland_ftUS = 2249,
	Nad83_Massachusetts_Island_ftUS = 2250,
	Nad83_Michigan_North_ft = 2251,
	Nad83_Michigan_Central_ft = 2252,
	Nad83_Michigan_South_ft = 2253,
	Nad83_Mississippi_East_ftUS = 2254,
	Nad83_Mississippi_West_ftUS = 2255,
	Nad83_Montana_ft = 2256,
	Nad83_New_Mexico_East_ftUS = 2257,
	Nad83_New_Mexico_Central_ftUS = 2258,
	Nad83_New_Mexico_West_ftUS = 2259,
	Nad83_New_York_East_ftUS = 2260,
	Nad83_New_York_Central_ftUS = 2261,
	Nad83_New_York_West_ftUS = 2262,
	Nad83_New_York_Long_Island_ftUS = 2263,
	Nad83_North_Carolina_ftUS = 2264,
	Nad83_North_Dakota_North_ft = 2265,
	Nad83_North_Dakota_South_ft = 2266,
	Nad83_Oklahoma_North_ftUS = 2267,
	Nad83_Oklahoma_South_ftUS = 2268,
	Nad83_Oregon_North_ft = 2269,
	Nad83_Oregon_South_ft = 2270,
	Nad83_Pennsylvania_North_ftUS = 2271,
	Nad83_Pennsylvania_South_ftUS = 2272,
	Nad83_South_Carolina_ft = 2273,
	Nad83_Tennessee_ftUS = 2274,
	Nad83_Texas_North_ftUS = 2275,
	Nad83_Texas_North_Central_ftUS = 2276,
	Nad83_Texas_Central_ftUS = 2277,
	Nad83_Texas_South_Central_ftUS = 2278,
	Nad83_Texas_South_ftUS = 2279,
	Nad83_Utah_North_ft = 2280,
	Nad83_Utah_Central_ft = 2281,
	Nad83_Utah_South_ft = 2282,
	Nad83_Virginia_North_ftUS = 2283,
	Nad83_Virginia_South_ftUS = 2284,
	Nad83_Washington_North_ftUS = 2285,
	Nad83_Washington_South_ftUS = 2286,
	Nad83_Wisconsin_North_ftUS = 2287,
	Nad83_Wisconsin_Central_ftUS = 2288,
	Nad83_Wisconsin_South_ftUS = 2289,
	Nad83_Indiana_East_ftUS = 2965,
	Nad83_Indiana_West_ftUS = 2966,
	Nad83_Oregon_Lambert = 2991,
	Nad83_Oregon_Lambert_ft = 2992,
	Nad83_BC_Albers = 3005,
	Nad83_Wisconsin_Transverse_Mercator = 3070,
	Nad83_Maine_CS2000_East = 3072,
	Nad83_Maine_CS2000_West = 3074,
	Nad83_Michigan_Oblique_Mercator = 3078,
	Nad83_Texas_State_Mapping_System = 3081,
	Nad83_Texas_Centric_Lambert_Conformal = 3082,
	Nad83_Texas_Centric_Albers_Equal_Area = 3083,
	Nad83_Florida_GDL_Albers = 3086,
	Nad83_Kentucky_Single_Zone = 3088,
	Nad83_Kentucky_Single_Zone_ftUS = 3089,
	Nad83_Ontario_MNR_Lambert = 3161,
	Nad83_Great_Lakes_Albers = 3174,
	Nad83_Great_Lakes_and_St_Lawrence_Albers = 3175,
	Nad83_California_Albers = 3310,
	Nad83_Alaska_Albers = 3338,
	Nad83_Statistics_Canada_Lambert = 3347,
	Nad83_Alberta_10_TM_Forest = 3400,
	Nad83_Alberta_10_TM_Resource = 3401,
	Nad83_Iowa_North_ft_US = 3417,
	Nad83_Iowa_South_ft_US = 3418,
	Nad83_Kansas_North_ft_US = 3419,
	Nad83_Kansas_South_ft_US = 3420,
	Nad83_Nevada_East_ft_US = 3421,
	Nad83_Nevada_Central_ft_US = 3422,
	Nad83_Nevada_West_ft_US = 3423,
	Nad83_New_Jersey_ft_US = 3424,
	Nad83_Arkansas_North_ftUS = 3433,
	Nad83_Arkansas_South_ftUS = 3434,
	Nad83_Illinois_East_ftUS = 3435,
	Nad83_Illinois_West_ftUS = 3436,
	Nad83_New_Hampshire_ftUS = 3437,
	Nad83_Rhode_Island_ftUS = 3438,
	Nad83_Louisiana_North_ftUS = 3451,
	Nad83_Louisiana_South_ftUS = 3452,
	Nad83_Louisiana_Offshore_ftUS = 3453,
	Nad83_South_Dakota_South_ftUS = 3455,
	Nad83_Maine_CS2000_Central = 3463,
	Nad83_Utah_North_ftUS = 3560,
	Nad83_Utah_Central_ftUS = 3566,
	Nad83_Utah_South_ftUS = 3567,
	Nad83_Yukon_Albers = 3578,
	Nad83_NWT_Lambert = 3580,
	Nad83_Ohio_North_ftUS = 3734,
	Nad83_Ohio_South_ftUS = 3735,
	Nad83_Wyoming_East_ftUS = 3736,
	Nad83_Wyoming_East_Central_ftUS = 3737,
	Nad83_Wyoming_West_Central_ftUS = 3738,
	Nad83_Wyoming_West_ftUS = 3739,
	Nad83_Hawaii_zone_3_ftUS = 3759,
	Nad83_Alberta_3TM_ref_merid_111_W = 3775,
	Nad83_Alberta_3TM_ref_merid_114_W = 3776,
	Nad83_Alberta_3TM_ref_merid_117_W = 3777,
	Nad83_MTQ_Lambert = 3798,
	Nad83_Alberta_3TM_ref_merid_120_W = 3801,
	Nad83_Mississippi_TM = 3814,
	Nad83_Virginia_Lambert = 3968,
	Nad83_Canada_Atlas_Lambert = 3978,
	Nad83_BLM_59N_ftUS = 4217,
	Nad83_BLM_60N_ftUS = 4420,
	Nad83_BLM_1N_ftUS = 4421,
	Nad83_BLM_2N_ftUS = 4422,
	Nad83_BLM_3N_ftUS = 4423,
	Nad83_BLM_4N_ftUS = 4424,
	Nad83_BLM_5N_ftUS = 4425,
	Nad83_BLM_6N_ftUS = 4426,
	Nad83_BLM_7N_ftUS = 4427,
	Nad83_BLM_8N_ftUS = 4428,
	Nad83_BLM_9N_ftUS = 4429,
	Nad83_BLM_10N_ftUS = 4430,
	Nad83_BLM_11N_ftUS = 4431,
	Nad83_BLM_12N_ftUS = 4432,
	Nad83_BLM_13N_ftUS = 4433,
	Nad83_BLM_18N_ftUS = 4438,
	Nad83_BLM_19N_ftUS = 4439,
	Nad83_South_Dakota_North_ftUS = 4457,
	Nad83_Conus_Albers = 5070,
	Nad83_Teranet_Ontario_Lambert = 5320,
	Nad83_Maine_East_ftUS = 26847,
	Nad83_Maine_West_ftUS = 26848,
	Nad83_Minnesota_North_ftUS = 26849,
	Nad83_Minnesota_Central_ftUS = 26850,
	Nad83_Minnesota_South_ftUS = 26851,
	Nad83_Nebraska_ftUS = 26852,
	Nad83_West_Virginia_North_ftUS = 26853,
	Nad83_West_Virginia_South_ftUS = 26854,
	Nad83_UTM_zone_59N = 3372,
	Nad83_UTM_zone_60N = 3373,
	Nad83_UTM_zone_1N = 26901,
	Nad83_UTM_zone_2N = 26902,
	Nad83_UTM_zone_3N = 26903,
	Nad83_UTM_zone_4N = 26904,
	Nad83_UTM_zone_5N = 26905,
	Nad83_UTM_zone_6N = 26906,
	Nad83_UTM_zone_7N = 26907,
	Nad83_UTM_zone_8N = 26908,
	Nad83_UTM_zone_9N = 26909,
	Nad83_UTM_zone_10N = 26910,
	Nad83_UTM_zone_11N = 26911,
	Nad83_UTM_zone_12N = 26912,
	Nad83_UTM_zone_13N = 26913,
	Nad83_UTM_zone_14N = 26914,
	Nad83_UTM_zone_15N = 26915,
	Nad83_UTM_zone_16N = 26916,
	Nad83_UTM_zone_17N = 26917,
	Nad83_UTM_zone_18N = 26918,
	Nad83_UTM_zone_19N = 26919,
	Nad83_UTM_zone_20N = 26920,
	Nad83_UTM_zone_21N = 26921,
	Nad83_UTM_zone_22N = 26922,
	Nad83_UTM_zone_23N = 26923,
	Nad83_BLM_14N_ftUS = 32164,
	Nad83_BLM_15N_ftUS = 32165,
	Nad83_BLM_16N_ftUS = 32166,
	Nad83_BLM_17N_ftUS = 32167,
	Nad83_Alabama_East = 26929,
	Nad83_Alabama_West = 26930,
	Nad83_Alaska_zone_1 = 26931,
	Nad83_Alaska_zone_2 = 26932,
	Nad83_Alaska_zone_3 = 26933,
	Nad83_Alaska_zone_4 = 26934,
	Nad83_Alaska_zone_5 = 26935,
	Nad83_Alaska_zone_6 = 26936,
	Nad83_Alaska_zone_7 = 26937,
	Nad83_Alaska_zone_8 = 26938,
	Nad83_Alaska_zone_9 = 26939,
	Nad83_Alaska_zone_10 = 26940,
	Nad83_California_zone_1 = 26941,
	Nad83_California_zone_2 = 26942,
	Nad83_California_zone_3 = 26943,
	Nad83_California_zone_4 = 26944,
	Nad83_California_zone_5 = 26945,
	Nad83_California_zone_6 = 26946,
	Nad83_Arizona_East = 26948,
	Nad83_Arizona_Central = 26949,
	Nad83_Arizona_West = 26950,
	Nad83_Arkansas_North = 26951,
	Nad83_Arkansas_South = 26952,
	Nad83_Colorado_North = 26953,
	Nad83_Colorado_Central = 26954,
	Nad83_Colorado_South = 26955,
	Nad83_Connecticut = 26956,
	Nad83_Delaware = 26957,
	Nad83_Florida_East = 26958,
	Nad83_Florida_West = 26959,
	Nad83_Florida_North = 26960,
	Nad83_Hawaii_zone_1 = 26961,
	Nad83_Hawaii_zone_2 = 26962,
	Nad83_Hawaii_zone_3 = 26963,
	Nad83_Hawaii_zone_4 = 26964,
	Nad83_Hawaii_zone_5 = 26965,
	Nad83_Georgia_East = 26966,
	Nad83_Georgia_West = 26967,
	Nad83_Idaho_East = 26968,
	Nad83_Idaho_Central = 26969,
	Nad83_Idaho_West = 26970,
	Nad83_Illinois_East = 26971,
	Nad83_Illinois_West = 26972,
	Nad83_Indiana_East = 26973,
	Nad83_Indiana_West = 26974,
	Nad83_Iowa_North = 26975,
	Nad83_Iowa_South = 26976,
	Nad83_Kansas_North = 26977,
	Nad83_Kansas_South = 26978,
	Nad83_Kentucky_South = 26980,
	Nad83_Louisiana_North = 26981,
	Nad83_Louisiana_South = 26982,
	Nad83_Maine_East = 26983,
	Nad83_Maine_West = 26984,
	Nad83_Maryland = 26985,
	Nad83_Massachusetts_Mainland = 26986,
	Nad83_Massachusetts_Island = 26987,
	Nad83_Michigan_North = 26988,
	Nad83_Michigan_Central = 26989,
	Nad83_Michigan_South = 26990,
	Nad83_Minnesota_North = 26991,
	Nad83_Minnesota_Central = 26992,
	Nad83_Minnesota_South = 26993,
	Nad83_Mississippi_East = 26994,
	Nad83_Mississippi_West = 26995,
	Nad83_Missouri_East = 26996,
	Nad83_Missouri_Central = 26997,
	Nad83_Missouri_West = 26998,
	Nad83_Montana = 32100,
	Nad83_Nebraska = 32104,
	Nad83_Nevada_East = 32107,
	Nad83_Nevada_Central = 32108,
	Nad83_Nevada_West = 32109,
	Nad83_New_Hampshire = 32110,
	Nad83_New_Jersey = 32111,
	Nad83_New_Mexico_East = 32112,
	Nad83_New_Mexico_Central = 32113,
	Nad83_New_Mexico_West = 32114,
	Nad83_New_York_East = 32115,
	Nad83_New_York_Central = 32116,
	Nad83_New_York_West = 32117,
	Nad83_New_York_Long_Island = 32118,
	Nad83_North_Carolina = 32119,
	Nad83_North_Dakota_North = 32120,
	Nad83_North_Dakota_South = 32121,
	Nad83_Ohio_North = 32122,
	Nad83_Ohio_South = 32123,
	Nad83_Oklahoma_North = 32124,
	Nad83_Oklahoma_South = 32125,
	Nad83_Oregon_North = 32126,
	Nad83_Oregon_South = 32127,
	Nad83_Pennsylvania_North = 32128,
	Nad83_Pennsylvania_South = 32129,
	Nad83_Rhode_Island = 32130,
	Nad83_South_Carolina = 32133,
	Nad83_South_Dakota_North = 32134,
	Nad83_South_Dakota_South = 32135,
	Nad83_Tennessee = 32136,
	Nad83_Texas_North = 32137,
	Nad83_Texas_North_Central = 32138,
	Nad83_Texas_Central = 32139,
	Nad83_Texas_South_Central = 32140,
	Nad83_Texas_South = 32141,
	Nad83_Utah_North = 32142,
	Nad83_Utah_Central = 32143,
	Nad83_Utah_South = 32144,
	Nad83_Vermont = 32145,
	Nad83_Virginia_North = 32146,
	Nad83_Virginia_South = 32147,
	Nad83_Washington_North = 32148,
	Nad83_Washington_South = 32149,
	Nad83_West_Virginia_North = 32150,
	Nad83_West_Virginia_South = 32151,
	Nad83_Wisconsin_North = 32152,
	Nad83_Wisconsin_Central = 32153,
	Nad83_Wisconsin_South = 32154,
	Nad83_Wyoming_East = 32155,
	Nad83_Wyoming_East_Central = 32156,
	Nad83_Wyoming_West_Central = 32157,
	Nad83_Wyoming_West = 32158,
	Nad83_Puerto_Rico_and_Virgin_Is = 32161,
	Nad83_SCoPQ_zone_2 = 32180,
	Nad83_MTM_zone_1 = 32181,
	Nad83_MTM_zone_2 = 32182,
	Nad83_MTM_zone_3 = 32183,
	Nad83_MTM_zone_4 = 32184,
	Nad83_MTM_zone_5 = 32185,
	Nad83_MTM_zone_6 = 32186,
	Nad83_MTM_zone_7 = 32187,
	Nad83_MTM_zone_8 = 32188,
	Nad83_MTM_zone_9 = 32189,
	Nad83_MTM_zone_10 = 32190,
	Nad83_MTM_zone_11 = 32191,
	Nad83_MTM_zone_12 = 32192,
	Nad83_MTM_zone_13 = 32193,
	Nad83_MTM_zone_14 = 32194,
	Nad83_MTM_zone_15 = 32195,
	Nad83_MTM_zone_16 = 32196,
	Nad83_MTM_zone_17 = 32197,
	Nad83_Quebec_Lambert = 32198,
	Nad83_Louisiana_Offshore = 32199,
	NAD_1983_StatePlane_Guam_FIPS_5400 = 65161,
	NAD_1983_StatePlane_Alabama_East_FIPS_0101_Feet = 102629,
	NAD_1983_StatePlane_Alabama_West_FIPS_0102_Feet = 102630,
	NAD_1983_StatePlane_Alaska_1_FIPS_5001_Feet = 102631,
	NAD_1983_StatePlane_Alaska_2_FIPS_5002_Feet = 102632,
	NAD_1983_StatePlane_Alaska_3_FIPS_5003_Feet = 102633,
	NAD_1983_StatePlane_Alaska_4_FIPS_5004_Feet = 102634,
	NAD_1983_StatePlane_Alaska_5_FIPS_5005_Feet = 102635,
	NAD_1983_StatePlane_Alaska_6_FIPS_5006_Feet = 102636,
	NAD_1983_StatePlane_Alaska_7_FIPS_5007_Feet = 102637,
	NAD_1983_StatePlane_Alaska_8_FIPS_5008_Feet = 102638,
	NAD_1983_StatePlane_Alaska_9_FIPS_5009_Feet = 102639,
	NAD_1983_StatePlane_Alaska_10_FIPS_5010_Feet = 102640,
	NAD_1983_StatePlane_California_I_FIPS_0401_Feet = 102641,
	NAD_1983_StatePlane_California_II_FIPS_0402_Feet = 102642,
	NAD_1983_StatePlane_California_III_FIPS_0403_Feet = 102643,
	NAD_1983_StatePlane_California_IV_FIPS_0404_Feet = 102644,
	NAD_1983_StatePlane_California_V_FIPS_0405_Feet = 102645,
	NAD_1983_StatePlane_California_VI_FIPS_0406_Feet = 102646,
	NAD_1983_StatePlane_Arizona_East_FIPS_0201_Feet = 102648,
	NAD_1983_StatePlane_Arizona_Central_FIPS_0202_Feet = 102649,
	NAD_1983_StatePlane_Arizona_West_FIPS_0203_Feet = 102650,
	NAD_1983_StatePlane_Arkansas_North_FIPS_0301_Feet = 102651,
	NAD_1983_StatePlane_Arkansas_South_FIPS_0302_Feet = 102652,
	NAD_1983_StatePlane_Colorado_North_FIPS_0501_Feet = 102653,
	NAD_1983_StatePlane_Colorado_Central_FIPS_0502_Feet = 102654,
	NAD_1983_StatePlane_Colorado_South_FIPS_0503_Feet = 102655,
	NAD_1983_StatePlane_Connecticut_FIPS_0600_Feet = 102656,
	NAD_1983_StatePlane_Delaware_FIPS_0700_Feet = 102657,
	NAD_1983_StatePlane_Florida_East_FIPS_0901_Feet = 102658,
	NAD_1983_StatePlane_Florida_West_FIPS_0902_Feet = 102659,
	NAD_1983_StatePlane_Florida_North_FIPS_0903_Feet = 102660,
	NAD_1983_StatePlane_Hawaii_1_FIPS_5101_Feet = 102661,
	NAD_1983_StatePlane_Hawaii_2_FIPS_5102_Feet = 102662,
	NAD_1983_StatePlane_Hawaii_3_FIPS_5103_Feet = 102663,
	NAD_1983_StatePlane_Hawaii_4_FIPS_5104_Feet = 102664,
	NAD_1983_StatePlane_Hawaii_5_FIPS_5105_Feet = 102665,
	NAD_1983_StatePlane_Georgia_East_FIPS_1001_Feet = 102666,
	NAD_1983_StatePlane_Georgia_West_FIPS_1002_Feet = 102667,
	NAD_1983_StatePlane_Idaho_East_FIPS_1101_Feet = 102668,
	NAD_1983_StatePlane_Idaho_Central_FIPS_1102_Feet = 102669,
	NAD_1983_StatePlane_Idaho_West_FIPS_1103_Feet = 102670,
	NAD_1983_StatePlane_Illinois_East_FIPS_1201_Feet = 102671,
	NAD_1983_StatePlane_Illinois_West_FIPS_1202_Feet = 102672,
	NAD_1983_StatePlane_Indiana_East_FIPS_1301_Feet = 102673,
	NAD_1983_StatePlane_Indiana_West_FIPS_1302_Feet = 102674,
	NAD_1983_StatePlane_Iowa_North_FIPS_1401_Feet = 102675,
	NAD_1983_StatePlane_Iowa_South_FIPS_1402_Feet = 102676,
	NAD_1983_StatePlane_Kansas_North_FIPS_1501_Feet = 102677,
	NAD_1983_StatePlane_Kansas_South_FIPS_1502_Feet = 102678,
	NAD_1983_StatePlane_Kentucky_North_FIPS_1601_Feet = 102679,
	NAD_1983_StatePlane_Kentucky_South_FIPS_1602_Feet = 102680,
	NAD_1983_StatePlane_Louisiana_North_FIPS_1701_Feet = 102681,
	NAD_1983_StatePlane_Louisiana_South_FIPS_1702_Feet = 102682,
	NAD_1983_StatePlane_Maine_East_FIPS_1801_Feet = 102683,
	NAD_1983_StatePlane_Maine_West_FIPS_1802_Feet = 102684,
	NAD_1983_StatePlane_Maryland_FIPS_1900_Feet = 102685,
	NAD_1983_StatePlane_Massachusetts_Mainland_FIPS_2001_Feet = 102686,
	NAD_1983_StatePlane_Massachusetts_Island_FIPS_2002_Feet = 102687,
	NAD_1983_StatePlane_Michigan_North_FIPS_2111_Feet = 102688,
	NAD_1983_StatePlane_Michigan_Central_FIPS_2112_Feet = 102689,
	NAD_1983_StatePlane_Michigan_South_FIPS_2113_Feet = 102690,
	NAD_1983_StatePlane_Minnesota_North_FIPS_2201_Feet = 102691,
	NAD_1983_StatePlane_Minnesota_Central_FIPS_2202_Feet = 102692,
	NAD_1983_StatePlane_Minnesota_South_FIPS_2203_Feet = 102693,
	NAD_1983_StatePlane_Mississippi_East_FIPS_2301_Feet = 102694,
	NAD_1983_StatePlane_Mississippi_West_FIPS_2302_Feet = 102695,
	NAD_1983_StatePlane_Missouri_East_FIPS_2401_Feet = 102696,
	NAD_1983_StatePlane_Missouri_Central_FIPS_2402_Feet = 102697,
	NAD_1983_StatePlane_Missouri_West_FIPS_2403_Feet = 102698,
	NAD_1983_StatePlane_Montana_FIPS_2500_Feet = 102700,
	NAD_1983_StatePlane_Nebraska_FIPS_2600_Feet = 102704,
	NAD_1983_StatePlane_Nevada_East_FIPS_2701_Feet = 102707,
	NAD_1983_StatePlane_Nevada_Central_FIPS_2702_Feet = 102708,
	NAD_1983_StatePlane_Nevada_West_FIPS_2703_Feet = 102709,
	NAD_1983_StatePlane_New_Hampshire_FIPS_2800_Feet = 102710,
	NAD_1983_StatePlane_New_Jersey_FIPS_2900_Feet = 102711,
	NAD_1983_StatePlane_New_Mexico_East_FIPS_3001_Feet = 102712,
	NAD_1983_StatePlane_New_Mexico_Central_FIPS_3002_Feet = 102713,
	NAD_1983_StatePlane_New_Mexico_West_FIPS_3003_Feet = 102714,
	NAD_1983_StatePlane_New_York_East_FIPS_3101_Feet = 102715,
	NAD_1983_StatePlane_New_York_Central_FIPS_3102_Feet = 102716,
	NAD_1983_StatePlane_New_York_West_FIPS_3103_Feet = 102717,
	NAD_1983_StatePlane_New_York_Long_Island_FIPS_3104_Feet = 102718,
	NAD_1983_StatePlane_North_Carolina_FIPS_3200_Feet = 102719,
	NAD_1983_StatePlane_North_Dakota_North_FIPS_3301_Feet = 102720,
	NAD_1983_StatePlane_North_Dakota_South_FIPS_3302_Feet = 102721,
	NAD_1983_StatePlane_Ohio_North_FIPS_3401_Feet = 102722,
	NAD_1983_StatePlane_Ohio_South_FIPS_3402_Feet = 102723,
	NAD_1983_StatePlane_Oklahoma_North_FIPS_3501_Feet = 102724,
	NAD_1983_StatePlane_Oklahoma_South_FIPS_3502_Feet = 102725,
	NAD_1983_StatePlane_Oregon_North_FIPS_3601_Feet = 102726,
	NAD_1983_StatePlane_Oregon_South_FIPS_3602_Feet = 102727,
	NAD_1983_StatePlane_Pennsylvania_North_FIPS_3701_Feet = 102728,
	NAD_1983_StatePlane_Pennsylvania_South_FIPS_3702_Feet = 102729,
	NAD_1983_StatePlane_Rhode_Island_FIPS_3800_Feet = 102730,
	NAD_1983_StatePlane_South_Carolina_FIPS_3900_Feet = 102733,
	NAD_1983_StatePlane_South_Dakota_North_FIPS_4001_Feet = 102734,
	NAD_1983_StatePlane_South_Dakota_South_FIPS_4002_Feet = 102735,
	NAD_1983_StatePlane_Tennessee_FIPS_4100_Feet = 102736,
	NAD_1983_StatePlane_Texas_North_FIPS_4201_Feet = 102737,
	NAD_1983_StatePlane_Texas_North_Central_FIPS_4202_Feet = 102738,
	NAD_1983_StatePlane_Texas_Central_FIPS_4203_Feet = 102739,
	NAD_1983_StatePlane_Texas_South_Central_FIPS_4204_Feet = 102740,
	NAD_1983_StatePlane_Texas_South_FIPS_4205_Feet = 102741,
	NAD_1983_StatePlane_Utah_North_FIPS_4301_Feet = 102742,
	NAD_1983_StatePlane_Utah_Central_FIPS_4302_Feet = 102743,
	NAD_1983_StatePlane_Utah_South_FIPS_4303_Feet = 102744,
	NAD_1983_StatePlane_Vermont_FIPS_4400_Feet = 102745,
	NAD_1983_StatePlane_Virginia_North_FIPS_4501_Feet = 102746,
	NAD_1983_StatePlane_Virginia_South_FIPS_4502_Feet = 102747,
	NAD_1983_StatePlane_Washington_North_FIPS_4601_Feet = 102748,
	NAD_1983_StatePlane_Washington_South_FIPS_4602_Feet = 102749,
	NAD_1983_StatePlane_West_Virginia_North_FIPS_4701_Feet = 102750,
	NAD_1983_StatePlane_West_Virginia_South_FIPS_4702_Feet = 102751,
	NAD_1983_StatePlane_Wisconsin_North_FIPS_4801_Feet = 102752,
	NAD_1983_StatePlane_Wisconsin_Central_FIPS_4802_Feet = 102753,
	NAD_1983_StatePlane_Wisconsin_South_FIPS_4803_Feet = 102754,
	NAD_1983_StatePlane_Wyoming_East_FIPS_4901_Feet = 102755,
	NAD_1983_StatePlane_Wyoming_East_Central_FIPS_4902_Feet = 102756,
	NAD_1983_StatePlane_Wyoming_West_Central_FIPS_4903_Feet = 102757,
	NAD_1983_StatePlane_Wyoming_West_FIPS_4904_Feet = 102758,
	NAD_1983_StatePlane_Puerto_Rico_Virgin_Islands_FIPS_5200_Feet = 102761,
	NAD_1983_StatePlane_Guam_FIPS_5400_Feet = 102766
} 	tkNad83Projection;

enum tkWgs84Projection
{
	Wgs84_World_Mercator = 3395,
	Wgs84_PDC_Mercator = 3832,
	Wgs84_Pseudo_Mercator = 3857,
	Wgs84_Mercator_41 = 3994,
	Wgs84_World_Equidistant_Cylindrical = 4087,
	Wgs84_UPS_North_EN = 5041,
	Wgs84_UPS_South_EN = 5042,
	Wgs84_UTM_grid_system_northern_hemisphere = 32600,
	Wgs84_UTM_zone_1N = 32601,
	Wgs84_UTM_zone_2N = 32602,
	Wgs84_UTM_zone_3N = 32603,
	Wgs84_UTM_zone_4N = 32604,
	Wgs84_UTM_zone_5N = 32605,
	Wgs84_UTM_zone_6N = 32606,
	Wgs84_UTM_zone_7N = 32607,
	Wgs84_UTM_zone_8N = 32608,
	Wgs84_UTM_zone_9N = 32609,
	Wgs84_UTM_zone_10N = 32610,
	Wgs84_UTM_zone_11N = 32611,
	Wgs84_UTM_zone_12N = 32612,
	Wgs84_UTM_zone_13N = 32613,
	Wgs84_UTM_zone_14N = 32614,
	Wgs84_UTM_zone_15N = 32615,
	Wgs84_UTM_zone_16N = 32616,
	Wgs84_UTM_zone_17N = 32617,
	Wgs84_UTM_zone_18N = 32618,
	Wgs84_UTM_zone_19N = 32619,
	Wgs84_UTM_zone_20N = 32620,
	Wgs84_UTM_zone_21N = 32621,
	Wgs84_UTM_zone_22N = 32622,
	Wgs84_UTM_zone_23N = 32623,
	Wgs84_UTM_zone_24N = 32624,
	Wgs84_UTM_zone_25N = 32625,
	Wgs84_UTM_zone_26N = 32626,
	Wgs84_UTM_zone_27N = 32627,
	Wgs84_UTM_zone_28N = 32628,
	Wgs84_UTM_zone_29N = 32629,
	Wgs84_UTM_zone_30N = 32630,
	Wgs84_UTM_zone_31N = 32631,
	Wgs84_UTM_zone_32N = 32632,
	Wgs84_UTM_zone_33N = 32633,
	Wgs84_UTM_zone_34N = 32634,
	Wgs84_UTM_zone_35N = 32635,
	Wgs84_UTM_zone_36N = 32636,
	Wgs84_UTM_zone_37N = 32637,
	Wgs84_UTM_zone_38N = 32638,
	Wgs84_UTM_zone_39N = 32639,
	Wgs84_UTM_zone_40N = 32640,
	Wgs84_UTM_zone_41N = 32641,
	Wgs84_UTM_zone_42N = 32642,
	Wgs84_UTM_zone_43N = 32643,
	Wgs84_UTM_zone_44N = 32644,
	Wgs84_UTM_zone_45N = 32645,
	Wgs84_UTM_zone_46N = 32646,
	Wgs84_UTM_zone_47N = 32647,
	Wgs84_UTM_zone_48N = 32648,
	Wgs84_UTM_zone_49N = 32649,
	Wgs84_UTM_zone_50N = 32650,
	Wgs84_UTM_zone_51N = 32651,
	Wgs84_UTM_zone_52N = 32652,
	Wgs84_UTM_zone_53N = 32653,
	Wgs84_UTM_zone_54N = 32654,
	Wgs84_UTM_zone_55N = 32655,
	Wgs84_UTM_zone_56N = 32656,
	Wgs84_UTM_zone_57N = 32657,
	Wgs84_UTM_zone_58N = 32658,
	Wgs84_UTM_zone_59N = 32659,
	Wgs84_UTM_zone_60N = 32660,
	Wgs84_UPS_North_NE = 32661,
	Wgs84_BLM_14N_ftUS = 32664,
	Wgs84_BLM_15N_ftUS = 32665,
	Wgs84_BLM_16N_ftUS = 32666,
	Wgs84_BLM_17N_ftUS = 32667,
	Wgs84_UTM_grid_system_southern_hemisphere = 32700,
	Wgs84_UTM_zone_1S = 32701,
	Wgs84_UTM_zone_2S = 32702,
	Wgs84_UTM_zone_3S = 32703,
	Wgs84_UTM_zone_4S = 32704,
	Wgs84_UTM_zone_5S = 32705,
	Wgs84_UTM_zone_6S = 32706,
	Wgs84_UTM_zone_7S = 32707,
	Wgs84_UTM_zone_8S = 32708,
	Wgs84_UTM_zone_9S = 32709,
	Wgs84_UTM_zone_10S = 32710,
	Wgs84_UTM_zone_11S = 32711,
	Wgs84_UTM_zone_12S = 32712,
	Wgs84_UTM_zone_13S = 32713,
	Wgs84_UTM_zone_14S = 32714,
	Wgs84_UTM_zone_15S = 32715,
	Wgs84_UTM_zone_16S = 32716,
	Wgs84_UTM_zone_17S = 32717,
	Wgs84_UTM_zone_18S = 32718,
	Wgs84_UTM_zone_19S = 32719,
	Wgs84_UTM_zone_20S = 32720,
	Wgs84_UTM_zone_21S = 32721,
	Wgs84_UTM_zone_22S = 32722,
	Wgs84_UTM_zone_23S = 32723,
	Wgs84_UTM_zone_24S = 32724,
	Wgs84_UTM_zone_25S = 32725,
	Wgs84_UTM_zone_26S = 32726,
	Wgs84_UTM_zone_27S = 32727,
	Wgs84_UTM_zone_28S = 32728,
	Wgs84_UTM_zone_29S = 32729,
	Wgs84_UTM_zone_30S = 32730,
	Wgs84_UTM_zone_31S = 32731,
	Wgs84_UTM_zone_32S = 32732,
	Wgs84_UTM_zone_33S = 32733,
	Wgs84_UTM_zone_34S = 32734,
	Wgs84_UTM_zone_35S = 32735,
	Wgs84_UTM_zone_36S = 32736,
	Wgs84_UTM_zone_37S = 32737,
	Wgs84_UTM_zone_38S = 32738,
	Wgs84_UTM_zone_39S = 32739,
	Wgs84_UTM_zone_40S = 32740,
	Wgs84_UTM_zone_41S = 32741,
	Wgs84_UTM_zone_42S = 32742,
	Wgs84_UTM_zone_43S = 32743,
	Wgs84_UTM_zone_44S = 32744,
	Wgs84_UTM_zone_45S = 32745,
	Wgs84_UTM_zone_46S = 32746,
	Wgs84_UTM_zone_47S = 32747,
	Wgs84_UTM_zone_48S = 32748,
	Wgs84_UTM_zone_49S = 32749,
	Wgs84_UTM_zone_50S = 32750,
	Wgs84_UTM_zone_51S = 32751,
	Wgs84_UTM_zone_52S = 32752,
	Wgs84_UTM_zone_53S = 32753,
	Wgs84_UTM_zone_54S = 32754,
	Wgs84_UTM_zone_55S = 32755,
	Wgs84_UTM_zone_56S = 32756,
	Wgs84_UTM_zone_57S = 32757,
	Wgs84_UTM_zone_58S = 32758,
	Wgs84_UTM_zone_59S = 32759,
	Wgs84_UTM_zone_60S = 32760,
	Wgs84_UPS_South_NE = 32761,
	WGS_1984_Web_Mercator = 102113
} 	tkWgs84Projection;

enum tkProjectionSet
{
	psAll_Projections = 1,
	psNAD83_Subset = 2,
	psWGS84_Subset = 4
};



extern RPC_IF_HANDLE __MIDL_itf_MapWinGIS_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MapWinGIS_0000_0000_v0_0_s_ifspec;


EXTERN_C class
IShapeEditor : public IDispatch
{
public:
	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ShapeType(
		/* [retval][out] */ ShpfileType *retVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ShapeType(
		/* [in] */ ShpfileType newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_numPoints(
		/* [retval][out] */ long *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE get_PointXY(
		/* [in] */ long pointIndex,
		/* [out] */ double *x,
		/* [out] */ double *y,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ValidatedShape(
		/* [retval][out] */ IShape **retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE UndoPoint(
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorMsg(
		/* [in] */ long ErrorCode,
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastErrorCode(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GlobalCallback(
		/* [retval][out] */ ICallback **retVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_GlobalCallback(
		/* [in] */ ICallback *newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Key(
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Key(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear(void) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE CopyOptionsFrom(
		/* [in] */ IShapeDrawingOptions *options) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SegmentLength(
		/* [in] */ int segmentIndex,
		/* [retval][out] */ double *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SegmentAngle(
		/* [in] */ int segmentIndex,
		/* [retval][out] */ double *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AreaDisplayMode(
		/* [retval][out] */ tkAreaDisplayMode *retVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_AreaDisplayMode(
		/* [in] */ tkAreaDisplayMode newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SelectedVertex(
		/* [retval][out] */ int *retVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_SelectedVertex(
		/* [in] */ int newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RawData(
		/* [retval][out] */ IShape **pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_IsDigitizing(
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Area(
		/* [retval][out] */ double *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_BearingType(
		/* [retval][out] */ tkBearingType *retVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_BearingType(
		/* [in] */ tkBearingType newVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE put_PointXY(
		/* [in] */ long pointIndex,
		/* [in] */ double X,
		/* [in] */ double Y,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LayerHandle(
		/* [retval][out] */ LONG *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ShapeIndex(
		/* [retval][out] */ LONG *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_FillColor(
		/* [retval][out] */ OLE_COLOR *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_FillColor(
		/* [in] */ OLE_COLOR newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_FillTransparency(
		/* [retval][out] */ BYTE *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_FillTransparency(
		/* [in] */ BYTE newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LineColor(
		/* [retval][out] */ OLE_COLOR *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LineColor(
		/* [in] */ OLE_COLOR newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LineWidth(
		/* [retval][out] */ FLOAT *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LineWidth(
		/* [in] */ FLOAT newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_IsEmpty(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SnapTolerance(
		/* [retval][out] */ DOUBLE *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_SnapTolerance(
		/* [in] */ DOUBLE newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HighlightVertices(
		/* [retval][out] */ tkLayerSelection *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_HighlightVertices(
		/* [in] */ tkLayerSelection newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SnapBehavior(
		/* [retval][out] */ tkLayerSelection *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_SnapBehavior(
		/* [in] */ tkLayerSelection newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_EditorState(
		/* [retval][out] */ tkEditorState *pVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE StartEdit(
		/* [in] */ LONG LayerHandle,
		/* [in] */ LONG ShapeIndex,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_IndicesVisible(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_IndicesVisible(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LengthDisplayMode(
		/* [retval][out] */ tkLengthDisplayMode *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LengthDisplayMode(
		/* [in] */ tkLengthDisplayMode newVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE StartUnboundShape(
		/* [in] */ ShpfileType shpType,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_VerticesVisible(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_VerticesVisible(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ValidationMode(
		/* [retval][out] */ tkEditorValidation *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ValidationMode(
		/* [in] */ tkEditorValidation newVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE StartOverlay(
		/* [in] */ tkEditorOverlay overlayType,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_EditorBehavior(
		/* [retval][out] */ tkEditorBehavior *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_EditorBehavior(
		/* [in] */ tkEditorBehavior newVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE SaveChanges(
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HasChanges(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_IsUsingEllipsoid(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Length(
		/* [retval][out] */ DOUBLE *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ShowArea(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ShowArea(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AreaPrecision(
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_AreaPrecision(
		/* [in] */ LONG newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LengthPrecision(
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LengthPrecision(
		/* [in] */ LONG newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AngleFormat(
		/* [retval][out] */ tkAngleFormat *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_AngleFormat(
		/* [in] */ tkAngleFormat newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AnglePrecision(
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_AnglePrecision(
		/* [in] */ LONG newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ShowBearing(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ShowBearing(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ShowLength(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ShowLength(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE Serialize(
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE Deserialize(
		/* [in] */ BSTR state,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE AddPoint(
		/* [in] */ IPoint *newPoint,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SnapMode(
		/* [retval][out] */ tkSnapMode *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_SnapMode(
		/* [in] */ tkSnapMode newVal) = 0;

};


EXTERN_C class IGrid : public IDispatch
{
public:
	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Header(
		/* [retval][out] */ IGridHeader **pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Value(
		/* [in] */ long Column,
		/* [in] */ long Row,
		/* [retval][out] */ VARIANT *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Value(
		/* [in] */ long Column,
		/* [in] */ long Row,
		/* [in] */ VARIANT newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_InRam(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Maximum(
		/* [retval][out] */ VARIANT *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Minimum(
		/* [retval][out] */ VARIANT *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DataType(
		/* [retval][out] */ GridDataType *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Filename(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastErrorCode(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorMsg(
		/* [in] */ long ErrorCode,
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GlobalCallback(
		/* [retval][out] */ ICallback **pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GlobalCallback(
		/* [in] */ ICallback *newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Key(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Key(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Open(
		/* [in] */ BSTR Filename,
		/* [defaultvalue][in] */ GridDataType DataType,
		/* [defaultvalue][in] */ VARIANT_BOOL InRam,
		/* [defaultvalue][in] */ GridFileType FileType,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateNew(
		/* [in] */ BSTR Filename,
		/* [in] */ IGridHeader *Header,
		/* [in] */ GridDataType DataType,
		/* [in] */ VARIANT InitialValue,
		/* [defaultvalue][in] */ VARIANT_BOOL InRam,
		/* [defaultvalue][in] */ GridFileType FileType,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Close(
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Save(
		/* [defaultvalue][in] */ BSTR Filename,
		/* [defaultvalue][in] */ GridFileType GridFileType,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear(
		/* [in] */ VARIANT ClearValue,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ProjToCell(
		/* [in] */ double x,
		/* [in] */ double y,
		/* [out] */ long *Column,
		/* [out] */ long *Row) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CellToProj(
		/* [in] */ long Column,
		/* [in] */ long Row,
		/* [out] */ double *x,
		/* [out] */ double *y) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CdlgFilter(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AssignNewProjection(
		/* [in] */ BSTR projection,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RasterColorTableColoringScheme(
		/* [retval][out] */ IGridColorScheme **pVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetRow(
		/* [in] */ long Row,
		/* [out][in] */ float *Vals,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PutRow(
		/* [in] */ long Row,
		/* [out][in] */ float *Vals,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFloatWindow(
		/* [in] */ long StartRow,
		/* [in] */ long EndRow,
		/* [in] */ long StartCol,
		/* [in] */ long EndCol,
		/* [out][in] */ float *Vals,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PutFloatWindow(
		/* [in] */ long StartRow,
		/* [in] */ long EndRow,
		/* [in] */ long StartCol,
		/* [in] */ long EndCol,
		/* [out][in] */ float *Vals,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetInvalidValuesToNodata(
		/* [in] */ double MinThresholdValue,
		/* [in] */ double MaxThresholdValue,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Resource(
		/* [in] */ BSTR newSrcPath,
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NumBands(
		/* [retval][out] */ int *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ActiveBandIndex(
		/* [retval][out] */ int *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OpenBand(
		/* [in] */ int bandIndex,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SourceType(
		/* [retval][out] */ tkGridSourceType *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Extents(
		/* [retval][out] */ IExtents **retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OpenAsImage(
		/* [in] */ IGridColorScheme *scheme,
		/* [defaultvalue][in] */ tkGridProxyMode proxyMode,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ IImage **retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RetrieveColorScheme(
		/* [in] */ tkGridSchemeRetrieval method,
		/* [retval][out] */ IGridColorScheme **retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GenerateColorScheme(
		/* [in] */ tkGridSchemeGeneration method,
		/* [in] */ PredefinedColorScheme colors,
		/* [retval][out] */ IGridColorScheme **retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveImageProxy(
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateImageProxy(
		/* [in] */ IGridColorScheme *colorScheme,
		/* [retval][out] */ IImage **retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PreferedDisplayMode(
		/* [retval][out] */ tkGridProxyMode *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PreferedDisplayMode(
		/* [in] */ tkGridProxyMode newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HasValidImageProxy(
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RetrieveOrGenerateColorScheme(
		/* [defaultvalue][in] */ tkGridSchemeRetrieval retrievalMethod,
		/* [defaultvalue][in] */ tkGridSchemeGeneration generateMethod,
		/* [defaultvalue][in] */ PredefinedColorScheme colors,
		/* [retval][out] */ IGridColorScheme **retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFloatWindow2(
		/* [in] */ long StartRow,
		/* [in] */ long EndRow,
		/* [in] */ long StartCol,
		/* [in] */ long EndCol,
		/* [out][in] */ double *Vals,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PutFloatWindow2(
		/* [in] */ long StartRow,
		/* [in] */ long EndRow,
		/* [in] */ long StartCol,
		/* [in] */ long EndCol,
		/* [out][in] */ double *Vals,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PutRow2(
		/* [in] */ long Row,
		/* [out][in] */ double *Vals,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetRow2(
		/* [in] */ long Row,
		/* [out][in] */ double *Vals,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Band(
		/* [in] */ long bandIndex,
		/* [retval][out] */ IGdalRasterBand **retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ActiveBand(
		/* [retval][out] */ IGdalRasterBand **pVal) = 0;

};


EXTERN_C class IGridHeader : public IDispatch
{
public:
	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NumberCols(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_NumberCols(
		/* [in] */ long newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NumberRows(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_NumberRows(
		/* [in] */ long newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NodataValue(
		/* [retval][out] */ VARIANT *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_NodataValue(
		/* [in] */ VARIANT newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_dX(
		/* [retval][out] */ double *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_dX(
		/* [in] */ double newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_dY(
		/* [retval][out] */ double *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_dY(
		/* [in] */ double newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_XllCenter(
		/* [retval][out] */ double *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_XllCenter(
		/* [in] */ double newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_YllCenter(
		/* [retval][out] */ double *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_YllCenter(
		/* [in] */ double newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Projection(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Projection(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Notes(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Notes(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastErrorCode(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorMsg(
		/* [in] */ long ErrorCode,
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GlobalCallback(
		/* [retval][out] */ ICallback **pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GlobalCallback(
		/* [in] */ ICallback *newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Key(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Key(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CopyFrom(
		/* [in] */ IGridHeader *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ColorTable(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ColorTable(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GeoProjection(
		/* [retval][out] */ IGeoProjection **pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GeoProjection(
		/* [in] */ IGeoProjection *newVal) = 0;

};


EXTERN_C class
IESRIGridManager : public IDispatch
{
public:
	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastErrorCode(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorMsg(
		/* [in] */ long ErrorCode,
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GlobalCallback(
		/* [retval][out] */ ICallback **pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GlobalCallback(
		/* [in] */ ICallback *newVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CanUseESRIGrids(
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteESRIGrids(
		/* [in] */ BSTR Filename,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsESRIGrid(
		/* [in] */ BSTR Filename,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

};



EXTERN_C class IImage : public IDispatch
{
public:
	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Open(
		/* [in] */ BSTR ImageFileName,
		/* [defaultvalue][in] */ ImageType FileType,
		/* [defaultvalue][in] */ VARIANT_BOOL InRam,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Save(
		/* [in] */ BSTR ImageFileName,
		/* [defaultvalue][in] */ VARIANT_BOOL WriteWorldFile,
		/* [defaultvalue][in] */ ImageType FileType,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateNew(
		/* [in] */ long NewWidth,
		/* [in] */ long NewHeight,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Close(
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear(
		/* [defaultvalue][in] */ OLE_COLOR CanvasColor,
		/* [defaultvalue][in] */ ICallback *CBack,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetRow(
		/* [in] */ long Row,
		/* [out][in] */ long *Vals,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Width(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Height(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_YllCenter(
		/* [retval][out] */ double *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_YllCenter(
		/* [in] */ double newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_XllCenter(
		/* [retval][out] */ double *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_XllCenter(
		/* [in] */ double newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_dY(
		/* [retval][out] */ double *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_dY(
		/* [in] */ double newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_dX(
		/* [retval][out] */ double *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_dX(
		/* [in] */ double newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Value(
		/* [in] */ long row,
		/* [in] */ long col,
		/* [retval][out] */ int *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Value(
		/* [in] */ long row,
		/* [in] */ long col,
		/* [in] */ int newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsInRam(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TransparencyColor(
		/* [retval][out] */ OLE_COLOR *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TransparencyColor(
		/* [in] */ OLE_COLOR newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UseTransparencyColor(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UseTransparencyColor(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastErrorCode(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorMsg(
		/* [in] */ long ErrorCode,
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CdlgFilter(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GlobalCallback(
		/* [retval][out] */ ICallback **pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GlobalCallback(
		/* [in] */ ICallback *newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Key(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Key(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [hidden][helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FileHandle(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ImageType(
		/* [retval][out] */ ImageType *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Picture(
		/* [retval][out] */ IPictureDisp **pVal) = 0;

	virtual /* [helpstring][id][propputref] */ HRESULT STDMETHODCALLTYPE putref_Picture(
		/* [in] */ IPictureDisp *newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Filename(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetImageBitsDC(
		/* [in] */ long hDC,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetImageBitsDC(
		/* [in] */ long hDC,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [hidden][helpstring][id] */ HRESULT STDMETHODCALLTYPE SetVisibleExtents(
		/* [in] */ double newMinX,
		/* [in] */ double newMinY,
		/* [in] */ double newMaxX,
		/* [in] */ double newMaxY,
		/* [in] */ long newPixelsInView,
		/* [in] */ float transPercent) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetProjection(
		/* [in] */ BSTR Proj4,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProjection(
		/* [retval][out] */ BSTR *Proj4) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_OriginalWidth(
		/* [retval][out] */ LONG *OriginalWidth) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_OriginalHeight(
		/* [retval][out] */ LONG *OriginalHeight) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Resource(
		/* [in] */ BSTR newImgPath,
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE _pushSchemetkRaster(
		/* [in] */ IGridColorScheme *cScheme,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AllowHillshade(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AllowHillshade(
		/* [in] */ VARIANT_BOOL newValue) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SetToGrey(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SetToGrey(
		/* [in] */ VARIANT_BOOL newValue) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UseHistogram(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UseHistogram(
		/* [in] */ VARIANT_BOOL newValue) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HasColorTable(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PaletteInterpretation(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BufferSize(
		/* [retval][out] */ int *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BufferSize(
		/* [in] */ int newValue) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NoBands(
		/* [retval][out] */ int *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ImageColorScheme(
		/* [retval][out] */ PredefinedColorScheme *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ImageColorScheme(
		/* [in] */ PredefinedColorScheme newValue) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DrawingMethod(
		/* [retval][out] */ int *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DrawingMethod(
		/* [in] */ int newVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE BuildOverviews(
		/* [in] */ tkGDALResamplingMethod ResamplingMethod,
		/* [in] */ int NumOverviews,
		/* [in] */ SAFEARRAY * OverviewList,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ClearGDALCache(
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ClearGDALCache(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TransparencyPercent(
		/* [retval][out] */ double *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TransparencyPercent(
		/* [in] */ double newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TransparencyColor2(
		/* [retval][out] */ OLE_COLOR *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TransparencyColor2(
		/* [in] */ OLE_COLOR newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DownsamplingMode(
		/* [retval][out] */ tkInterpolationMode *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DownsamplingMode(
		/* [in] */ tkInterpolationMode newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UpsamplingMode(
		/* [retval][out] */ tkInterpolationMode *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UpsamplingMode(
		/* [in] */ tkInterpolationMode newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Labels(
		/* [retval][out] */ ILabels **pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Labels(
		/* [in] */ ILabels *newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Extents(
		/* [retval][out] */ IExtents **pVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ProjectionToImage(
		/* [in] */ double ProjX,
		/* [in] */ double ProjY,
		/* [out] */ long *Column,
		/* [out] */ long *Row) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ImageToProjection(
		/* [in] */ long Column,
		/* [in] */ long Row,
		/* [out] */ double *ProjX,
		/* [out] */ double *ProjY) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ProjectionToBuffer(
		/* [in] */ double ProjX,
		/* [in] */ double ProjY,
		/* [out] */ long *BufferX,
		/* [out] */ long *BufferY) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE BufferToProjection(
		/* [in] */ long BufferX,
		/* [in] */ long BufferY,
		/* [out] */ double *ProjX,
		/* [out] */ double *ProjY) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CanUseGrouping(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CanUseGrouping(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_OriginalXllCenter(
		/* [retval][out] */ double *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_OriginalXllCenter(
		/* [in] */ double newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_OriginalYllCenter(
		/* [retval][out] */ double *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_OriginalYllCenter(
		/* [in] */ double newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_OriginalDX(
		/* [retval][out] */ double *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_OriginalDX(
		/* [in] */ double newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_OriginalDY(
		/* [retval][out] */ double *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_OriginalDY(
		/* [in] */ double newVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetUniqueColors(
		/* [in] */ double MaxBufferSizeMB,
		/* [out] */ VARIANT *Colors,
		/* [out] */ VARIANT *Frequencies,
		/* [retval][out] */ LONG *Count) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetNoDataValue(
		double Value,
		VARIANT_BOOL *Result) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NumOverviews(
		/* [retval][out] */ int *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LoadBuffer(
		/* [defaultvalue][in] */ double maxBufferSize,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SourceType(
		/* [retval][out] */ tkImageSourceType *pVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Serialize(
		/* [in] */ VARIANT_BOOL SerializePixels,
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Deserialize(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Warped(
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SourceGridName(
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsGridProxy(
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CustomColorScheme(
		/* [retval][out] */ IGridColorScheme **pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CustomColorScheme(
		/* [in] */ IGridColorScheme *newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AllowGridRendering(
		/* [retval][out] */ tkGridRendering *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AllowGridRendering(
		/* [in] */ tkGridRendering newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GridRendering(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetTransparentColor(
		/* [in] */ OLE_COLOR color) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsRgb(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OpenAsGrid(
		/* [retval][out] */ IGrid **retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SourceFilename(
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SourceGridBandIndex(
		/* [retval][out] */ int *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SourceGridBandIndex(
		/* [in] */ int newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GridProxyColorScheme(
		/* [retval][out] */ IGridColorScheme **retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GeoProjection(
		/* [retval][out] */ IGeoProjection **pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_GeoProjection(
		/* [in] */ IGeoProjection *newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_IsEmpty(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Band(
		/* [in] */ long bandIndex,
		/* [retval][out] */ IGdalRasterBand **retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PaletteInterpretation2(
		/* [retval][out] */ tkPaletteInterpretation *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ActiveBand(
		/* [retval][out] */ IGdalRasterBand **pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Brightness(
		/* [retval][out] */ FLOAT *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Brightness(
		/* [in] */ FLOAT newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Contrast(
		/* [retval][out] */ FLOAT *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Contrast(
		/* [in] */ FLOAT newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Saturation(
		/* [retval][out] */ FLOAT *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Saturation(
		/* [in] */ FLOAT newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Hue(
		/* [retval][out] */ FLOAT *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Hue(
		/* [in] */ FLOAT newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Gamma(
		/* [retval][out] */ FLOAT *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Gamma(
		/* [in] */ FLOAT newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ColorizeIntensity(
		/* [retval][out] */ FLOAT *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ColorizeIntensity(
		/* [in] */ FLOAT newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ColorizeColor(
		/* [retval][out] */ OLE_COLOR *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ColorizeColor(
		/* [in] */ OLE_COLOR newVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE ClearOverviews(
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GdalDriver(
		/* [retval][out] */ IGdalDriver **pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RedBandIndex(
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_RedBandIndex(
		/* [in] */ LONG newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GreenBandIndex(
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_GreenBandIndex(
		/* [in] */ LONG newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_BlueBandIndex(
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_BlueBandIndex(
		/* [in] */ LONG newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_UseRgbBandMapping(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_UseRgbBandMapping(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ForceSingleBandRendering(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ForceSingleBandRendering(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AlphaBandIndex(
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_AlphaBandIndex(
		/* [in] */ LONG newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_UseActiveBandAsAlpha(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_UseActiveBandAsAlpha(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_BandMinimum(
		/* [in] */ LONG bandIndex,
		/* [retval][out] */ DOUBLE *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_BandMaximum(
		/* [in] */ LONG bandIndex,
		/* [retval][out] */ DOUBLE *pVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetBandMinMax(
		/* [in] */ LONG bandIndex,
		/* [in] */ DOUBLE min,
		/* [in] */ DOUBLE max,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetDefaultMinMax(
		/* [in] */ LONG bandIndex,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ReverseGreyscale(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ReverseGreyscale(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_IgnoreColorTable(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_IgnoreColorTable(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RenderingMode(
		/* [retval][out] */ tkRasterRendering *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ValueWithAlpha(
		/* [in] */ LONG row,
		/* [in] */ LONG col,
		/* [retval][out] */ OLE_COLOR *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ValueWithAlpha(
		/* [in] */ LONG row,
		/* [in] */ LONG col,
		/* [in] */ OLE_COLOR newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_BufferOffsetX(
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_BufferOffsetY(
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ActiveColorScheme(
		/* [retval][out] */ IGridColorScheme **pVal) = 0;

};


EXTERN_C class IShapefile : public IDispatch
{
public:
	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NumShapes(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NumFields(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Extents(
		/* [retval][out] */ IExtents **pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ShapefileType(
		/* [retval][out] */ ShpfileType *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Shape(
		/* [in] */ long ShapeIndex,
		/* [retval][out] */ IShape **pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EditingShapes(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastErrorCode(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CdlgFilter(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GlobalCallback(
		/* [retval][out] */ ICallback **pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GlobalCallback(
		/* [in] */ ICallback *newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Key(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Key(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Open(
		/* [in] */ BSTR ShapefileName,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateNew(
		/* [in] */ BSTR ShapefileName,
		/* [in] */ ShpfileType ShapefileType,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveAs(
		/* [in] */ BSTR ShapefileName,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Close(
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EditClear(
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EditInsertShape(
		/* [in] */ IShape *Shape,
		/* [out][in] */ long *ShapeIndex,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EditDeleteShape(
		/* [in] */ long ShapeIndex,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SelectShapes(
		/* [in] */ IExtents *BoundBox,
		/* [defaultvalue][in] */ double Tolerance,
		/* [defaultvalue][in] */ SelectMode SelectMode,
		/* [optional][out][in] */ VARIANT *Result,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StartEditingShapes(
		/* [defaultvalue][in] */ VARIANT_BOOL StartEditTable,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StopEditingShapes(
		/* [defaultvalue][in] */ VARIANT_BOOL ApplyChanges,
		/* [defaultvalue][in] */ VARIANT_BOOL StopEditTable,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EditInsertField(
		/* [in] */ IField *NewField,
		/* [out][in] */ long *FieldIndex,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EditDeleteField(
		/* [in] */ long FieldIndex,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EditCellValue(
		/* [in] */ long FieldIndex,
		/* [in] */ long ShapeIndex,
		/* [in] */ VARIANT NewVal,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StartEditingTable(
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StopEditingTable(
		/* [defaultvalue][in] */ VARIANT_BOOL ApplyChanges,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Field(
		/* [in] */ long FieldIndex,
		/* [retval][out] */ IField **pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CellValue(
		/* [in] */ long FieldIndex,
		/* [in] */ long ShapeIndex,
		/* [retval][out] */ VARIANT *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EditingTable(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorMsg(
		/* [in] */ long ErrorCode,
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [hidden][helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FileHandle(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Filename(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE QuickPoint(
		/* [in] */ long ShapeIndex,
		/* [in] */ long PointIndex,
		/* [retval][out] */ IPoint **retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE QuickExtents(
		/* [in] */ long ShapeIndex,
		/* [retval][out] */ IExtents **retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE QuickPoints(
		/* [in] */ long ShapeIndex,
		/* [out][in] */ long *numPoints,
		/* [retval][out] */ SAFEARRAY * *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PointInShape(
		/* [in] */ LONG ShapeIndex,
		/* [in] */ DOUBLE x,
		/* [in] */ DOUBLE y,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PointInShapefile(
		/* [in] */ DOUBLE x,
		/* [in] */ DOUBLE y,
		/* [retval][out] */ LONG *ShapeIndex) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE BeginPointInShapefile(
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EndPointInShapefile(void) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Projection(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Projection(
		/* [in] */ BSTR proj4String) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FieldByName(
		/* [in] */ BSTR FieldName,
		/* [retval][out] */ IField **pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NumPoints(
		/* [in] */ long Shapeindex,
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateNewWithShapeID(
		/* [in] */ BSTR ShapefileName,
		/* [in] */ ShpfileType ShapefileType,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UseSpatialIndex(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UseSpatialIndex(
		/* [in] */ VARIANT_BOOL pVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateSpatialIndex(
		/* [in] */ BSTR ShapefileName,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HasSpatialIndex(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_HasSpatialIndex(
		/* [in] */ VARIANT_BOOL __MIDL__IShapefile0000) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Resource(
		/* [in] */ BSTR newShpPath,
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CacheExtents(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CacheExtents(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RefreshExtents(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RefreshShapeExtents(
		/* [in] */ LONG ShapeId,
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UseQTree(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UseQTree(
		/* [defaultvalue][in] */ VARIANT_BOOL pVal = -1) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Save(
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsSpatialIndexValid(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SpatialIndexMaxAreaPercent(
		/* [in] */ DOUBLE newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SpatialIndexMaxAreaPercent(
		/* [retval][out] */ DOUBLE *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CanUseSpatialIndex(
		/* [in] */ IExtents *pArea,
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetIntersection(
		/* [in] */ VARIANT_BOOL SelectedOnlyOfThis,
		/* [in] */ IShapefile *sf,
		/* [in] */ VARIANT_BOOL SelectedOnly,
		/* [in] */ ShpfileType fileType,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ IShapefile **retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SelectByShapefile(
		/* [in] */ IShapefile *sf,
		/* [in] */ tkSpatialRelation Relation,
		/* [in] */ VARIANT_BOOL SelectedOnly,
		/* [out][in] */ VARIANT *Result,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NumSelected(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ShapeSelected(
		/* [in] */ long ShapeIndex,
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ShapeSelected(
		/* [in] */ long ShapeIndex,
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SelectionDrawingOptions(
		/* [retval][out] */ IShapeDrawingOptions **pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SelectionDrawingOptions(
		/* [in] */ IShapeDrawingOptions *newVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SelectAll(void) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SelectNone(void) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InvertSelection(void) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Dissolve(
		/* [in] */ long FieldIndex,
		/* [in] */ VARIANT_BOOL SelectedOnly,
		/* [retval][out] */ IShapefile **sf) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Labels(
		/* [retval][out] */ ILabels **pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Labels(
		/* [in] */ ILabels *newVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GenerateLabels(
		/* [in] */ long FieldIndex,
		/* [in] */ tkLabelPositioning Method,
		/* [defaultvalue][in] */ VARIANT_BOOL LargestPartOnly,
		/* [retval][out] */ long *count) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clone(
		/* [retval][out] */ IShapefile **retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DefaultDrawingOptions(
		/* [retval][out] */ IShapeDrawingOptions **pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DefaultDrawingOptions(
		/* [in] */ IShapeDrawingOptions *newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Categories(
		/* [retval][out] */ IShapefileCategories **pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Categories(
		/* [in] */ IShapefileCategories *newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Charts(
		/* [retval][out] */ ICharts **pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Charts(
		/* [in] */ ICharts *newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ShapeCategory(
		/* [in] */ long ShapeIndex,
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ShapeCategory(
		/* [in] */ long ShapeIndex,
		/* [in] */ long newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Table(
		/* [retval][out] */ ITable **retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_VisibilityExpression(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_VisibilityExpression(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FastMode(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FastMode(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MinDrawingSize(
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MinDrawingSize(
		/* [in] */ LONG newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SourceType(
		/* [retval][out] */ tkShapefileSourceType *pVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE BufferByDistance(
		/* [in] */ double Distance,
		/* [in] */ LONG nSegments,
		/* [in] */ VARIANT_BOOL SelectedOnly,
		/* [in] */ VARIANT_BOOL MergeResults,
		/* [retval][out] */ IShapefile **sf) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GeometryEngine(
		/* [retval][out] */ tkGeometryEngine *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GeometryEngine(
		/* [in] */ tkGeometryEngine newVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Difference(
		/* [in] */ VARIANT_BOOL SelectedOnlySubject,
		/* [in] */ IShapefile *sfOverlay,
		/* [in] */ VARIANT_BOOL SelectedOnlyOverlay,
		/* [retval][out] */ IShapefile **retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clip(
		/* [in] */ VARIANT_BOOL SelectedOnlySubject,
		/* [in] */ IShapefile *sfOverlay,
		/* [in] */ VARIANT_BOOL SelectedOnlyOverlay,
		/* [retval][out] */ IShapefile **retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SymmDifference(
		/* [in] */ VARIANT_BOOL SelectedOnlySubject,
		/* [in] */ IShapefile *sfOverlay,
		/* [in] */ VARIANT_BOOL SelectedOnlyOverlay,
		/* [retval][out] */ IShapefile **retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Union(
		/* [in] */ VARIANT_BOOL SelectedOnlySubject,
		/* [in] */ IShapefile *sfOverlay,
		/* [in] */ VARIANT_BOOL SelectedOnlyOverlay,
		/* [retval][out] */ IShapefile **retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ExplodeShapes(
		/* [in] */ VARIANT_BOOL SelectedOnly,
		/* [retval][out] */ IShapefile **retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AggregateShapes(
		/* [in] */ VARIANT_BOOL SelectedOnly,
		/* [defaultvalue][in] */ LONG FieldIndex,
		/* [retval][out] */ IShapefile **retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ExportSelection(
		/* [retval][out] */ IShapefile **retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Sort(
		/* [in] */ LONG FieldIndex,
		/* [in] */ VARIANT_BOOL Ascending,
		/* [retval][out] */ IShapefile **retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Merge(
		/* [in] */ VARIANT_BOOL SelectedOnlyThis,
		/* [in] */ IShapefile *sf,
		/* [in] */ VARIANT_BOOL SelectedOnly,
		/* [retval][out] */ IShapefile **retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SelectionColor(
		/* [retval][out] */ OLE_COLOR *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SelectionColor(
		/* [in] */ OLE_COLOR newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SelectionAppearance(
		/* [retval][out] */ tkSelectionAppearance *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SelectionAppearance(
		/* [in] */ tkSelectionAppearance newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CollisionMode(
		/* [retval][out] */ tkCollisionMode *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CollisionMode(
		/* [in] */ tkCollisionMode newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SelectionTransparency(
		/* [retval][out] */ BYTE *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SelectionTransparency(
		/* [in] */ BYTE newVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_StopExecution(
		/* [in] */ IStopExecution *stopper) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Serialize(
		/* [in] */ VARIANT_BOOL SaveSelection,
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Deserialize(
		/* [in] */ VARIANT_BOOL LoadSelection,
		/* [in] */ BSTR newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GeoProjection(
		/* [retval][out] */ IGeoProjection **retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GeoProjection(
		/* [in] */ IGeoProjection *pVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Reproject(
		/* [in] */ IGeoProjection *newProjection,
		/* [out][in] */ LONG *reprojectedCount,
		/* [retval][out] */ IShapefile **retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReprojectInPlace(
		/* [in] */ IGeoProjection *newProjection,
		/* [out][in] */ LONG *reprojectedCount,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SimplifyLines(
		/* [in] */ DOUBLE Tolerance,
		/* [in] */ VARIANT_BOOL SelectedOnly,
		/* [retval][out] */ IShapefile **retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FixUpShapes(
		/* [out] */ IShapefile **retVal,
		/* [retval][out] */ VARIANT_BOOL *fixed) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EditAddShape(
		/* [in] */ IShape *shape,
		/* [retval][out] */ long *shapeIndex) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EditAddField(
		/* [in] */ BSTR name,
		/* [in] */ FieldType type,
		/* [in] */ int precision,
		/* [in] */ int width,
		/* [retval][out] */ long *fieldIndex) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetRelatedShapes(
		/* [in] */ long referenceIndex,
		/* [in] */ tkSpatialRelation relation,
		/* [out][in] */ VARIANT *resultArray,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetRelatedShapes2(
		/* [in] */ IShape *referenceShape,
		/* [in] */ tkSpatialRelation relation,
		/* [out][in] */ VARIANT *resultArray,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Identifiable(
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Identifiable(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Segmentize(
		/* [defaultvalue][in] */ double metersTolerance,
		/* [retval][out] */ IShapefile **retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetClosestVertex(
		/* [in] */ double x,
		/* [in] */ double y,
		/* [in] */ double maxDistance,
		/* [out] */ long *shapeIndex,
		/* [out] */ long *pointIndex,
		/* [out] */ double *distance,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE HasInvalidShapes(
		/* [retval][out] */ VARIANT_BOOL *result) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ShapeCategory2(
		/* [in] */ long ShapeIndex,
		/* [retval][out] */ BSTR *categoryName) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ShapeCategory2(
		/* [in] */ long ShapeIndex,
		/* [in] */ BSTR categoryName) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ShapeCategory3(
		/* [in] */ long ShapeIndex,
		/* [retval][out] */ IShapefileCategory **category) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ShapeCategory3(
		/* [in] */ long ShapeIndex,
		/* [in] */ IShapefileCategory *category) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Dump(
		/* [in] */ BSTR ShapefileName,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LoadDataFrom(
		/* [in] */ BSTR ShapefileName,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastInputValidation(
		/* [retval][out] */ IShapeValidationInfo **retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastOutputValidation(
		/* [retval][out] */ IShapeValidationInfo **retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ClearCachedGeometries(void) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AggregateShapesWithStats(
		/* [in] */ VARIANT_BOOL SelectedOnly,
		/* [defaultvalue][in] */ LONG FieldIndex,
		/* [defaultvalue][in] */ IFieldStatOperations *statOperations,
		/* [retval][out] */ IShapefile **retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DissolveWithStats(
		/* [in] */ long FieldIndex,
		/* [in] */ VARIANT_BOOL SelectedOnly,
		/* [defaultvalue][in] */ IFieldStatOperations *statOperations,
		/* [retval][out] */ IShapefile **sf) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ShapeVisible(
		/* [in] */ long ShapeIndex,
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ShapeRotation(
		/* [in] */ long ShapeIndex,
		/* [retval][out] */ double *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ShapeRotation(
		/* [in] */ long ShapeIndex,
		/* [in] */ double newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Volatile(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Volatile(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE EditUpdateShape(
		/* [in] */ long ShapeIndex,
		/* [in] */ IShape *shpNew,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ShapeModified(
		/* [in] */ long ShapeIndex,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ShapeModified(
		/* [in] */ long ShapeIndex,
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_InteractiveEditing(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_InteractiveEditing(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ShapeIsHidden(
		/* [in] */ LONG shapeIndex,
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ShapeIsHidden(
		/* [in] */ LONG shapeIndex,
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Snappable(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Snappable(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE Serialize2(
		/* [in] */ VARIANT_BOOL SaveSelection,
		/* [in] */ VARIANT_BOOL SerializeCategories,
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ShapefileType2D(
		/* [retval][out] */ ShpfileType *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_FieldIndexByName(
		/* [in] */ BSTR FieldName,
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE Move(
		/* [in] */ DOUBLE xOffset,
		/* [in] */ DOUBLE yOffset,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE RemoveSpatialIndex(
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ShapeRendered(
		/* [in] */ LONG ShapeIndex,
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SortField(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_SortField(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SortAscending(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_SortAscending(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE UpdateSortField(void) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE SaveAsEx(
		/* [in] */ BSTR newFilename,
		/* [in] */ VARIANT_BOOL stopEditing,
		/* [in] */ VARIANT_BOOL unboundFile,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE FixUpShapes2(
		/* [in] */ VARIANT_BOOL SelectedOnly,
		/* [out] */ IShapefile **result,
		/* [retval][out] */ VARIANT_BOOL *fixed) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE StartAppendMode(
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE StopAppendMode(void) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AppendMode(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_IsGeographicProjection(
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Selectable(
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Selectable(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetClosestSnapPosition(
		/* [in] */ double x,
		/* [in] */ double y,
		/* [in] */ double maxDistance,
		/* [out] */ long *shapeIndex,
		/* [out] */ double *fx,
		/* [out] */ double *fy,
		/* [out] */ double *distance,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

};

EXTERN_C class IShape : public IDispatch
{
public:
	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NumPoints(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NumParts(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ShapeType(
		/* [retval][out] */ ShpfileType *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ShapeType(
		/* [in] */ ShpfileType newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Point(
		/* [in] */ long PointIndex,
		/* [retval][out] */ IPoint **pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Point(
		/* [in] */ long PointIndex,
		/* [in] */ IPoint *newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Part(
		/* [in] */ long PartIndex,
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Part(
		/* [in] */ long PartIndex,
		/* [in] */ long newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastErrorCode(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorMsg(
		/* [in] */ long ErrorCode,
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GlobalCallback(
		/* [retval][out] */ ICallback **pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GlobalCallback(
		/* [in] */ ICallback *newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Key(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Key(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Create(
		/* [in] */ ShpfileType ShpType,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InsertPoint(
		/* [in] */ IPoint *NewPoint,
		/* [out][in] */ long *PointIndex,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeletePoint(
		/* [in] */ long PointIndex,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InsertPart(
		/* [in] */ long PointIndex,
		/* [out][in] */ long *PartIndex,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeletePart(
		/* [in] */ long PartIndex,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Extents(
		/* [retval][out] */ IExtents **pVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SerializeToString(
		/* [retval][out] */ BSTR *Serialized) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateFromString(
		/* [in] */ BSTR Serialized,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PointInThisPoly(
		/* [in] */ IPoint *pt,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Centroid(
		/* [retval][out] */ IPoint **pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Length(
		/* [retval][out] */ double *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Perimeter(
		/* [retval][out] */ double *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Area(
		/* [retval][out] */ double *pVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Relates(
		/* [in] */ IShape *Shape,
		/* [in] */ tkSpatialRelation Relation,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Distance(
		/* [in] */ IShape *Shape,
		/* [retval][out] */ DOUBLE *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Buffer(
		/* [in] */ DOUBLE Distance,
		/* [in] */ long nQuadSegments,
		/* [retval][out] */ IShape **retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clip(
		/* [in] */ IShape *Shape,
		/* [in] */ tkClipOperation Operation,
		/* [retval][out] */ IShape **retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Contains(
		/* [in] */ IShape *Shape,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Crosses(
		/* [in] */ IShape *Shape,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Disjoint(
		/* [in] */ IShape *Shape,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Equals(
		/* [in] */ IShape *Shape,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Intersects(
		/* [in] */ IShape *Shape,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Overlaps(
		/* [in] */ IShape *Shape,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Touches(
		/* [in] */ IShape *Shape,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Within(
		/* [in] */ IShape *Shape,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Boundary(
		/* [retval][out] */ IShape **retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ConvexHull(
		/* [retval][out] */ IShape **retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsValid(
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_XY(
		/* [in] */ long PointIndex,
		/* [out][in] */ double *x,
		/* [out][in] */ double *y,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PartIsClockWise(
		/* [in] */ long PartIndex,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReversePointsOrder(
		/* [in] */ long PartIndex,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetIntersection(
		/* [in] */ IShape *Shape,
		/* [out][in] */ VARIANT *Results,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Center(
		/* [retval][out] */ IPoint **pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EndOfPart(
		/* [in] */ long PartIndex,
		/* [retval][out] */ long *retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PartAsShape(
		/* [in] */ long PartIndex,
		/* [retval][out] */ IShape **retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsValidReason(
		/* [retval][out] */ BSTR *retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_InteriorPoint(
		/* [retval][out] */ IPoint **retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clone(
		/* [retval][out] */ IShape **retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Explode(
		/* [out][in] */ VARIANT *Results,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE put_XY(
		/* [in] */ LONG pointIndex,
		/* [in] */ DOUBLE x,
		/* [in] */ DOUBLE y,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ExportToBinary(
		/* [out][in] */ VARIANT *bytesArray,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ImportFromBinary(
		/* [in] */ VARIANT bytesArray,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FixUp(
		/* [out] */ IShape **retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddPoint(
		/* [in] */ double x,
		/* [in] */ double y,
		/* [retval][out] */ long *pointIndex) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ExportToWKT(
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ImportFromWKT(
		/* [in] */ BSTR Serialized,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CopyFrom(
		/* [in] */ IShape *sourceShape,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ClosestPoints(
		/* [in] */ IShape *shape2,
		/* [retval][out] */ IShape **result) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE put_M(
		/* [in] */ LONG pointIndex,
		/* [in] */ double m,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE put_Z(
		/* [in] */ LONG pointIndex,
		/* [in] */ double z,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE get_M(
		/* [in] */ LONG pointIndex,
		/* [out] */ double *m,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE get_Z(
		/* [in] */ LONG pointIndex,
		/* [out] */ double *z,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE BufferWithParams(
		/* [in] */ DOUBLE Distance,
		/* [defaultvalue][in] */ LONG numSegments,
		/* [defaultvalue][in] */ VARIANT_BOOL singleSided,
		/* [defaultvalue][in] */ tkBufferCap capStyle,
		/* [defaultvalue][in] */ tkBufferJoin joinStyle,
		/* [defaultvalue][in] */ DOUBLE mitreLimit,
		/* [retval][out] */ IShape **retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE Move(
		/* [in] */ DOUBLE xOffset,
		/* [in] */ DOUBLE yOffset) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE Rotate(
		/* [in] */ DOUBLE originX,
		/* [in] */ DOUBLE originY,
		/* [in] */ DOUBLE angle) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ShapeType2D(
		/* [retval][out] */ ShpfileType *pVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE SplitByPolyline(
		/* [in] */ IShape *polyline,
		/* [out][in] */ VARIANT *results,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_IsEmpty(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear(void) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE FixUp2(
		/* [in] */ tkUnitsOfMeasure units,
		/* [retval][out] */ IShape **retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InterpolatePoint(
		/* [in] */ IPoint *startPoint,
		/* [in] */ double distance,
		/* [defaultvalue][in] */ VARIANT_BOOL normalized,
		/* [retval][out] */ IPoint **retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ProjectDistanceTo(
		/* [in] */ IShape *referenceShape,
		/* [retval][out] */ double *distance) = 0;

};


EXTERN_C class IExtents : public IDispatch
{
public:
	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetBounds(
		/* [in] */ double xMin,
		/* [in] */ double yMin,
		/* [in] */ double zMin,
		/* [in] */ double xMax,
		/* [in] */ double yMax,
		/* [in] */ double zMax) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetBounds(
		/* [out] */ double *xMin,
		/* [out] */ double *yMin,
		/* [out] */ double *zMin,
		/* [out] */ double *xMax,
		/* [out] */ double *yMax,
		/* [out] */ double *zMax) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_xMin(
		/* [retval][out] */ double *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_xMax(
		/* [retval][out] */ double *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_yMin(
		/* [retval][out] */ double *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_yMax(
		/* [retval][out] */ double *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_zMin(
		/* [retval][out] */ double *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_zMax(
		/* [retval][out] */ double *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_mMin(
		/* [retval][out] */ double *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_mMax(
		/* [retval][out] */ double *pVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetMeasureBounds(
		/* [out] */ double *mMin,
		/* [out] */ double *mMax) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetMeasureBounds(
		/* [in] */ double mMin,
		/* [in] */ double mMax) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ToDebugString(
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PointIsWithin(
		/* [in] */ double x,
		/* [in] */ double y,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ToShape(
		/* [retval][out] */ IShape **retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Center(
		/* [retval][out] */ IPoint **retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveTo(
		/* [in] */ double x,
		/* [in] */ double y) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Width(
		/* [retval][out] */ double *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Height(
		/* [retval][out] */ double *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Depth(
		/* [retval][out] */ double *pVal) = 0;

};

EXTERN_C class IPoint : public IDispatch
{
public:
	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_X(
		/* [retval][out] */ double *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_X(
		/* [in] */ double newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Y(
		/* [retval][out] */ double *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Y(
		/* [in] */ double newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Z(
		/* [retval][out] */ double *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Z(
		/* [in] */ double newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastErrorCode(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorMsg(
		/* [in] */ long ErrorCode,
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GlobalCallback(
		/* [retval][out] */ ICallback **pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GlobalCallback(
		/* [in] */ ICallback *newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Key(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Key(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_M(
		/* [retval][out] */ double *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_M(
		/* [in] */ double newVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clone(
		/* [retval][out] */ IPoint **retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Set(
		/* [in] */ double newX,
		/* [in] */ double newY,
		/* [defaultvalue][in] */ double newZ = 0) = 0;

};

EXTERN_C class ITable : public IDispatch
{
public:
	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NumRows(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NumFields(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Field(
		/* [in] */ long FieldIndex,
		/* [retval][out] */ IField **pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CellValue(
		/* [in] */ long FieldIndex,
		/* [in] */ long RowIndex,
		/* [retval][out] */ VARIANT *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EditingTable(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastErrorCode(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorMsg(
		/* [in] */ long ErrorCode,
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CdlgFilter(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GlobalCallback(
		/* [retval][out] */ ICallback **pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GlobalCallback(
		/* [in] */ ICallback *newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Key(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Key(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Open(
		/* [in] */ BSTR dbfFilename,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateNew(
		/* [in] */ BSTR dbfFilename,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveAs(
		/* [in] */ BSTR dbfFilename,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Close(
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EditClear(
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EditInsertField(
		/* [in] */ IField *Field,
		/* [out][in] */ long *FieldIndex,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EditReplaceField(
		/* [in] */ long FieldIndex,
		/* [in] */ IField *newField,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EditDeleteField(
		/* [in] */ long FieldIndex,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EditInsertRow(
		/* [out][in] */ long *RowIndex,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EditCellValue(
		/* [in] */ long FieldIndex,
		/* [in] */ long RowIndex,
		/* [in] */ VARIANT newVal,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StartEditingTable(
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StopEditingTable(
		/* [defaultvalue][in] */ VARIANT_BOOL ApplyChanges,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EditDeleteRow(
		/* [in] */ long RowIndex,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Save(
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MinValue(
		/* [in] */ long FieldIndex,
		/* [retval][out] */ VARIANT *retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxValue(
		/* [in] */ long FieldIndex,
		/* [retval][out] */ VARIANT *retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MeanValue(
		/* [in] */ long FieldIndex,
		/* [retval][out] */ double *retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StandardDeviation(
		/* [in] */ long FieldIndex,
		/* [retval][out] */ double *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ParseExpression(
		/* [in] */ BSTR Expression,
		/* [out][in] */ BSTR *ErrorString,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Query(
		/* [in] */ BSTR Expression,
		/* [out][in] */ VARIANT *Result,
		/* [out][in] */ BSTR *ErrorString,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FieldIndexByName(
		/* [in] */ BSTR FieldName,
		/* [retval][out] */ long *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TestExpression(
		/* [in] */ BSTR Expression,
		/* [in] */ tkValueType ReturnType,
		/* [out][in] */ BSTR *ErrorString,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Calculate(
		/* [in] */ BSTR Expression,
		/* [in] */ LONG RowIndex,
		/* [out] */ VARIANT *Result,
		/* [out] */ BSTR *ErrorString,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EditAddField(
		/* [in] */ BSTR name,
		/* [in] */ FieldType type,
		/* [in] */ int precision,
		/* [in] */ int width,
		/* [retval][out] */ long *fieldIndex) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Join(
		/* [in] */ ITable *table2,
		/* [in] */ BSTR field1,
		/* [in] */ BSTR field2,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Join2(
		/* [in] */ ITable *table2,
		/* [in] */ BSTR field1,
		/* [in] */ BSTR field2,
		/* [in] */ BSTR filenameToReopen,
		/* [in] */ BSTR JoinOptions,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StopJoin(
		/* [in] */ int joinIndex,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StopAllJoins(void) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsJoined(
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_JoinCount(
		/* [retval][out] */ int *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_JoinFilename(
		/* [in] */ int joinIndex,
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_JoinFromField(
		/* [in] */ int joinIndex,
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_JoinToField(
		/* [in] */ int joinIndex,
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FieldIsJoined(
		/* [in] */ int fieldIndex,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FieldJoinIndex(
		/* [in] */ int fieldIndex,
		/* [retval][out] */ int *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Serialize(
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Deserialize(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TryJoin(
		/* [in] */ ITable *table2,
		/* [in] */ BSTR fieldTo,
		/* [in] */ BSTR fieldFrom,
		/* [out] */ int *rowCount,
		/* [out] */ int *joinRowCount,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Join3(
		/* [in] */ ITable *table2,
		/* [in] */ BSTR field1,
		/* [in] */ BSTR field2,
		/* [in] */ BSTR filenameToReopen,
		/* [in] */ BSTR JoinOptions,
		/* [in] */ SAFEARRAY * fieldList,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Dump(
		/* [in] */ BSTR dbfFilename,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_JoinFields(
		/* [in] */ LONG joinIndex,
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Filename(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_JoinOptions(
		/* [in] */ LONG joinIndex,
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE ClearCache(void) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RowIsModified(
		/* [in] */ LONG RowIndex,
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

};

EXTERN_C class IField : public IDispatch
{
public:
	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Width(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Width(
		/* [in] */ long newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Precision(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Precision(
		/* [in] */ long newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Type(
		/* [retval][out] */ FieldType *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Type(
		/* [in] */ FieldType newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastErrorCode(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorMsg(
		/* [in] */ long ErrorCode,
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GlobalCallback(
		/* [retval][out] */ ICallback **pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GlobalCallback(
		/* [in] */ ICallback *newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Key(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Key(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clone(
		/* [retval][out] */ IField **retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Visible(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Visible(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Alias(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Alias(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Joined(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Expression(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Expression(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Modified(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Modified(
		/* [in] */ VARIANT_BOOL newVal) = 0;

};

EXTERN_C class IShapeNetwork : public IDispatch
{
public:
	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Build(
		/* [in] */ IShapefile *Shapefile,
		/* [in] */ long ShapeIndex,
		/* [in] */ long FinalPointIndex,
		/* [in] */ double Tolerance,
		/* [in] */ AmbiguityResolution ar,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ long *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteShape(
		/* [in] */ long ShapeIndex,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RasterizeD8(
		/* [in] */ VARIANT_BOOL UseNetworkBounds,
		/* [defaultvalue][in] */ IGridHeader *Header,
		/* [defaultvalue][in] */ double Cellsize,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ IGrid **retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveUp(
		/* [in] */ long UpIndex,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveDown(
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveTo(
		/* [in] */ long ShapeIndex,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveToOutlet(
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Shapefile(
		/* [retval][out] */ IShapefile **pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentShape(
		/* [retval][out] */ IShape **pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentShapeIndex(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DistanceToOutlet(
		/* [in] */ long PointIndex,
		/* [retval][out] */ double *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NumDirectUps(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NetworkSize(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AmbigShapeIndex(
		/* [in] */ long Index,
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastErrorCode(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorMsg(
		/* [in] */ long ErrorCode,
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GlobalCallback(
		/* [retval][out] */ ICallback **pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GlobalCallback(
		/* [in] */ ICallback *newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Key(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Key(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ParentIndex(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ParentIndex(
		/* [in] */ long newVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Open(
		/* [in] */ IShapefile *sf,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Close(
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

};

EXTERN_C class ICallback : public IDispatch
{
public:
	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Progress(
		/* [in] */ BSTR KeyOfSender,
		/* [in] */ long Percent,
		/* [in] */ BSTR Message) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Error(
		/* [in] */ BSTR KeyOfSender,
		/* [in] */ BSTR ErrorMsg) = 0;

};



EXTERN_C class

IStopExecution : public IDispatch
{
public:
	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StopFunction(
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

};

EXTERN_C class IUtils : public IDispatch
{
public:
	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PointInPolygon(
		/* [in] */ IShape *Shp,
		/* [in] */ IPoint *TestPoint,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GridReplace(
		/* [in] */ IGrid *Grd,
		/* [in] */ VARIANT OldValue,
		/* [in] */ VARIANT NewValue,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GridInterpolateNoData(
		/* [in] */ IGrid *Grd,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveColinearPoints(
		/* [in] */ IShapefile *Shapes,
		/* [in] */ double LinearTolerance,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Length(
		/* [in] */ IShape *Shape,
		/* [retval][out] */ double *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Perimeter(
		/* [in] */ IShape *Shape,
		/* [retval][out] */ double *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Area(
		/* [in] */ IShape *Shape,
		/* [retval][out] */ double *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastErrorCode(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorMsg(
		/* [in] */ long ErrorCode,
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GlobalCallback(
		/* [retval][out] */ ICallback **pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GlobalCallback(
		/* [in] */ ICallback *newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Key(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Key(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ClipPolygon(
		/* [in] */ PolygonOperation op,
		/* [in] */ IShape *SubjectPolygon,
		/* [in] */ IShape *ClipPolygon,
		/* [retval][out] */ IShape **retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GridMerge(
		/* [in] */ VARIANT Grids,
		/* [in] */ BSTR MergeFilename,
		/* [defaultvalue][in] */ VARIANT_BOOL InRam,
		/* [defaultvalue][in] */ GridFileType GrdFileType,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ IGrid **retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ShapeMerge(
		/* [in] */ IShapefile *Shapes,
		/* [in] */ long IndexOne,
		/* [in] */ long IndexTwo,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ IShape **retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GridToImage(
		/* [in] */ IGrid *Grid,
		/* [in] */ IGridColorScheme *cScheme,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ IImage **retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GridToShapefile(
		/* [in] */ IGrid *Grid,
		/* [defaultvalue][in] */ IGrid *ConnectionGrid,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ IShapefile **retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GridToGrid(
		/* [in] */ IGrid *Grid,
		/* [in] */ GridDataType OutDataType,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ IGrid **retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ShapeToShapeZ(
		/* [in] */ IShapefile *Shapefile,
		/* [in] */ IGrid *Grid,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ IShapefile **retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TinToShapefile(
		/* [in] */ ITin *Tin,
		/* [in] */ ShpfileType Type,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ IShapefile **retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ShapefileToGrid(
		/* [in] */ IShapefile *Shpfile,
		/* [defaultvalue][in] */ VARIANT_BOOL UseShapefileBounds,
		/* [defaultvalue][in] */ IGridHeader *GrdHeader,
		/* [defaultvalue][in] */ double Cellsize,
		/* [defaultvalue][in] */ VARIANT_BOOL UseShapeNumber,
		/* [defaultvalue][in] */ short SingleValue,
		/* [retval][out] */ IGrid **retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE hBitmapToPicture(
		/* [in] */ long hBitmap,
		/* [retval][out] */ IPictureDisp **retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GenerateHillShade(
		/* [in] */ BSTR bstrGridFilename,
		/* [in] */ BSTR bstrShadeFilename,
		/* [defaultvalue][in] */ float z,
		/* [defaultvalue][in] */ float scale,
		/* [defaultvalue][in] */ float az,
		/* [defaultvalue][in] */ float alt,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GenerateContour(
		/* [in] */ BSTR pszSrcFilename,
		/* [in] */ BSTR pszDstFilename,
		/* [in] */ double dfInterval,
		/* [defaultvalue][in] */ double dfNoData,
		/* [defaultvalue][in] */ VARIANT_BOOL Is3D,
		/* [defaultvalue][in] */ VARIANT dblFLArray,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TranslateRaster(
		/* [in] */ BSTR bstrSrcFilename,
		/* [in] */ BSTR bstrDstFilename,
		/* [in] */ BSTR bstrOptions,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OGRLayerToShapefile(
		/* [in] */ BSTR Filename,
		/* [defaultvalue][in] */ ShpfileType shpType,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ IShapefile **sf) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MergeImages(
		/* [in] */ SAFEARRAY * InputNames,
		/* [in] */ BSTR OutputName,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReprojectShapefile(
		/* [in] */ IShapefile *sf,
		/* [in] */ IGeoProjection *source,
		/* [in] */ IGeoProjection *target,
		/* [retval][out] */ IShapefile **result) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ColorByName(
		/* [in] */ tkMapColor name,
		/* [retval][out] */ OLE_COLOR *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ClipGridWithPolygon(
		/* [in] */ BSTR inputGridfile,
		/* [in] */ IShape *poly,
		/* [in] */ BSTR resultGridfile,
		/* [in] */ VARIANT_BOOL keepExtents,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ClipGridWithPolygon2(
		/* [in] */ IGrid *inputGrid,
		/* [in] */ IShape *poly,
		/* [in] */ BSTR resultGridfile,
		/* [in] */ VARIANT_BOOL keepExtents,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GridStatisticsToShapefile(
		/* [in] */ IGrid *grid,
		/* [in] */ IShapefile *sf,
		/* [in] */ VARIANT_BOOL selectedOnly,
		/* [in] */ VARIANT_BOOL overwriteFields,
		/* [defaultvalue][in] */ VARIANT_BOOL useCenterWithinMethod,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Polygonize(
		/* [in] */ BSTR pszSrcFilename,
		/* [in] */ BSTR pszDstFilename,
		/* [defaultvalue][in] */ int iSrcBand,
		/* [defaultvalue][in] */ VARIANT_BOOL NoMask,
		/* [defaultvalue][in] */ BSTR pszMaskFilename,
		/* [defaultvalue][in] */ BSTR pszOGRFormat,
		/* [defaultvalue][in] */ BSTR pszDstLayerName,
		/* [defaultvalue][in] */ BSTR pszPixValFieldName,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GDALInfo(
		/* [in] */ BSTR bstrSrcFilename,
		/* [in] */ BSTR bstrOptions,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ BSTR *bstrInfo) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GDALWarp(
		/* [in] */ BSTR bstrSrcFilename,
		/* [in] */ BSTR bstrDstFilename,
		/* [in] */ BSTR bstrOptions,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GDALBuildVrt(
		/* [in] */ BSTR bstrDstFilename,
		/* [in] */ BSTR bstrOptions,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GDALAddOverviews(
		/* [in] */ BSTR bstrSrcFilename,
		/* [in] */ BSTR bstrOptions,
		/* [in] */ BSTR bstrLevels,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GDALRasterize(
		/* [in] */ BSTR bstrSrcFilename,
		/* [in] */ BSTR bstrDstFilename,
		/* [in] */ BSTR bstrOptions,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OGRInfo(
		/* [in] */ BSTR bstrSrcFilename,
		/* [in] */ BSTR bstrOptions,
		/* [defaultvalue][in] */ BSTR bstrLayers,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ BSTR *bstrInfo) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OGR2OGR(
		/* [in] */ BSTR bstrSrcFilename,
		/* [in] */ BSTR bstrDstFilename,
		/* [in] */ BSTR bstrOptions,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ConvertDistance(
		/* [in] */ tkUnitsOfMeasure sourceUnit,
		/* [in] */ tkUnitsOfMeasure targetUnit,
		/* [out][in] */ DOUBLE *Value,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateInstance(
		/* [in] */ tkInterface interfaceId,
		/* [retval][out] */ IDispatch **retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GeodesicDistance(
		/* [in] */ double lat1,
		/* [in] */ double lng1,
		/* [in] */ double lat2,
		/* [in] */ double lng2,
		/* [retval][out] */ double *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MaskRaster(
		/* [in] */ BSTR Filename,
		/* [in] */ BYTE newPerBandValue,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GridStatisticsForPolygon(
		/* [in] */ IGrid *grid,
		/* [in] */ IGridHeader *header,
		/* [in] */ IExtents *gridExtents,
		/* [in] */ IShape *shape,
		/* [in] */ double noDataValue,
		/* [out][in] */ double *meanValue,
		/* [out][in] */ double *minValue,
		/* [out][in] */ double *maxValue,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CopyNodataValues(
		/* [in] */ BSTR sourceFilename,
		/* [in] */ BSTR destFilename,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GridToImage2(
		/* [in] */ IGrid *grid,
		/* [in] */ IGridColorScheme *ci,
		/* [in] */ tkGridProxyFormat imageFormat,
		/* [in] */ VARIANT_BOOL inRam,
		/* [in] */ ICallback *cBack,
		/* [retval][out] */ IImage **retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ErrorMsgFromObject(
		/* [in] */ IDispatch *comClass,
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TileProjectionToGeoProjection(
		/* [in] */ tkTileProjection projection,
		/* [retval][out] */ IGeoProjection **retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ComUsageReport(
		/* [in] */ VARIANT_BOOL unreleasedOnly,
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE CalculateRaster(
		/* [in] */ SAFEARRAY * filenames,
		/* [in] */ BSTR expression,
		/* [in] */ BSTR outputFilename,
		/* [in] */ BSTR gdalOutputFormat,
		/* [in] */ float noDataValue,
		/* [in] */ ICallback *cBack,
		/* [out] */ BSTR *errorMsg,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE ReclassifyRaster(
		/* [in] */ BSTR Filename,
		/* [in] */ int bandIndex,
		/* [in] */ BSTR outputName,
		/* [in] */ SAFEARRAY * LowerBounds,
		/* [in] */ SAFEARRAY * UpperBounds,
		/* [in] */ SAFEARRAY * NewValues,
		/* [in] */ BSTR gdalOutputFormat,
		/* [in] */ ICallback *cBack,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE IsTiffGrid(
		/* [in] */ BSTR Filename,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE GeodesicArea(
		/* [in] */ IShape *shapeWgs84,
		/* [retval][out] */ DOUBLE *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE FixUpShapes(
		/* [in] */ IShapefile *subject,
		/* [in] */ VARIANT_BOOL SelectedOnly,
		/* [in] */ BSTR outputFilename,
		/* [in] */ VARIANT_BOOL Overwrite,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE BufferByDistance(
		/* [in] */ IShapefile *subject,
		/* [in] */ DOUBLE Distance,
		/* [in] */ LONG nSegments,
		/* [in] */ VARIANT_BOOL SelectedOnly,
		/* [in] */ VARIANT_BOOL MergeResults,
		/* [in] */ BSTR outputFilename,
		/* [in] */ VARIANT_BOOL Overwrite,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE ExplodeShapes(
		/* [in] */ IShapefile *subject,
		/* [in] */ VARIANT_BOOL SelectedOnly,
		/* [in] */ BSTR outputFilename,
		/* [in] */ VARIANT_BOOL Overwrite,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE ExportSelection(
		/* [in] */ IShapefile *subject,
		/* [in] */ BSTR outputFilename,
		/* [in] */ VARIANT_BOOL Overwrite,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EPSGUnitConversion(
		/* [in] */ int EPSGUnitCode,
		/* [retval][out] */ tkUnitsOfMeasure *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetNAD83ProjectionName(
		/* [in] */ tkNad83Projection projectionID,
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetWGS84ProjectionName(
		/* [in] */ tkWgs84Projection projectionID,
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProjectionNameByID(
		/* [in] */ int SRID,
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProjectionList(
		/* [in] */ tkProjectionSet projectionSets,
		/* [out][in] */ VARIANT *list,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAngle(
		/* [in] */ IPoint *firstPoint,
		/* [in] */ IPoint *secondPoint,
		/* [retval][out] */ double *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LineInterpolatePoint(
		/* [in] */ IShape *sourceLine,
		/* [in] */ IPoint *startPoint,
		/* [in] */ double distance,
		/* [defaultvalue][in] */ VARIANT_BOOL normalized,
		/* [retval][out] */ IPoint **retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LineProjectDistanceTo(
		/* [in] */ IShape *sourceLine,
		/* [in] */ IShape *referenceShape,
		/* [retval][out] */ double *distance) = 0;

};

EXTERN_C class IVector : public IDispatch
{
public:
	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_i(
		/* [retval][out] */ double *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_i(
		/* [in] */ double newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_j(
		/* [retval][out] */ double *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_j(
		/* [in] */ double newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_k(
		/* [retval][out] */ double *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_k(
		/* [in] */ double newVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Normalize(void) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Dot(
		/* [in] */ IVector *V,
		/* [retval][out] */ double *result) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CrossProduct(
		/* [in] */ IVector *V,
		/* [retval][out] */ IVector **result) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastErrorCode(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorMsg(
		/* [in] */ long ErrorCode,
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GlobalCallback(
		/* [retval][out] */ ICallback **pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GlobalCallback(
		/* [in] */ ICallback *newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Key(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Key(
		/* [in] */ BSTR newVal) = 0;

};

EXTERN_C class IGridColorScheme : public IDispatch
{
public:
	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NumBreaks(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AmbientIntensity(
		/* [retval][out] */ double *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AmbientIntensity(
		/* [in] */ double newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LightSourceIntensity(
		/* [retval][out] */ double *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LightSourceIntensity(
		/* [in] */ double newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LightSourceAzimuth(
		/* [retval][out] */ double *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LightSourceElevation(
		/* [retval][out] */ double *pVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetLightSource(
		/* [in] */ double Azimuth,
		/* [in] */ double Elevation) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InsertBreak(
		/* [in] */ IGridColorBreak *BrkInfo) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Break(
		/* [in] */ long Index,
		/* [retval][out] */ IGridColorBreak **pVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteBreak(
		/* [in] */ long Index) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear(void) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NoDataColor(
		/* [retval][out] */ OLE_COLOR *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_NoDataColor(
		/* [in] */ OLE_COLOR newVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UsePredefined(
		/* [in] */ double LowValue,
		/* [in] */ double HighValue,
		/* [defaultvalue][in] */ PredefinedColorScheme Preset = SummerMountains) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetLightSource(
		/* [retval][out] */ IVector **result) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastErrorCode(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorMsg(
		/* [in] */ long ErrorCode,
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GlobalCallback(
		/* [retval][out] */ ICallback **pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GlobalCallback(
		/* [in] */ ICallback *newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Key(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Key(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InsertAt(
		/* [in] */ int Position,
		/* [in] */ IGridColorBreak *Break) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Serialize(
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Deserialize(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReadFromFile(
		/* [in] */ BSTR mwlegFilename,
		/* [defaultvalue][in] */ BSTR nodeName,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WriteToFile(
		/* [in] */ BSTR mwlegFilename,
		/* [defaultvalue][in] */ BSTR gridName,
		/* [defaultvalue][in] */ int bandIndex,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ApplyColoringType(
		/* [in] */ ColoringType coloringType) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ApplyGradientModel(
		/* [in] */ GradientModel gradientModel) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE ApplyColors(
		/* [in] */ tkColorSchemeType schemeType,
		/* [in] */ IColorScheme *scheme,
		/* [in] */ VARIANT_BOOL gradientWithinCategories,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

};


EXTERN_C class IGridColorBreak : public IDispatch
{
public:
	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HighColor(
		/* [retval][out] */ OLE_COLOR *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_HighColor(
		/* [in] */ OLE_COLOR newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LowColor(
		/* [retval][out] */ OLE_COLOR *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LowColor(
		/* [in] */ OLE_COLOR newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HighValue(
		/* [retval][out] */ double *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_HighValue(
		/* [in] */ double newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LowValue(
		/* [retval][out] */ double *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LowValue(
		/* [in] */ double newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ColoringType(
		/* [retval][out] */ ColoringType *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ColoringType(
		/* [in] */ ColoringType newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GradientModel(
		/* [retval][out] */ GradientModel *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GradientModel(
		/* [in] */ GradientModel newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastErrorCode(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorMsg(
		/* [in] */ long ErrorCode,
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GlobalCallback(
		/* [retval][out] */ ICallback **pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GlobalCallback(
		/* [in] */ ICallback *newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Key(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Key(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Caption(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Caption(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Visible(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Visible(
		/* [in] */ VARIANT_BOOL newVal) = 0;

};

EXTERN_C class ITin : public IDispatch
{
public:
	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Open(
		/* [in] */ BSTR TinFile,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateNew(
		/* [in] */ IGrid *Grid,
		/* [in] */ double Deviation,
		/* [in] */ SplitMethod SplitTest,
		/* [in] */ double STParam,
		/* [in] */ long MeshDivisions,
		/* [defaultvalue][in] */ long MaximumTriangles,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Save(
		/* [in] */ BSTR TinFilename,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Close(
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Select(
		/* [out][in] */ long *TriangleHint,
		/* [in] */ double X,
		/* [in] */ double Y,
		/* [out] */ double *Z,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NumTriangles(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NumVertices(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastErrorCode(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorMsg(
		/* [in] */ long ErrorCode,
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CdlgFilter(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GlobalCallback(
		/* [retval][out] */ ICallback **pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GlobalCallback(
		/* [in] */ ICallback *newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Key(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Key(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Triangle(
		/* [in] */ long TriIndex,
		/* [out] */ long *vtx1Index,
		/* [out] */ long *vtx2Index,
		/* [out] */ long *vtx3Index) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Vertex(
		/* [in] */ long VtxIndex,
		/* [out] */ double *X,
		/* [out] */ double *Y,
		/* [out] */ double *Z) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Max(
		/* [out] */ double *X,
		/* [out] */ double *Y,
		/* [out] */ double *Z) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Min(
		/* [out] */ double *X,
		/* [out] */ double *Y,
		/* [out] */ double *Z) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Filename(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsNDTriangle(
		/* [in] */ long TriIndex,
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TriangleNeighbors(
		/* [in] */ long TriIndex,
		/* [out][in] */ long *triIndex1,
		/* [out][in] */ long *triIndex2,
		/* [out][in] */ long *triIndex3) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateTinFromPoints(
		/* [in] */ SAFEARRAY * Points,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

};


EXTERN_C class IShapeDrawingOptions : public IDispatch
{
public:
	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FillVisible(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FillVisible(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LineVisible(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LineVisible(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LineTransparency(
		/* [retval][out] */ float *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LineTransparency(
		/* [in] */ float newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FillColor(
		/* [retval][out] */ OLE_COLOR *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FillColor(
		/* [in] */ OLE_COLOR newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LineColor(
		/* [retval][out] */ OLE_COLOR *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LineColor(
		/* [in] */ OLE_COLOR newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DrawingMode(
		/* [retval][out] */ tkVectorDrawingMode *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DrawingMode(
		/* [in] */ tkVectorDrawingMode newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FillHatchStyle(
		/* [retval][out] */ tkGDIPlusHatchStyle *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FillHatchStyle(
		/* [in] */ tkGDIPlusHatchStyle newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LineStipple(
		/* [retval][out] */ tkDashStyle *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LineStipple(
		/* [in] */ tkDashStyle newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PointShape(
		/* [retval][out] */ tkPointShapeType *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PointShape(
		/* [in] */ tkPointShapeType newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FillTransparency(
		/* [retval][out] */ float *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FillTransparency(
		/* [in] */ float newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LineWidth(
		/* [retval][out] */ float *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LineWidth(
		/* [in] */ float newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PointSize(
		/* [retval][out] */ float *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PointSize(
		/* [in] */ float newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FillBgTransparent(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FillBgTransparent(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FillBgColor(
		/* [retval][out] */ OLE_COLOR *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FillBgColor(
		/* [in] */ OLE_COLOR newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Picture(
		/* [retval][out] */ IImage **pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Picture(
		/* [in] */ IImage *newValue) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Visible(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Visible(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FillType(
		/* [retval][out] */ tkFillType *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FillType(
		/* [in] */ tkFillType newValue) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FillGradientType(
		/* [retval][out] */ tkGradientType *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FillGradientType(
		/* [in] */ tkGradientType newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PointType(
		/* [retval][out] */ tkPointSymbolType *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PointType(
		/* [in] */ tkPointSymbolType newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FillColor2(
		/* [retval][out] */ OLE_COLOR *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FillColor2(
		/* [in] */ OLE_COLOR newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PointRotation(
		/* [retval][out] */ double *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PointRotation(
		/* [in] */ double newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PointSidesCount(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PointSidesCount(
		/* [in] */ long newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PointSidesRatio(
		/* [retval][out] */ float *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PointSidesRatio(
		/* [in] */ float newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FillRotation(
		/* [retval][out] */ double *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FillRotation(
		/* [in] */ double newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FillGradientBounds(
		/* [retval][out] */ tkGradientBounds *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FillGradientBounds(
		/* [in] */ tkGradientBounds newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PictureScaleX(
		/* [retval][out] */ double *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PictureScaleX(
		/* [in] */ double newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PictureScaleY(
		/* [retval][out] */ double *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PictureScaleY(
		/* [in] */ double newVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DrawShape(
		/* [in] */ int hdc,
		/* [in] */ float x,
		/* [in] */ float y,
		/* [in] */ IShape *shape,
		/* [in] */ VARIANT_BOOL drawVertices,
		/* [in] */ int clipWidth,
		/* [in] */ int clipHeight,
		/* [defaultvalue][in] */ OLE_COLOR backColor,
		/* [defaultvalue][in] */ BYTE backAlpha,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PointCharacter(
		/* [retval][out] */ short *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PointCharacter(
		/* [in] */ short newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FontName(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FontName(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clone(
		/* [retval][out] */ IShapeDrawingOptions **retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastErrorCode(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorMsg(
		/* [in] */ long ErrorCode,
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DrawRectangle(
		/* [in] */ int hdc,
		/* [in] */ float x,
		/* [in] */ float y,
		/* [in] */ int width,
		/* [in] */ int height,
		/* [in] */ VARIANT_BOOL drawVertices,
		/* [defaultvalue][in] */ int clipWidth,
		/* [defaultvalue][in] */ int clipHeight,
		/* [defaultvalue][in] */ OLE_COLOR backColor,
		/* [defaultvalue][in] */ BYTE backAlpha,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DrawPoint(
		/* [in] */ int hdc,
		/* [in] */ float x,
		/* [in] */ float y,
		/* [defaultvalue][in] */ int clipWidth,
		/* [defaultvalue][in] */ int clipHeight,
		/* [defaultvalue][in] */ OLE_COLOR backColor,
		/* [defaultvalue][in] */ BYTE backAlpha,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_VerticesVisible(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_VerticesVisible(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_VerticesType(
		/* [retval][out] */ tkVertexType *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_VerticesType(
		/* [in] */ tkVertexType newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_VerticesColor(
		/* [retval][out] */ OLE_COLOR *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_VerticesColor(
		/* [in] */ OLE_COLOR newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_VerticesSize(
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_VerticesSize(
		/* [in] */ LONG newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_VerticesFillVisible(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_VerticesFillVisible(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DrawLine(
		/* [in] */ int hdc,
		/* [in] */ float x,
		/* [in] */ float y,
		/* [in] */ int width,
		/* [in] */ int height,
		/* [in] */ VARIANT_BOOL drawVertices,
		/* [in] */ int clipWidth,
		/* [in] */ int clipHeight,
		/* [defaultvalue][in] */ OLE_COLOR backColor,
		/* [defaultvalue][in] */ BYTE backAlpha,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LinePattern(
		/* [retval][out] */ ILinePattern **pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LinePattern(
		/* [in] */ ILinePattern *newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Tag(
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Tag(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetGradientFill(
		/* [in] */ OLE_COLOR color,
		/* [in] */ short range) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetDefaultPointSymbol(
		/* [in] */ tkDefaultPointSymbol symbol) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UseLinePattern(
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UseLinePattern(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Serialize(
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Deserialize(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DynamicVisibility(
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DynamicVisibility(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxVisibleScale(
		/* [retval][out] */ double *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MaxVisibleScale(
		/* [in] */ double newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MinVisibleScale(
		/* [retval][out] */ double *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MinVisibleScale(
		/* [in] */ double newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AlignPictureByBottom(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AlignPictureByBottom(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FrameVisible(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FrameVisible(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FrameType(
		/* [retval][out] */ tkLabelFrameType *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FrameType(
		/* [in] */ tkLabelFrameType newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PointReflection(
		/* [retval][out] */ tkPointReflectionType *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PointReflection(
		/* [in] */ tkPointReflectionType newVal) = 0;

};

EXTERN_C class ILabel : public IDispatch
{
public:
	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Visible(
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Visible(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Rotation(
		/* [retval][out] */ double *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Rotation(
		/* [in] */ double newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Text(
		/* [retval][out] */ BSTR *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Text(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_X(
		/* [retval][out] */ double *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_X(
		/* [in] */ double newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Y(
		/* [retval][out] */ double *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Y(
		/* [in] */ double newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsDrawn(
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Category(
		/* [retval][out] */ long *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Category(
		/* [in] */ long newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ScreenExtents(
		/* [retval][out] */ IExtents **retval) = 0;

};


EXTERN_C class ILabels : public IDispatch
{
public:
	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastErrorCode(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorMsg(
		/* [in] */ long ErrorCode,
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GlobalCallback(
		/* [retval][out] */ ICallback **pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GlobalCallback(
		/* [in] */ ICallback *newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Key(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Key(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_VerticalPosition(
		/* [retval][out] */ tkVerticalPosition *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_VerticalPosition(
		/* [in] */ tkVerticalPosition newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Category(
		/* [in] */ long Index,
		/* [retval][out] */ ILabelCategory **pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Category(
		/* [in] */ long Index,
		/* [in] */ ILabelCategory *newVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddLabel(
		/* [in] */ BSTR Text,
		/* [in] */ double x,
		/* [in] */ double y,
		/* [defaultvalue][in] */ double Rotation = 0,
		/* [defaultvalue][in] */ long Category = -1) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InsertLabel(
		/* [in] */ long Index,
		/* [in] */ BSTR Text,
		/* [in] */ double x,
		/* [in] */ double y,
		/* [defaultvalue][in] */ double Rotation,
		/* [defaultvalue][in] */ long Category,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveLabel(
		/* [in] */ long Index,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddPart(
		/* [in] */ long Index,
		/* [in] */ BSTR Text,
		/* [in] */ double x,
		/* [in] */ double y,
		/* [defaultvalue][in] */ double Rotation = 0,
		/* [defaultvalue][in] */ long Category = -1) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InsertPart(
		/* [in] */ long Index,
		/* [in] */ long Part,
		/* [in] */ BSTR Text,
		/* [in] */ double x,
		/* [in] */ double y,
		/* [defaultvalue][in] */ double Rotation,
		/* [defaultvalue][in] */ long Category,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemovePart(
		/* [in] */ long Index,
		/* [in] */ long Part,
		/* [retval][out] */ VARIANT_BOOL *vbretval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddCategory(
		/* [in] */ BSTR Name,
		/* [retval][out] */ ILabelCategory **retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InsertCategory(
		/* [in] */ long Index,
		/* [in] */ BSTR Name,
		/* [retval][out] */ ILabelCategory **retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveCategory(
		/* [in] */ long Index,
		/* [retval][out] */ VARIANT_BOOL *vbretval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear(void) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ClearCategories(void) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Select(
		/* [in] */ IExtents *BoundingBox,
		/* [defaultvalue][in] */ long Tolerance,
		/* [defaultvalue][in] */ SelectMode SelectMode,
		/* [out][optional][in] */ VARIANT *LabelIndices,
		/* [out][optional][in] */ VARIANT *PartIndices,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NumParts(
		/* [in] */ long Index,
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NumCategories(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Label(
		/* [in] */ long Index,
		/* [in] */ long Part,
		/* [retval][out] */ ILabel **pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Synchronized(
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Synchronized(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ScaleLabels(
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ScaleLabels(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BasicScale(
		/* [retval][out] */ double *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BasicScale(
		/* [in] */ double newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxVisibleScale(
		/* [retval][out] */ double *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MaxVisibleScale(
		/* [in] */ double newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MinVisibleScale(
		/* [retval][out] */ double *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MinVisibleScale(
		/* [in] */ double newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DynamicVisibility(
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DynamicVisibility(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AvoidCollisions(
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AvoidCollisions(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CollisionBuffer(
		/* [retval][out] */ long *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CollisionBuffer(
		/* [in] */ long newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UseWidthLimits(
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UseWidthLimits(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RemoveDuplicates(
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RemoveDuplicates(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UseGdiPlus(
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UseGdiPlus(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Visible(
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Visible(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_OffsetX(
		/* [retval][out] */ double *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_OffsetX(
		/* [in] */ double newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_OffsetY(
		/* [retval][out] */ double *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_OffsetY(
		/* [in] */ double newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Alignment(
		/* [retval][out] */ tkLabelAlignment *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Alignment(
		/* [in] */ tkLabelAlignment newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LineOrientation(
		/* [retval][out] */ tkLineLabelOrientation *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LineOrientation(
		/* [in] */ tkLineLabelOrientation newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FontName(
		/* [retval][out] */ BSTR *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FontName(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FontSize(
		/* [retval][out] */ long *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FontSize(
		/* [in] */ long newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FontItalic(
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FontItalic(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FontBold(
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FontBold(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FontUnderline(
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FontUnderline(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FontStrikeOut(
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FontStrikeOut(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FontColor(
		/* [retval][out] */ OLE_COLOR *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FontColor(
		/* [in] */ OLE_COLOR newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FontColor2(
		/* [retval][out] */ OLE_COLOR *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FontColor2(
		/* [in] */ OLE_COLOR newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FontGradientMode(
		/* [retval][out] */ tkLinearGradientMode *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FontGradientMode(
		/* [in] */ tkLinearGradientMode newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FontTransparency(
		/* [retval][out] */ LONG *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FontTransparency(
		/* [in] */ LONG newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FontOutlineVisible(
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FontOutlineVisible(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ShadowVisible(
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ShadowVisible(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HaloVisible(
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_HaloVisible(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FontOutlineColor(
		/* [retval][out] */ OLE_COLOR *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FontOutlineColor(
		/* [in] */ OLE_COLOR newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ShadowColor(
		/* [retval][out] */ OLE_COLOR *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ShadowColor(
		/* [in] */ OLE_COLOR newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HaloColor(
		/* [retval][out] */ OLE_COLOR *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_HaloColor(
		/* [in] */ OLE_COLOR newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FontOutlineWidth(
		/* [retval][out] */ LONG *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FontOutlineWidth(
		/* [in] */ LONG newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ShadowOffsetX(
		/* [retval][out] */ LONG *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ShadowOffsetX(
		/* [in] */ LONG newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ShadowOffsetY(
		/* [retval][out] */ LONG *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ShadowOffsetY(
		/* [in] */ LONG newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HaloSize(
		/* [retval][out] */ LONG *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_HaloSize(
		/* [in] */ LONG newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FrameType(
		/* [retval][out] */ tkLabelFrameType *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FrameType(
		/* [in] */ tkLabelFrameType newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FrameOutlineColor(
		/* [retval][out] */ OLE_COLOR *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FrameOutlineColor(
		/* [in] */ OLE_COLOR newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FrameBackColor(
		/* [retval][out] */ OLE_COLOR *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FrameBackColor(
		/* [in] */ OLE_COLOR newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FrameBackColor2(
		/* [retval][out] */ OLE_COLOR *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FrameBackColor2(
		/* [in] */ OLE_COLOR newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FrameGradientMode(
		/* [retval][out] */ tkLinearGradientMode *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FrameGradientMode(
		/* [in] */ tkLinearGradientMode newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FrameOutlineStyle(
		/* [retval][out] */ tkDashStyle *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FrameOutlineStyle(
		/* [in] */ tkDashStyle newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FrameOutlineWidth(
		/* [retval][out] */ LONG *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FrameOutlineWidth(
		/* [in] */ LONG newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FramePaddingX(
		/* [retval][out] */ LONG *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FramePaddingX(
		/* [in] */ LONG newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FramePaddingY(
		/* [retval][out] */ LONG *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FramePaddingY(
		/* [in] */ LONG newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FrameTransparency(
		/* [retval][out] */ LONG *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FrameTransparency(
		/* [in] */ LONG newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_InboxAlignment(
		/* [retval][out] */ tkLabelAlignment *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_InboxAlignment(
		/* [in] */ tkLabelAlignment newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ClassificationField(
		/* [retval][out] */ long *FieldIndex) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ClassificationField(
		/* [in] */ long FieldIndex) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GenerateCategories(
		/* [in] */ long FieldIndex,
		/* [in] */ tkClassificationType ClassificationType,
		/* [in] */ long numClasses,
		/* [retval][out] */ VARIANT_BOOL *vbretval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ApplyCategories(void) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Options(
		/* [retval][out] */ ILabelCategory **retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Options(
		/* [in] */ ILabelCategory *newVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ApplyColorScheme(
		/* [in] */ tkColorSchemeType Type,
		/* [in] */ IColorScheme *ColorScheme) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ApplyColorScheme2(
		/* [in] */ tkColorSchemeType Type,
		/* [in] */ IColorScheme *ColorScheme,
		/* [in] */ tkLabelElements Element) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ApplyColorScheme3(
		/* [in] */ tkColorSchemeType Type,
		/* [in] */ IColorScheme *ColorScheme,
		/* [in] */ tkLabelElements Element,
		/* [in] */ long CategoryStartIndex,
		/* [in] */ long CategoryEndIndex) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FrameVisible(
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FrameVisible(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_VisibilityExpression(
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_VisibilityExpression(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MinDrawingSize(
		/* [retval][out] */ LONG *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MinDrawingSize(
		/* [in] */ LONG newVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveCategoryUp(
		/* [in] */ long Index,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveCategoryDown(
		/* [in] */ long Index,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AutoOffset(
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AutoOffset(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Serialize(
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Deserialize(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Expression(
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Expression(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveToXML(
		/* [in] */ BSTR Filename,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LoadFromXML(
		/* [in] */ BSTR Filename,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveToDbf(
		/* [defaultvalue][in] */ VARIANT_BOOL saveText,
		/* [defaultvalue][in] */ VARIANT_BOOL saveCategory,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveToDbf2(
		/* [defaultvalue][in] */ BSTR xField,
		/* [defaultvalue][in] */ BSTR yField,
		/* [defaultvalue][in] */ BSTR angleField,
		/* [defaultvalue][in] */ BSTR textField,
		/* [defaultvalue][in] */ BSTR categoryField,
		/* [defaultvalue][in] */ VARIANT_BOOL saveText,
		/* [defaultvalue][in] */ VARIANT_BOOL saveCategory,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LoadFromDbf(
		/* [defaultvalue][in] */ VARIANT_BOOL loadText,
		/* [defaultvalue][in] */ VARIANT_BOOL loadCategory,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LoadFromDbf2(
		/* [defaultvalue][in] */ BSTR xField,
		/* [defaultvalue][in] */ BSTR yField,
		/* [defaultvalue][in] */ BSTR angleField,
		/* [defaultvalue][in] */ BSTR textField,
		/* [defaultvalue][in] */ BSTR categoryField,
		/* [defaultvalue][in] */ VARIANT_BOOL loadText,
		/* [defaultvalue][in] */ VARIANT_BOOL loadCategory,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Generate(
		/* [in] */ BSTR Expression,
		/* [in] */ tkLabelPositioning Method,
		/* [in] */ VARIANT_BOOL LargestPartOnly,
		/* [retval][out] */ long *Count) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SavingMode(
		/* [retval][out] */ tkSavingMode *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SavingMode(
		/* [in] */ tkSavingMode newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Positioning(
		/* [retval][out] */ tkLabelPositioning *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Positioning(
		/* [in] */ tkLabelPositioning newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TextRenderingHint(
		/* [retval][out] */ tkTextRenderingHint *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TextRenderingHint(
		/* [in] */ tkTextRenderingHint newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_FloatNumberFormat(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_FloatNumberFormat(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE ForceRecalculateExpression(void) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_FontSize2(
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_FontSize2(
		/* [in] */ LONG newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_UseVariableSize(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_UseVariableSize(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogScaleForSize(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LogScaleForSize(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE UpdateSizeField(void) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MinVisibleZoom(
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_MinVisibleZoom(
		/* [in] */ LONG newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxVisibleZoom(
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_MaxVisibleZoom(
		/* [in] */ LONG newVal) = 0;

};


EXTERN_C class ILabelCategory : public IDispatch
{
public:
	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Priority(
		/* [retval][out] */ LONG *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Priority(
		/* [in] */ LONG newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name(
		/* [retval][out] */ BSTR *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Expression(
		/* [retval][out] */ BSTR *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Expression(
		/* [in] */ BSTR retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MinValue(
		/* [retval][out] */ VARIANT *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MinValue(
		/* [in] */ VARIANT newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxValue(
		/* [retval][out] */ VARIANT *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MaxValue(
		/* [in] */ VARIANT newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Visible(
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Visible(
		/* [in] */ VARIANT_BOOL retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_OffsetX(
		/* [retval][out] */ double *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_OffsetX(
		/* [in] */ double retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_OffsetY(
		/* [retval][out] */ double *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_OffsetY(
		/* [in] */ double retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Alignment(
		/* [retval][out] */ tkLabelAlignment *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Alignment(
		/* [in] */ tkLabelAlignment retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LineOrientation(
		/* [retval][out] */ tkLineLabelOrientation *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LineOrientation(
		/* [in] */ tkLineLabelOrientation newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FontName(
		/* [retval][out] */ BSTR *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FontName(
		/* [in] */ BSTR retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FontSize(
		/* [retval][out] */ long *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FontSize(
		/* [in] */ long retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FontItalic(
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FontItalic(
		/* [in] */ VARIANT_BOOL retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FontBold(
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FontBold(
		/* [in] */ VARIANT_BOOL retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FontUnderline(
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FontUnderline(
		/* [in] */ VARIANT_BOOL retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FontStrikeOut(
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FontStrikeOut(
		/* [in] */ VARIANT_BOOL retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FontColor(
		/* [retval][out] */ OLE_COLOR *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FontColor(
		/* [in] */ OLE_COLOR retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FontColor2(
		/* [retval][out] */ OLE_COLOR *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FontColor2(
		/* [in] */ OLE_COLOR retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FontGradientMode(
		/* [retval][out] */ tkLinearGradientMode *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FontGradientMode(
		/* [in] */ tkLinearGradientMode retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FontTransparency(
		/* [retval][out] */ LONG *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FontTransparency(
		/* [in] */ LONG retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FontOutlineVisible(
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FontOutlineVisible(
		/* [in] */ VARIANT_BOOL retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ShadowVisible(
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ShadowVisible(
		/* [in] */ VARIANT_BOOL retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HaloVisible(
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_HaloVisible(
		/* [in] */ VARIANT_BOOL retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FontOutlineColor(
		/* [retval][out] */ OLE_COLOR *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FontOutlineColor(
		/* [in] */ OLE_COLOR retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ShadowColor(
		/* [retval][out] */ OLE_COLOR *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ShadowColor(
		/* [in] */ OLE_COLOR retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HaloColor(
		/* [retval][out] */ OLE_COLOR *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_HaloColor(
		/* [in] */ OLE_COLOR retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FontOutlineWidth(
		/* [retval][out] */ LONG *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FontOutlineWidth(
		/* [in] */ LONG retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ShadowOffsetX(
		/* [retval][out] */ LONG *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ShadowOffsetX(
		/* [in] */ LONG retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ShadowOffsetY(
		/* [retval][out] */ LONG *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ShadowOffsetY(
		/* [in] */ LONG retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HaloSize(
		/* [retval][out] */ LONG *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_HaloSize(
		/* [in] */ LONG retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FrameType(
		/* [retval][out] */ tkLabelFrameType *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FrameType(
		/* [in] */ tkLabelFrameType newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FrameOutlineColor(
		/* [retval][out] */ OLE_COLOR *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FrameOutlineColor(
		/* [in] */ OLE_COLOR newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FrameBackColor(
		/* [retval][out] */ OLE_COLOR *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FrameBackColor(
		/* [in] */ OLE_COLOR newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FrameBackColor2(
		/* [retval][out] */ OLE_COLOR *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FrameBackColor2(
		/* [in] */ OLE_COLOR newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FrameGradientMode(
		/* [retval][out] */ tkLinearGradientMode *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FrameGradientMode(
		/* [in] */ tkLinearGradientMode retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FrameOutlineStyle(
		/* [retval][out] */ tkDashStyle *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FrameOutlineStyle(
		/* [in] */ tkDashStyle retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FrameOutlineWidth(
		/* [retval][out] */ LONG *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FrameOutlineWidth(
		/* [in] */ LONG retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FramePaddingX(
		/* [retval][out] */ LONG *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FramePaddingX(
		/* [in] */ LONG retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FramePaddingY(
		/* [retval][out] */ LONG *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FramePaddingY(
		/* [in] */ LONG retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FrameTransparency(
		/* [retval][out] */ LONG *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FrameTransparency(
		/* [in] */ LONG retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_InboxAlignment(
		/* [retval][out] */ tkLabelAlignment *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_InboxAlignment(
		/* [in] */ tkLabelAlignment newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FrameVisible(
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FrameVisible(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [hidden][helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled(
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [hidden][helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Serialize(
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Deserialize(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_FontSize2(
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_FontSize2(
		/* [in] */ LONG newVal) = 0;

};

EXTERN_C class IShapefileCategories : public IDispatch
{
public:
	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastErrorCode(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorMsg(
		/* [in] */ long ErrorCode,
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GlobalCallback(
		/* [retval][out] */ ICallback **pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GlobalCallback(
		/* [in] */ ICallback *newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Key(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Key(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add(
		/* [in] */ BSTR Name,
		/* [retval][out] */ IShapefileCategory **retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Insert(
		/* [in] */ long Index,
		/* [in] */ BSTR Name,
		/* [retval][out] */ IShapefileCategory **retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove(
		/* [in] */ long Index,
		/* [retval][out] */ VARIANT_BOOL *vbretval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear(void) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item(
		/* [in] */ long Index,
		/* [retval][out] */ IShapefileCategory **pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Item(
		/* [in] */ long Index,
		/* [in] */ IShapefileCategory *newVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Generate(
		/* [in] */ long FieldIndex,
		/* [in] */ tkClassificationType ClassificationType,
		/* [in] */ long numClasses,
		/* [retval][out] */ VARIANT_BOOL *vbretval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Shapefile(
		/* [retval][out] */ IShapefile **retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ApplyExpressions(void) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ApplyExpression(
		/* [in] */ long CategoryIndex) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ApplyColorScheme(
		/* [in] */ tkColorSchemeType Type,
		/* [in] */ IColorScheme *ColorScheme) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ApplyColorScheme2(
		/* [in] */ tkColorSchemeType Type,
		/* [in] */ IColorScheme *ColorScheme,
		/* [in] */ tkShapeElements ShapeElement) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ApplyColorScheme3(
		/* [in] */ tkColorSchemeType Type,
		/* [in] */ IColorScheme *ColorScheme,
		/* [in] */ tkShapeElements ShapeElement,
		/* [in] */ long CategoryStartIndex,
		/* [in] */ long CategoryEndIndex) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Caption(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Caption(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveUp(
		/* [in] */ long Index,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveDown(
		/* [in] */ long Index,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Serialize(
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Deserialize(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddRange(
		/* [in] */ long FieldIndex,
		/* [in] */ tkClassificationType ClassificationType,
		/* [in] */ long numClasses,
		/* [in] */ VARIANT minValue,
		/* [in] */ VARIANT maxValue,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CategoryIndexByName(
		/* [in] */ BSTR categoryName,
		/* [retval][out] */ int *categoryIndex) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CategoryIndex(
		/* [in] */ IShapefileCategory *category,
		/* [retval][out] */ int *categoryIndex) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GeneratePolygonColors(
		/* [defaultvalue][in] */ IColorScheme *scheme,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ClassificationField(
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ClassificationField(
		/* [in] */ LONG newVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE Generate2(
		/* [in] */ BSTR fieldName,
		/* [in] */ tkClassificationType ClassificationType,
		/* [in] */ LONG numClasses,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE Add2(
		/* [in] */ IShapefileCategory *category) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE Insert2(
		/* [in] */ LONG index,
		/* [in] */ IShapefileCategory *category,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

};

EXTERN_C class IShapefileCategory : public IDispatch
{
public:
	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name(
		/* [retval][out] */ BSTR *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Expression(
		/* [retval][out] */ BSTR *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Expression(
		/* [in] */ BSTR retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DrawingOptions(
		/* [retval][out] */ IShapeDrawingOptions **retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DrawingOptions(
		/* [in] */ IShapeDrawingOptions *retval) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ValueType(
		/* [retval][out] */ tkCategoryValue *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ValueType(
		/* [in] */ tkCategoryValue newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MinValue(
		/* [retval][out] */ VARIANT *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_MinValue(
		/* [in] */ VARIANT newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxValue(
		/* [retval][out] */ VARIANT *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_MaxValue(
		/* [in] */ VARIANT newVal) = 0;

};

EXTERN_C class ICharts : public IDispatch
{
public:
	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Key(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Key(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Visible(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Visible(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AvoidCollisions(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AvoidCollisions(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ChartType(
		/* [retval][out] */ tkChartType *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ChartType(
		/* [in] */ tkChartType newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BarWidth(
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BarWidth(
		/* [in] */ LONG newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BarHeight(
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BarHeight(
		/* [in] */ LONG newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PieRadius(
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PieRadius(
		/* [in] */ LONG newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PieRotation(
		/* [retval][out] */ double *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PieRotation(
		/* [in] */ double newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NumFields(
		/* [retval][out] */ LONG *newVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddField2(
		/* [in] */ LONG FieldIndex,
		/* [in] */ OLE_COLOR Color) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InsertField2(
		/* [in] */ LONG Index,
		/* [in] */ LONG FieldIndex,
		/* [in] */ OLE_COLOR Color,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveField(
		/* [in] */ LONG Index,
		/* [retval][out] */ VARIANT_BOOL *vbretval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ClearFields(void) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveField(
		/* [in] */ LONG OldIndex,
		/* [in] */ LONG NewIndex,
		/* [retval][out] */ VARIANT_BOOL *vbretval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Generate(
		/* [in] */ tkLabelPositioning Type,
		/* [retval][out] */ VARIANT_BOOL *vbretval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear(void) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DrawChart(
		/* [in] */ int hdc,
		/* [in] */ float x,
		/* [in] */ float y,
		/* [in] */ VARIANT_BOOL hideLabels,
		/* [defaultvalue][in] */ OLE_COLOR backColor,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Tilt(
		/* [retval][out] */ double *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Tilt(
		/* [in] */ double newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Thickness(
		/* [retval][out] */ double *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Thickness(
		/* [in] */ double newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PieRadius2(
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PieRadius2(
		/* [in] */ LONG newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SizeField(
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SizeField(
		/* [in] */ LONG newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NormalizationField(
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_NormalizationField(
		/* [in] */ LONG newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UseVariableRadius(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UseVariableRadius(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Use3DMode(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Use3DMode(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Transparency(
		/* [retval][out] */ SHORT *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Transparency(
		/* [in] */ SHORT newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LineColor(
		/* [retval][out] */ OLE_COLOR *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LineColor(
		/* [in] */ OLE_COLOR newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_VerticalPosition(
		/* [retval][out] */ tkVerticalPosition *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_VerticalPosition(
		/* [in] */ tkVerticalPosition newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Chart(
		/* [in] */ long Chart,
		/* [retval][out] */ IChart **retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Field(
		/* [in] */ long FieldIndex,
		/* [retval][out] */ IChartField **retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddField(
		/* [in] */ IChartField *Field,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InsertField(
		/* [in] */ long Index,
		/* [in] */ IChartField *Field,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastErrorCode(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorMsg(
		/* [in] */ long ErrorCode,
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GlobalCallback(
		/* [retval][out] */ ICallback **pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GlobalCallback(
		/* [in] */ ICallback *newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count(
		/* [retval][out] */ long *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxVisibleScale(
		/* [retval][out] */ double *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MaxVisibleScale(
		/* [in] */ double newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MinVisibleScale(
		/* [retval][out] */ double *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MinVisibleScale(
		/* [in] */ double newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DynamicVisibility(
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DynamicVisibility(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IconWidth(
		/* [retval][out] */ long *retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IconHeight(
		/* [retval][out] */ long *retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Caption(
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Caption(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ValuesFontName(
		/* [retval][out] */ BSTR *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ValuesFontName(
		/* [in] */ BSTR retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ValuesFontSize(
		/* [retval][out] */ long *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ValuesFontSize(
		/* [in] */ long retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ValuesFontItalic(
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ValuesFontItalic(
		/* [in] */ VARIANT_BOOL retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ValuesFontBold(
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ValuesFontBold(
		/* [in] */ VARIANT_BOOL retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ValuesFontColor(
		/* [retval][out] */ OLE_COLOR *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ValuesFontColor(
		/* [in] */ OLE_COLOR retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ValuesFrameVisible(
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ValuesFrameVisible(
		/* [in] */ VARIANT_BOOL retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ValuesFrameColor(
		/* [retval][out] */ OLE_COLOR *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ValuesFrameColor(
		/* [in] */ OLE_COLOR retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ValuesVisible(
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ValuesVisible(
		/* [in] */ VARIANT_BOOL retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ValuesStyle(
		/* [retval][out] */ tkChartValuesStyle *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ValuesStyle(
		/* [in] */ tkChartValuesStyle retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Select(
		/* [in] */ IExtents *BoundingBox,
		/* [in] */ long Tolerance,
		/* [in] */ SelectMode SelectMode,
		/* [out][in] */ VARIANT *Indices,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_VisibilityExpression(
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_VisibilityExpression(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CollisionBuffer(
		/* [retval][out] */ long *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CollisionBuffer(
		/* [in] */ long newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_OffsetX(
		/* [retval][out] */ LONG *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_OffsetX(
		/* [in] */ LONG newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_OffsetY(
		/* [retval][out] */ LONG *retval) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_OffsetY(
		/* [in] */ LONG newVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Serialize(
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Deserialize(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveToXML(
		/* [in] */ BSTR Filename,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LoadFromXML(
		/* [in] */ BSTR Filename,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SavingMode(
		/* [retval][out] */ tkSavingMode *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SavingMode(
		/* [in] */ tkSavingMode newVal) = 0;

};

EXTERN_C class IChart : public IDispatch
{
public:
	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PositionX(
		/* [retval][out] */ double *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PositionX(
		/* [in] */ double newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PositionY(
		/* [retval][out] */ double *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PositionY(
		/* [in] */ double newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Visible(
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Visible(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsDrawn(
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_IsDrawn(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ScreenExtents(
		/* [retval][out] */ IExtents **retVal) = 0;

};


EXTERN_C class IColorScheme : public IDispatch
{
public:
	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetColors(
		/* [in] */ OLE_COLOR Color1,
		/* [in] */ OLE_COLOR Color2) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetColors2(
		/* [in] */ tkMapColor Color1,
		/* [in] */ tkMapColor Color2) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetColors3(
		/* [in] */ SHORT MinRed,
		/* [in] */ SHORT MinGreen,
		/* [in] */ SHORT MinBlue,
		/* [in] */ SHORT MaxRed,
		/* [in] */ SHORT MaxGreen,
		/* [in] */ SHORT MaxBlue) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetColors4(
		/* [in] */ PredefinedColorScheme Scheme) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddBreak(
		/* [in] */ double Value,
		/* [in] */ OLE_COLOR Color) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove(
		/* [in] */ long Index,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear(void) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NumBreaks(
		/* [retval][out] */ long *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RandomColor(
		/* [in] */ double Value,
		/* [retval][out] */ OLE_COLOR *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GraduatedColor(
		/* [in] */ double Value,
		/* [retval][out] */ OLE_COLOR *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BreakColor(
		/* [in] */ long Index,
		/* [retval][out] */ OLE_COLOR *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BreakColor(
		/* [in] */ long Index,
		/* [in] */ OLE_COLOR newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BreakValue(
		/* [in] */ long Index,
		/* [retval][out] */ double *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastErrorCode(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorMsg(
		/* [in] */ long ErrorCode,
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GlobalCallback(
		/* [retval][out] */ ICallback **pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GlobalCallback(
		/* [in] */ ICallback *newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Key(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Key(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE Reverse(void) = 0;

};


EXTERN_C class IChartField : public IDispatch
{
public:
	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Index(
		/* [retval][out] */ LONG *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Index(
		/* [in] */ LONG newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Color(
		/* [retval][out] */ OLE_COLOR *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Color(
		/* [in] */ OLE_COLOR newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name(
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name(
		/* [in] */ BSTR newVal) = 0;

};


EXTERN_C class ILinePattern : public IDispatch
{
public:
	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Key(
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Key(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GlobalCallback(
		/* [retval][out] */ ICallback **retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GlobalCallback(
		/* [in] */ ICallback *newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorMsg(
		/* [in] */ long ErrorCode,
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastErrorCode(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Line(
		/* [in] */ int Index,
		/* [retval][out] */ ILineSegment **retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Line(
		/* [in] */ int Index,
		/* [in] */ ILineSegment *newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count(
		/* [retval][out] */ int *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddLine(
		/* [in] */ OLE_COLOR color,
		/* [in] */ float width,
		/* [in] */ tkDashStyle style) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InsertLine(
		int Index,
		/* [in] */ OLE_COLOR color,
		/* [in] */ float width,
		/* [in] */ tkDashStyle style,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddMarker(
		/* [in] */ tkDefaultPointSymbol marker,
		/* [retval][out] */ ILineSegment **retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InsertMarker(
		/* [in] */ int Index,
		/* [in] */ tkDefaultPointSymbol marker,
		/* [retval][out] */ ILineSegment **retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveItem(
		/* [in] */ int Index,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear(void) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Draw(
		/* [in] */ int hdc,
		/* [in] */ float x,
		/* [in] */ float y,
		/* [in] */ int clipWidth,
		/* [in] */ int clipHeight,
		/* [defaultvalue][in] */ OLE_COLOR backColor,
		/* [defaultvalue][in] */ BYTE backAlpha,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Transparency(
		/* [retval][out] */ BYTE *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Transparency(
		/* [in] */ BYTE newVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Serialize(
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Deserialize(
		/* [in] */ BSTR newVal) = 0;

};

EXTERN_C class ILineSegment : public IDispatch
{
public:
	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Color(
		/* [retval][out] */ OLE_COLOR *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Color(
		/* [in] */ OLE_COLOR newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LineWidth(
		/* [retval][out] */ float *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LineWidth(
		/* [in] */ float newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LineStyle(
		/* [retval][out] */ tkDashStyle *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LineStyle(
		/* [in] */ tkDashStyle newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LineType(
		/* [retval][out] */ tkLineType *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LineType(
		/* [in] */ tkLineType newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Marker(
		/* [retval][out] */ tkDefaultPointSymbol *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Marker(
		/* [in] */ tkDefaultPointSymbol newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MarkerSize(
		/* [retval][out] */ float *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MarkerSize(
		/* [in] */ float newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MarkerInterval(
		/* [retval][out] */ float *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MarkerInterval(
		/* [in] */ float newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MarkerOrientation(
		/* [retval][out] */ tkLineLabelOrientation *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MarkerOrientation(
		/* [in] */ tkLineLabelOrientation newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MarkerFlipFirst(
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MarkerFlipFirst(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MarkerOffset(
		/* [retval][out] */ float *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MarkerOffset(
		/* [in] */ float newVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Draw(
		/* [in] */ int hdc,
		/* [in] */ float x,
		/* [in] */ float y,
		/* [in] */ int clipWidth,
		/* [in] */ int clipHeight,
		/* [defaultvalue][in] */ OLE_COLOR backColor,
		/* [defaultvalue][in] */ BYTE backAlpha,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MarkerOutlineColor(
		/* [retval][out] */ OLE_COLOR *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MarkerOutlineColor(
		/* [in] */ OLE_COLOR newVal) = 0;

};


EXTERN_C class IGeoProjection : public IDispatch
{
public:
	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ExportToProj4(
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ImportFromProj4(
		/* [in] */ BSTR proj,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ImportFromESRI(
		/* [in] */ BSTR proj,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ImportFromEPSG(
		/* [in] */ LONG projCode,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ExportToWKT(
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ImportFromWKT(
		/* [in] */ BSTR proj,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GlobalCallback(
		/* [retval][out] */ ICallback **retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GlobalCallback(
		/* [in] */ ICallback *newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorMsg(
		/* [in] */ long ErrorCode,
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastErrorCode(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Key(
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Key(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetWellKnownGeogCS(
		/* [in] */ tkCoordinateSystem newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsGeographic(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsProjected(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsLocal(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsSame(
		/* [in] */ IGeoProjection *proj,
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsSameGeogCS(
		/* [in] */ IGeoProjection *proj,
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_InverseFlattening(
		/* [retval][out] */ DOUBLE *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SemiMajor(
		/* [retval][out] */ DOUBLE *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SemiMinor(
		/* [retval][out] */ DOUBLE *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ProjectionParam(
		/* [in] */ tkProjectionParameter name,
		/* [in] */ double *Value,
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsEmpty(
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CopyFrom(
		/* [in] */ IGeoProjection *sourceProj,
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ProjectionName(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GeogCSName(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GeogCSParam(
		/* [in] */ tkGeogCSParameter name,
		/* [in] */ DOUBLE *pVal,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetWgs84Projection(
		/* [in] */ tkWgs84Projection Projection) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetNad83Projection(
		/* [in] */ tkNad83Projection Projection) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsSameExt(
		/* [in] */ IGeoProjection *proj,
		/* [in] */ IExtents *bounds,
		/* [defaultvalue][in] */ int numSamplingPoints,
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReadFromFile(
		/* [in] */ BSTR Filename,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WriteToFile(
		/* [in] */ BSTR Filename,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ImportFromAutoDetect(
		/* [in] */ BSTR proj,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StartTransform(
		/* [in] */ IGeoProjection *target,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StopTransform(void) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Transform(
		/* [out][in] */ DOUBLE *x,
		/* [out][in] */ DOUBLE *y,
		/* [retval][out] */ VARIANT_BOOL *retval) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HasTransformation(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetGoogleMercator(
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear(
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clone(
		/* [retval][out] */ IGeoProjection **retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetWgs84(
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsFrozen(
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TryAutoDetectEpsg(
		/* [out] */ int *epsgCode,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE WriteToFileEx(
		/* [in] */ BSTR filename,
		/* [in] */ VARIANT_BOOL esri,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE ReadFromFileEx(
		/* [in] */ BSTR filename,
		/* [in] */ VARIANT_BOOL esri,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE ExportToEsri(
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LinearUnits(
		/* [retval][out] */ tkUnitsOfMeasure *pVal) = 0;

};


EXTERN_C class IGlobalSettings : public IDispatch
{
public:
	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MinPolygonArea(
		/* [retval][out] */ DOUBLE *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MinPolygonArea(
		/* [in] */ DOUBLE newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MinAreaToPerimeterRatio(
		/* [retval][out] */ DOUBLE *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MinAreaToPerimeterRatio(
		/* [in] */ DOUBLE newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ClipperGcsMultiplicationFactor(
		/* [retval][out] */ DOUBLE *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ClipperGcsMultiplicationFactor(
		/* [in] */ DOUBLE newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ShapefileFastMode(
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ShapefileFastMode(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ShapefileFastUnion(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ShapefileFastUnion(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GdalLastErrorNo(
		/* [retval][out] */ tkGdalError *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GdalLastErrorType(
		/* [retval][out] */ tkGdalErrorType *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GdalLastErrorMsg(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ResetGdalError(void) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GdalReprojectionErrorMsg(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LabelsSmoothingMode(
		/* [retval][out] */ tkSmoothingMode *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LabelsSmoothingMode(
		/* [in] */ tkSmoothingMode newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LabelsCompositingQuality(
		/* [retval][out] */ tkCompositingQuality *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LabelsCompositingQuality(
		/* [in] */ tkCompositingQuality newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LocalizedString(
		/* [in] */ tkLocalizedStrings unit,
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LocalizedString(
		/* [in] */ tkLocalizedStrings unit,
		/* [in] */ BSTR localizedString) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ZoomToFirstLayer(
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ZoomToFirstLayer(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LabelsCollisionMode(
		/* [retval][out] */ tkCollisionMode *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LabelsCollisionMode(
		/* [in] */ tkCollisionMode newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GridProxyFormat(
		/* [retval][out] */ tkGridProxyFormat *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GridProxyFormat(
		/* [in] */ tkGridProxyFormat newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxDirectGridSizeMb(
		/* [retval][out] */ double *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MaxDirectGridSizeMb(
		/* [in] */ double newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GridProxyMode(
		/* [retval][out] */ tkGridProxyMode *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GridProxyMode(
		/* [in] */ tkGridProxyMode newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxUniqueValuesCountForGridScheme(
		/* [retval][out] */ int *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MaxUniqueValuesCountForGridScheme(
		/* [in] */ int newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RandomColorSchemeForGrids(
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RandomColorSchemeForGrids(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DefaultColorSchemeForGrids(
		/* [retval][out] */ PredefinedColorScheme *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DefaultColorSchemeForGrids(
		/* [in] */ PredefinedColorScheme newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ShapeOutputValidationMode(
		/* [retval][out] */ tkShapeValidationMode *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ShapeOutputValidationMode(
		/* [in] */ tkShapeValidationMode newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ShapeInputValidationMode(
		/* [retval][out] */ tkShapeValidationMode *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ShapeInputValidationMode(
		/* [in] */ tkShapeValidationMode newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GeometryEngine(
		/* [retval][out] */ tkGeometryEngine *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GeometryEngine(
		/* [in] */ tkGeometryEngine newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SaveGridColorSchemeToFile(
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SaveGridColorSchemeToFile(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MinOverviewWidth(
		/* [retval][out] */ int *retVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_MinOverviewWidth(
		/* [in] */ int newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RasterOverviewCreation(
		/* [retval][out] */ tkRasterOverviewCreation *retVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_RasterOverviewCreation(
		/* [in] */ tkRasterOverviewCreation newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_TiffCompression(
		/* [retval][out] */ tkTiffCompression *retVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_TiffCompression(
		/* [in] */ tkTiffCompression newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RasterOverviewResampling(
		/* [retval][out] */ tkGDALResamplingMethod *retVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_RasterOverviewResampling(
		/* [in] */ tkGDALResamplingMethod newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_TilesThreadPoolSize(
		/* [retval][out] */ int *retVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_TilesThreadPoolSize(
		/* [in] */ int newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LoadSymbologyOnAddLayer(
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LoadSymbologyOnAddLayer(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_TilesMinZoomOnProjectionMismatch(
		/* [retval][out] */ int *retVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_TilesMinZoomOnProjectionMismatch(
		/* [in] */ int newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ImageUpsamplingMode(
		/* [retval][out] */ tkInterpolationMode *retVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ImageUpsamplingMode(
		/* [in] */ tkInterpolationMode newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ImageDownsamplingMode(
		/* [retval][out] */ tkInterpolationMode *retVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ImageDownsamplingMode(
		/* [in] */ tkInterpolationMode newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_OgrStringEncoding(
		/* [retval][out] */ tkOgrEncoding *retVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_OgrStringEncoding(
		/* [in] */ tkOgrEncoding newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_OgrLayerMaxFeatureCount(
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_OgrLayerMaxFeatureCount(
		/* [in] */ LONG newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AutoChooseOgrLoadingMode(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_AutoChooseOgrLoadingMode(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ReprojectLayersOnAdding(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ReprojectLayersOnAdding(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ApplicationCallback(
		/* [retval][out] */ ICallback **pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ApplicationCallback(
		/* [in] */ ICallback *newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HotTrackingMaxShapeCount(
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_HotTrackingMaxShapeCount(
		/* [in] */ LONG newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AllowLayersWithoutProjections(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_AllowLayersWithoutProjections(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AllowProjectionMismatch(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_AllowProjectionMismatch(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MouseTolerance(
		/* [retval][out] */ DOUBLE *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_MouseTolerance(
		/* [in] */ DOUBLE newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxReprojectionShapeCount(
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_MaxReprojectionShapeCount(
		/* [in] */ LONG newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PixelOffsetMode(
		/* [retval][out] */ tkPixelOffsetMode *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_PixelOffsetMode(
		/* [in] */ tkPixelOffsetMode newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AutoChooseRenderingHintForLabels(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_AutoChooseRenderingHintForLabels(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GdalVersion(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_OgrLayerForceUpdateMode(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_OgrLayerForceUpdateMode(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ForceHideLabels(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ForceHideLabels(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GdalPluginPath(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_GdalPluginPath(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GdalDataPath(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_GdalDataPath(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_BingApiKey(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_BingApiKey(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE TestBingApiKey(
		/* [in] */ BSTR key,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetHereMapsApiKey(
		/* [in] */ BSTR appId,
		/* [in] */ BSTR appCode) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_CompressOverviews(
		/* [retval][out] */ tkTiffCompression *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_CompressOverviews(
		/* [in] */ tkTiffCompression newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GridFavorGreyscale(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_GridFavorGreyscale(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GridUseHistogram(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_GridUseHistogram(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_OverrideLocalCallback(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_OverrideLocalCallback(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_CacheDbfRecords(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_CacheDbfRecords(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_CacheShapeRenderingData(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_CacheShapeRenderingData(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_TileLogFilename(
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_TileLogIsOpened(
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogTileErrorsOnly(
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LogTileErrorsOnly(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE StartLogTileRequests(
		/* [in] */ BSTR Filename,
		/* [defaultvalue][in] */ VARIANT_BOOL errorsOnly,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE StopLogTileRequests(void) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_WmsDiskCaching(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_WmsDiskCaching(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_CallbackVerbosity(
		/* [retval][out] */ tkCallbackVerbosity *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_CallbackVerbosity(
		/* [in] */ tkCallbackVerbosity newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_OgrShareConnection(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_OgrShareConnection(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_OgrInterpretYNStringAsBoolean(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_OgrInterpretYNStringAsBoolean(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AllowLayersWithIncompleteReprojection(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_AllowLayersWithIncompleteReprojection(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetHttpUserAgent(
		/* [in] */ BSTR userAgent) = 0;

};


EXTERN_C class ITiles : public IDispatch
{
public:
	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Visible(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Visible(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Provider(
		/* [retval][out] */ tkTileProvider *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Provider(
		/* [in] */ tkTileProvider newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GridLinesVisible(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GridLinesVisible(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DoCaching(
		/* [in] */ tkCacheType cacheType,
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DoCaching(
		/* [in] */ tkCacheType cacheType,
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UseCache(
		/* [in] */ tkCacheType cacheType,
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UseCache(
		/* [in] */ tkCacheType cacheType,
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UseServer(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UseServer(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CacheSize(
		/* [in] */ tkCacheType cacheType,
		/* [retval][out] */ double *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxCacheSize(
		/* [in] */ tkCacheType cacheType,
		/* [retval][out] */ double *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MaxCacheSize(
		/* [in] */ tkCacheType cacheType,
		/* [in] */ double newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MinScaleToCache(
		/* [retval][out] */ int *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MinScaleToCache(
		/* [in] */ int newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxScaleToCache(
		/* [retval][out] */ int *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MaxScaleToCache(
		/* [in] */ int newVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ClearCache(
		/* [in] */ tkCacheType cacheType) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ClearCache2(
		/* [in] */ tkCacheType cacheType,
		/* [in] */ int ProviderId,
		/* [defaultvalue][in] */ int fromScale = 0,
		/* [defaultvalue][in] */ int toScale = 100) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GlobalCallback(
		/* [retval][out] */ ICallback **retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GlobalCallback(
		/* [in] */ ICallback *newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorMsg(
		/* [in] */ long ErrorCode,
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastErrorCode(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Key(
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Key(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CacheSize2(
		/* [in] */ tkCacheType cacheType,
		/* [defaultvalue][in] */ int provider,
		/* [defaultvalue][in] */ int scale,
		/* [retval][out] */ double *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Serialize(
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Deserialize(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetProxy(
		/* [in] */ BSTR address,
		/* [in] */ int port,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Proxy(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AutodetectProxy(
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DiskCacheFilename(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DiskCacheFilename(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Providers(
		/* [retval][out] */ ITileProviders **pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderId(
		/* [retval][out] */ int *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ProviderId(
		/* [in] */ int newVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetTilesIndices(
		/* [in] */ IExtents *boundsDegrees,
		/* [in] */ int zoom,
		/* [in] */ int ProviderId,
		/* [retval][out] */ IExtents **retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Prefetch(
		/* [in] */ double minLat,
		/* [in] */ double maxLat,
		/* [in] */ double minLng,
		/* [in] */ double maxLng,
		/* [in] */ int zoom,
		/* [in] */ int ProviderId,
		IStopExecution *stop,
		/* [retval][out] */ LONG *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Prefetch2(
		/* [in] */ int minX,
		/* [in] */ int maxX,
		/* [in] */ int minY,
		/* [in] */ int maxY,
		/* [in] */ int zoom,
		/* [in] */ int ProviderId,
		IStopExecution *stop,
		/* [retval][out] */ LONG *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE get_DiskCacheCount(
		/* [in] */ int provider,
		/* [in] */ int zoom,
		/* [in] */ int xMin,
		/* [in] */ int xMax,
		/* [in] */ int yMin,
		/* [in] */ int yMax,
		/* [retval][out] */ LONG *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderName(
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CheckConnection(
		/* [in] */ BSTR url,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetTileBounds(
		/* [in] */ int ProviderId,
		/* [in] */ int zoom,
		/* [in] */ int tileX,
		/* [in] */ int tileY,
		/* [retval][out] */ IExtents **retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentZoom(
		/* [retval][out] */ int *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PrefetchToFolder(
		/* [in] */ IExtents *Extents,
		/* [in] */ int zoom,
		/* [in] */ int ProviderId,
		/* [in] */ BSTR savePath,
		/* [in] */ BSTR fileExtension,
		/* [in] */ IStopExecution *stop,
		/* [retval][out] */ LONG *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DelayRequestTimeout(
		/* [retval][out] */ long *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DelayRequestTimeout(
		/* [in] */ long newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxZoom(
		/* [retval][out] */ int *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MinZoom(
		/* [retval][out] */ int *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ServerProjection(
		/* [retval][out] */ IGeoProjection **retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ProjectionStatus(
		/* [retval][out] */ tkTilesProjectionStatus *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetProxyAuthentication(
		/* [in] */ BSTR username,
		/* [in] */ BSTR password,
		/* [in] */ BSTR domain,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE ClearProxyAuthorization(void) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProxyAuthenticationScheme(
		/* [retval][out] */ tkProxyAuthentication *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ProxyAuthenticationScheme(
		/* [in] */ tkProxyAuthentication newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ProjectionIsSphericalMercator(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

};

EXTERN_C class ITileProviders : public IDispatch
{
public:
	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove(
		/* [in] */ LONG ProviderId,
		/* [in] */ VARIANT_BOOL clearCache,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear(
		VARIANT_BOOL clearCache) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count(
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add(
		/* [in] */ int Id,
		/* [in] */ BSTR Name,
		/* [in] */ BSTR UrlPattern,
		/* [in] */ tkTileProjection Projection,
		/* [defaultvalue][in] */ int MinZoom,
		/* [defaultvalue][in] */ int MaxZoom,
		/* [defaultvalue][in] */ BSTR Copyright,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Id(
		/* [in] */ int Index,
		/* [retval][out] */ LONG *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name(
		/* [in] */ int Index,
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name(
		/* [in] */ int Index,
		/* [in] */ BSTR newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UrlPattern(
		/* [in] */ int Index,
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Projection(
		/* [in] */ int Index,
		/* [retval][out] */ tkTileProjection *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MinZoom(
		/* [in] */ int Index,
		/* [retval][out] */ int *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxZoom(
		/* [in] */ int Index,
		/* [retval][out] */ int *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Version(
		/* [in] */ int Index,
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Version(
		/* [in] */ int Index,
		/* [in] */ BSTR pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IndexByProvider(
		/* [in] */ tkTileProvider provider,
		/* [retval][out] */ int *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IndexByProviderId(
		/* [in] */ int ProviderId,
		/* [retval][out] */ int *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsCustom(
		/* [in] */ int Index,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GlobalCallback(
		/* [retval][out] */ ICallback **retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GlobalCallback(
		/* [in] */ ICallback *newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorMsg(
		/* [in] */ long ErrorCode,
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastErrorCode(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Language(
		/* [in] */ int Index,
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Language(
		/* [in] */ int Index,
		/* [in] */ BSTR twoLetterCode) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GeographicBounds(
		/* [in] */ int Index,
		/* [retval][out] */ IExtents **pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_GeographicBounds(
		/* [in] */ int Index,
		/* [in] */ IExtents *newVal) = 0;

};

EXTERN_C class IMeasuring : public IDispatch
{
public:
	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Length(
		/* [retval][out] */ double *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PointCount(
		/* [retval][out] */ long *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UndoPoint(
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE get_PointXY(
		/* [in] */ long pointIndex,
		/* [out] */ double *X,
		/* [out] */ double *Y,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE get_AreaWithClosingVertex(
		/* [in] */ double lastPointProjX,
		/* [in] */ double lastPointProjY,
		/* [retval][out] */ double *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MeasuringType(
		/* [retval][out] */ tkMeasuringType *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MeasuringType(
		/* [in] */ tkMeasuringType newVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FinishMeasuring(void) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Area(
		/* [retval][out] */ double *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsStopped(
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear(void) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Persistent(
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Persistent(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ShowBearing(
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ShowBearing(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsUsingEllipsoid(
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorMsg(
		/* [in] */ long ErrorCode,
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastErrorCode(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GlobalCallback(
		/* [retval][out] */ ICallback **retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GlobalCallback(
		/* [in] */ ICallback *newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Key(
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Key(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_IsEmpty(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_BearingType(
		/* [retval][out] */ tkBearingType *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_BearingType(
		/* [in] */ tkBearingType newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ShowLength(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ShowLength(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LengthUnits(
		/* [retval][out] */ tkLengthDisplayMode *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LengthUnits(
		/* [in] */ tkLengthDisplayMode newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AreaUnits(
		/* [retval][out] */ tkAreaDisplayMode *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_AreaUnits(
		/* [in] */ tkAreaDisplayMode newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AngleFormat(
		/* [retval][out] */ tkAngleFormat *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_AngleFormat(
		/* [in] */ tkAngleFormat newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AnglePrecision(
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_AnglePrecision(
		/* [in] */ LONG newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AreaPrecision(
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_AreaPrecision(
		/* [in] */ LONG newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LengthPrecision(
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LengthPrecision(
		/* [in] */ LONG newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PointsVisible(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_PointsVisible(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LineColor(
		/* [retval][out] */ OLE_COLOR *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LineColor(
		/* [in] */ OLE_COLOR newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_FillColor(
		/* [retval][out] */ OLE_COLOR *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_FillColor(
		/* [in] */ OLE_COLOR newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_FillTransparency(
		/* [retval][out] */ BYTE *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_FillTransparency(
		/* [in] */ BYTE newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LineWidth(
		/* [retval][out] */ FLOAT *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LineWidth(
		/* [in] */ FLOAT newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LineStyle(
		/* [retval][out] */ tkDashStyle *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LineStyle(
		/* [in] */ tkDashStyle newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PointLabelsVisible(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_PointLabelsVisible(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ShowTotalLength(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ShowTotalLength(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_UndoButton(
		/* [retval][out] */ tkUndoShortcut *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_UndoButton(
		/* [in] */ tkUndoShortcut newVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE Serialize(
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE Deserialize(
		/* [in] */ BSTR state,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

};

EXTERN_C class IShapeValidationInfo : public IDispatch
{
public:
	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ClassName(
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MethodName(
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ParameterName(
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ValidationType(
		/* [retval][out] */ tkShapeValidationType *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ValidationMode(
		/* [retval][out] */ tkShapeValidationMode *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsValid(
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Status(
		/* [retval][out] */ tkShapeValidationStatus *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_WasValidated(
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StillInvalidCount(
		/* [retval][out] */ int *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_WereInvalidCount(
		/* [retval][out] */ int *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FixedCount(
		/* [retval][out] */ int *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SkippedCount(
		/* [retval][out] */ int *retVal) = 0;

};

EXTERN_C class IFieldStatOperations : public IDispatch
{
public:
	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddFieldIndex(
		/* [in] */ int fieldIndex,
		/* [in] */ tkFieldStatOperation operation) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove(
		/* [in] */ int operationIndex,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear(void) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count(
		/* [retval][out] */ int *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Operation(
		/* [in] */ int operationIndex,
		/* [retval][out] */ tkFieldStatOperation *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FieldIndex(
		/* [in] */ int operationIndex,
		/* [retval][out] */ int *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastErrorCode(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorMsg(
		/* [in] */ long ErrorCode,
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddFieldName(
		/* [in] */ BSTR fieldName,
		/* [in] */ tkFieldStatOperation operation) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FieldName(
		/* [in] */ int operationIndex,
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Validate(
		/* [in] */ IShapefile *sf,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_OperationIsValid(
		/* [in] */ int operationIndex,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_OperationIsValidReason(
		/* [in] */ int operationIndex,
		/* [retval][out] */ tkFieldOperationValidity *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Key(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Key(
		/* [in] */ BSTR newVal) = 0;

};

EXTERN_C class IFileManager : public IDispatch
{
public:
	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsSupported(
		/* [in] */ BSTR Filename,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsRgbImage(
		/* [in] */ BSTR Filename,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsGrid(
		/* [in] */ BSTR Filename,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsVectorLayer(
		/* [in] */ BSTR Filename,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_OpenStrategy(
		/* [in] */ BSTR Filename,
		/* [retval][out] */ tkFileOpenStrategy *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CanOpenAs(
		/* [in] */ BSTR Filename,
		/* [in] */ tkFileOpenStrategy openStrategy,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Open(
		/* [in] */ BSTR Filename,
		/* [defaultvalue][in] */ tkFileOpenStrategy openStrategy,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ IDispatch **retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OpenShapefile(
		/* [in] */ BSTR Filename,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ IShapefile **retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OpenRaster(
		/* [in] */ BSTR Filename,
		/* [in] */ tkFileOpenStrategy openStrategy,
		/* [defaultvalue][in] */ ICallback *cBack,
		/* [retval][out] */ IImage **retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsSupportedBy(
		/* [in] */ BSTR Filename,
		/* [in] */ tkSupportType supportType,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastErrorCode(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorMsg(
		/* [in] */ long ErrorCode,
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GlobalCallback(
		/* [retval][out] */ ICallback **pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GlobalCallback(
		/* [in] */ ICallback *newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Key(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Key(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastOpenStrategy(
		/* [retval][out] */ tkFileOpenStrategy *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastOpenFilename(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastOpenIsSuccess(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HasGdalOverviews(
		/* [in] */ BSTR Filename,
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE ClearGdalOverviews(
		/* [in] */ BSTR Filename,
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE BuildGdalOverviews(
		/* [in] */ BSTR Filename,
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE RemoveProxyForGrid(
		/* [in] */ BSTR Filename,
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HasValidProxyForGrid(
		/* [in] */ BSTR Filename,
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE OpenFromDatabase(
		/* [in] */ BSTR connectionString,
		/* [in] */ BSTR LayerNameOrQuery,
		/* [retval][out] */ IOgrLayer **retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE OpenVectorLayer(
		/* [in] */ BSTR Filename,
		/* [defaultvalue][in] */ ShpfileType preferedShapeType,
		/* [defaultvalue][in] */ VARIANT_BOOL forUpdate,
		/* [retval][out] */ IOgrLayer **retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE OpenVectorDatasource(
		/* [in] */ BSTR Filename,
		/* [retval][out] */ IOgrDatasource **retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_CdlgFilter(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_CdlgRasterFilter(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_CdlgVectorFilter(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SupportedGdalFormats(
		/* [retval][out] */ BSTR *pVal) = 0;

};

EXTERN_C class IOgrDatasource : public IDispatch
{
public:
	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorMsg(
		/* [in] */ long ErrorCode,
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastErrorCode(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GlobalCallback(
		/* [retval][out] */ ICallback **retVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_GlobalCallback(
		/* [in] */ ICallback *newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Key(
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Key(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE Close(void) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE Open(
		/* [in] */ BSTR connectionString,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LayerCount(
		/* [retval][out] */ int *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetLayer(
		/* [in] */ int index,
		/* [defaultvalue][in] */ VARIANT_BOOL forUpdate,
		/* [retval][out] */ IOgrLayer **retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DriverName(
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetLayerName(
		/* [in] */ int layerIndex,
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetLayerByName(
		/* [in] */ BSTR LayerName,
		/* [defaultvalue][in] */ VARIANT_BOOL forUpdate,
		/* [retval][out] */ IOgrLayer **retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE RunQuery(
		/* [in] */ BSTR sql,
		/* [retval][out] */ IOgrLayer **retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE DeleteLayer(
		/* [in] */ int layerIndex,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE TestCapability(
		/* [in] */ tkOgrDSCapability capability,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE CreateLayer(
		/* [in] */ BSTR LayerName,
		/* [in] */ ShpfileType shpType,
		/* [defaultvalue][in] */ IGeoProjection *projection,
		/* [defaultvalue][in] */ BSTR creationOptions,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE LayerIndexByName(
		/* [in] */ BSTR LayerName,
		/* [retval][out] */ int *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE ImportShapefile(
		/* [in] */ IShapefile *sf,
		/* [in] */ BSTR LayerName,
		/* [defaultvalue][in] */ BSTR creationOptions,
		/* [defaultvalue][in] */ tkShapeValidationMode shapeValidationMode,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DriverMetadata(
		/* [in] */ tkGdalDriverMetadata metadata,
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DriverMetadataCount(
		/* [retval][out] */ int *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DriverMetadataItem(
		/* [in] */ int metadataIndex,
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE ExecuteSQL(
		/* [in] */ BSTR sql,
		/* [out] */ BSTR *errorMessage,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GdalLastErrorMsg(
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetSchemas(
		/* [retval][out] */ VARIANT *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetLayer2(
		/* [in] */ LONG index,
		/* [in] */ VARIANT_BOOL forUpdate,
		/* [in] */ VARIANT_BOOL newConnection,
		/* [retval][out] */ IOgrLayer **retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE Open2(
		/* [in] */ BSTR connectionString,
		/* [in] */ VARIANT_BOOL forUpdate,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

};


EXTERN_C class IOgrLayer : public IDispatch
{
public:
	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorMsg(
		/* [in] */ long ErrorCode,
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastErrorCode(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GlobalCallback(
		/* [retval][out] */ ICallback **retVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_GlobalCallback(
		/* [in] */ ICallback *newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Key(
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Key(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE Close(void) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Name(
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetBuffer(
		/* [retval][out] */ IShapefile **retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE ReloadFromSource(
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE RedefineQuery(
		/* [in] */ BSTR newSql,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetConnectionString(
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetSourceQuery(
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GeoProjection(
		/* [retval][out] */ IGeoProjection **retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ShapeType(
		/* [retval][out] */ ShpfileType *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DataIsReprojected(
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_FIDColumnName(
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE SaveChanges(
		/* [out] */ int *savedCount,
		/* [defaultvalue][in] */ tkOgrSaveType saveType,
		/* [defaultvalue][in] */ VARIANT_BOOL validateShapes,
		/* [retval][out] */ tkOgrSaveResult *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE TestCapability(
		/* [in] */ tkOgrLayerCapability capability,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_UpdateSourceErrorCount(
		/* [retval][out] */ int *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_UpdateSourceErrorMsg(
		/* [in] */ int errorIndex,
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_UpdateSourceErrorShapeIndex(
		/* [in] */ int errorIndex,
		/* [retval][out] */ int *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_FeatureCount(
		/* [defaultvalue][in] */ VARIANT_BOOL forceLoading,
		/* [retval][out] */ int *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Extents(
		/* [out] */ IExtents **layerExtents,
		/* [defaultvalue][in] */ VARIANT_BOOL forceLoading,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GeometryColumnName(
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SupportsEditing(
		/* [in] */ tkOgrSaveType editingType,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE Serialize(
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE Deserialize(
		/* [in] */ BSTR newVal,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE OpenFromQuery(
		/* [in] */ BSTR connectionString,
		/* [in] */ BSTR sql,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE OpenFromDatabase(
		/* [in] */ BSTR connectionString,
		/* [in] */ BSTR LayerName,
		/* [defaultvalue][in] */ VARIANT_BOOL forUpdate,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SourceType(
		/* [retval][out] */ tkOgrSourceType *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GdalLastErrorMsg(
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DynamicLoading(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DynamicLoading(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxFeatureCount(
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_MaxFeatureCount(
		/* [in] */ LONG newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SupportsStyles(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetNumStyles(
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_StyleName(
		/* [in] */ LONG styleIndex,
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE ClearStyles(
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE RemoveStyle(
		/* [in] */ BSTR styleName,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LabelExpression(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LabelExpression(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LabelPosition(
		/* [retval][out] */ tkLabelPositioning *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LabelPosition(
		/* [in] */ tkLabelPositioning newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LabelOrientation(
		/* [retval][out] */ tkLineLabelOrientation *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LabelOrientation(
		/* [in] */ tkLineLabelOrientation newVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE GenerateCategories(
		/* [in] */ BSTR FieldName,
		/* [in] */ tkClassificationType classificationType,
		/* [in] */ long numClasses,
		/* [in] */ tkMapColor colorStart,
		/* [in] */ tkMapColor colorEnd,
		/* [in] */ tkColorSchemeType schemeType,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ShapeType2D(
		/* [retval][out] */ ShpfileType *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DriverName(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE OpenFromFile(
		/* [in] */ BSTR Filename,
		/* [in] */ VARIANT_BOOL forUpdate,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AvailableShapeTypes(
		/* [retval][out] */ VARIANT *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ActiveShapeType(
		/* [retval][out] */ ShpfileType *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ActiveShapeType(
		/* [in] */ ShpfileType newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_IsExternalDatasource(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE ExtendFromQuery(
		/* [in] */ BSTR sql,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

};

EXTERN_C class IUndoList : public IDispatch
{
public:
	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorMsg(
		/* [in] */ long ErrorCode,
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastErrorCode(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Key(
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Key(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE Undo(
		/* [defaultvalue][in] */ VARIANT_BOOL ZoomToShape,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE Redo(
		/* [defaultvalue][in] */ VARIANT_BOOL ZoomToShape,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_UndoCount(
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RedoCount(
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_TotalLength(
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE BeginBatch(
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE EndBatch(
		/* [retval][out] */ LONG *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE Add(
		/* [in] */ tkUndoOperation operationType,
		/* [in] */ LONG LayerHandle,
		/* [in] */ LONG ShapeIndex,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear(void) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE ClearForLayer(
		/* [in] */ LONG LayerHandle) = 0;

};

EXTERN_C class IIdentifier : public IDispatch
{
public:
	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HotTracking(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_HotTracking(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_IdentifierMode(
		/* [retval][out] */ tkIdentifierMode *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_IdentifierMode(
		/* [in] */ tkIdentifierMode newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_OutlineColor(
		/* [retval][out] */ OLE_COLOR *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_OutlineColor(
		/* [in] */ OLE_COLOR newVal) = 0;

};

EXTERN_C class ISelectionList : public IDispatch
{
public:
	virtual /* [id] */ HRESULT STDMETHODCALLTYPE AddShape(
		/* [in] */ LONG layerHandle,
		/* [in] */ LONG shapeIndex) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Count(
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LayerHandle(
		/* [in] */ LONG index,
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ShapeIndex(
		/* [in] */ LONG index,
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear(void) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE RemoveByLayerHandle(
		/* [in] */ LONG layerHandle) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE AddPixel(
		/* [in] */ LONG layerHandle,
		/* [in] */ LONG column,
		/* [in] */ LONG row) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LayerType(
		/* [in] */ LONG index,
		/* [retval][out] */ tkLayerType *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RasterX(
		/* [in] */ LONG index,
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RasterY(
		/* [in] */ LONG index,
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE TogglePixel(
		/* [in] */ LONG layerHandle,
		/* [in] */ LONG column,
		/* [in] */ LONG row) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Row(
		/* [in] */ LONG index,
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Column(
		/* [in] */ LONG index,
		/* [retval][out] */ LONG *pVal) = 0;

};

EXTERN_C class IDrawingRectangle : public IDispatch
{
public:
	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_X(
		/* [retval][out] */ DOUBLE *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_X(
		/* [in] */ DOUBLE newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Y(
		/* [retval][out] */ DOUBLE *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Y(
		/* [in] */ DOUBLE newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Width(
		/* [retval][out] */ DOUBLE *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Width(
		/* [in] */ DOUBLE newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Height(
		/* [retval][out] */ DOUBLE *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Height(
		/* [in] */ DOUBLE newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Visible(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Visible(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ReferenceType(
		/* [retval][out] */ tkDrawReferenceList *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ReferenceType(
		/* [in] */ tkDrawReferenceList newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_FillTransparency(
		/* [retval][out] */ BYTE *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_FillTransparency(
		/* [in] */ BYTE newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Color(
		/* [retval][out] */ OLE_COLOR *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Color(
		/* [in] */ OLE_COLOR newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LineWidth(
		/* [retval][out] */ float *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LineWidth(
		/* [in] */ float newVal) = 0;

};

EXTERN_C class IGdalRasterBand : public IDispatch
{
public:
	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_NoDataValue(
		/* [retval][out] */ DOUBLE *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Minimum(
		/* [retval][out] */ DOUBLE *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Maximum(
		/* [retval][out] */ DOUBLE *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_OverviewCount(
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ColorInterpretation(
		/* [retval][out] */ tkColorInterpretation *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ColorInterpretation(
		/* [in] */ tkColorInterpretation newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DataType(
		/* [retval][out] */ tkGdalDataType *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_XSize(
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_YSize(
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_BlockSizeX(
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_BlockSizeY(
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_UnitType(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Scale(
		/* [retval][out] */ DOUBLE *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Offset(
		/* [retval][out] */ DOUBLE *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HasColorTable(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MetadataCount(
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MetadataItem(
		/* [in] */ LONG itemIndex,
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ColorTable(
		/* [retval][out] */ IGridColorScheme **pVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetUniqueValues(
		/* [in] */ LONG maxCount,
		/* [out] */ VARIANT *arr,
		/* [retval][out] */ VARIANT_BOOL *result) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetDefaultHistogram(
		/* [in] */ VARIANT_BOOL forceCalculate,
		/* [retval][out] */ IHistogram **retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetHistogram(
		/* [in] */ DOUBLE minValue,
		/* [in] */ DOUBLE maxValue,
		/* [in] */ LONG numBuckets,
		/* [in] */ VARIANT_BOOL includeOutOfRange,
		/* [in] */ VARIANT_BOOL allowApproximate,
		/* [retval][out] */ IHistogram **retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Overview(
		/* [in] */ LONG overviewIndex,
		/* [retval][out] */ IGdalRasterBand **pVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetStatistics(
		/* [in] */ VARIANT_BOOL allowApproximate,
		/* [in] */ VARIANT_BOOL forceCalculation,
		/* [out] */ DOUBLE *minimum,
		/* [out] */ DOUBLE *maximum,
		/* [out] */ DOUBLE *mean,
		/* [out] */ DOUBLE *stdDev,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE Classify(
		double minValue,
		double maxValue,
		/* [in] */ tkClassificationType classification,
		/* [in] */ LONG numCategories,
		/* [retval][out] */ IGridColorScheme **retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE ComputeMinMax(
		/* [in] */ VARIANT_BOOL allowApproximate,
		/* [out] */ DOUBLE *minimum,
		/* [out] */ DOUBLE *maximum,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Value(
		/* [in] */ LONG column,
		/* [in] */ LONG row,
		/* [out] */ double *pVal,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE ComputeLocalStatistics(
		/* [in] */ LONG column,
		/* [in] */ LONG row,
		/* [in] */ LONG range,
		/* [out] */ double *minimum,
		/* [out] */ double *maximum,
		/* [out] */ double *mean,
		/* [out] */ double *stdDev,
		/* [out] */ LONG *count,
		/* [retval][out] */ VARIANT_BOOL *vb) = 0;

};

EXTERN_C class IHistogram : public IDispatch
{
public:
	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_NumBuckets(
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MinValue(
		/* [retval][out] */ DOUBLE *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxValue(
		/* [retval][out] */ DOUBLE *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Count(
		/* [in] */ LONG bucketIndex,
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Value(
		/* [in] */ LONG bucketIndex,
		/* [retval][out] */ DOUBLE *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_TotalCount(
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE GenerateColorScheme(
		/* [in] */ LONG numClasses,
		/* [retval][out] */ IGridColorScheme **retVal) = 0;

};

EXTERN_C class IGdalDataset : public IDispatch
{
public:
	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Driver(
		/* [retval][out] */ IGdalDriver **pVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE Open(
		/* [in] */ BSTR Filename,
		/* [in] */ VARIANT_BOOL readOnly,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE Close(void) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetGeoTransform(
		/* [in] */ DOUBLE xLeft,
		/* [in] */ DOUBLE dX,
		/* [in] */ DOUBLE yProjOnX,
		/* [in] */ DOUBLE yTop,
		/* [in] */ DOUBLE xProjOnY,
		/* [in] */ DOUBLE dY,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetProjection(
		/* [in] */ BSTR Projection,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SubDatasetCount(
		/* [retval][out] */ LONG *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetSubDatasetName(
		/* [in] */ int subDatasetIndex,
		/* [retval][out] */ BSTR *retVal) = 0;

};

EXTERN_C class IGdalDriver : public IDispatch
{
public:
	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Metadata(
		/* [in] */ tkGdalDriverMetadata metadata,
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MetadataCount(
		/* [retval][out] */ int *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MetadataItem(
		/* [in] */ int metadataIndex,
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Name(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_IsVector(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_IsRaster(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MetadataItemType(
		/* [in] */ int metadataIndex,
		/* [retval][out] */ tkGdalDriverMetadata *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MetadataItemValue(
		/* [in] */ int metadataIndex,
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MetadataItemKey(
		/* [in] */ int metadataIndex,
		/* [retval][out] */ BSTR *pVal) = 0;

};

EXTERN_C class IGdalDriverManager : public IDispatch
{
public:
	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DriverCount(
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Driver(
		/* [in] */ long driverIndex,
		/* [retval][out] */ IGdalDriver **pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DriverByName(
		/* [in] */ BSTR driverName,
		/* [retval][out] */ IGdalDriver **pVal) = 0;

};

EXTERN_C class IFunction : public IDispatch
{
public:
	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Name(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Alias(
		/* [in] */ long aliasIndex,
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_NumAliases(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_NumParameters(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Group(
		/* [retval][out] */ tkFunctionGroup *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Description(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ParameterName(
		/* [in] */ LONG parameterIndex,
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ParameterDescription(
		/* [in] */ LONG parameterIndex,
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Signature(
		/* [retval][out] */ BSTR *pVal) = 0;

};

EXTERN_C class IExpression : public IDispatch
{
public:
	virtual /* [id] */ HRESULT STDMETHODCALLTYPE Parse(
		/* [in] */ BSTR expr,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE Calculate(
		/* [out] */ VARIANT *result,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastErrorMessage(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastErrorPosition(
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_NumSupportedFunctions(
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SupportedFunction(
		/* [in] */ LONG functionIndex,
		/* [retval][out] */ IFunction **pVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE ParseForTable(
		/* [in] */ BSTR expr,
		/* [in] */ ITable *tbl,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Table(
		/* [retval][out] */ ITable **pVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE CalculateForTableRow(
		/* [in] */ LONG rowIndex,
		/* [in] */ LONG targetFieldIndex,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE CalculateForTableRow2(
		/* [in] */ LONG rowIndex,
		/* [out] */ VARIANT *result,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

};

EXTERN_C class IWmsLayer : public IDispatch
{
public:
	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastErrorCode(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorMsg(
		/* [in] */ long ErrorCode,
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Key(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Key(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Name(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Name(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_BoundingBox(
		/* [retval][out] */ IExtents **pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_BoundingBox(
		/* [in] */ IExtents *newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Epsg(
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Epsg(
		/* [in] */ LONG newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Layers(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Layers(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_BaseUrl(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_BaseUrl(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Id(
		/* [retval][out] */ LONG *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Id(
		/* [in] */ LONG newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Format(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Format(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_IsEmpty(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MapExtents(
		/* [retval][out] */ IExtents **pVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE Close(void) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE Serialize(
		/* [retval][out] */ BSTR *retVal) = 0;

	virtual /* [id] */ HRESULT STDMETHODCALLTYPE Deserialize(
		/* [in] */ BSTR state,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GeoProjection(
		/* [retval][out] */ IGeoProjection **pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Opacity(
		/* [retval][out] */ BYTE *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Opacity(
		/* [in] */ BYTE newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Brightness(
		/* [retval][out] */ FLOAT *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Brightness(
		/* [in] */ FLOAT newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Contrast(
		/* [retval][out] */ FLOAT *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Contrast(
		/* [in] */ FLOAT newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Saturation(
		/* [retval][out] */ FLOAT *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Saturation(
		/* [in] */ FLOAT newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Hue(
		/* [retval][out] */ FLOAT *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Hue(
		/* [in] */ FLOAT newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Gamma(
		/* [retval][out] */ FLOAT *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Gamma(
		/* [in] */ FLOAT newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_UseCache(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_UseCache(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DoCaching(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DoCaching(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_TransparentColor(
		/* [retval][out] */ OLE_COLOR *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_TransparentColor(
		/* [in] */ OLE_COLOR newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_UseTransparentColor(
		/* [retval][out] */ VARIANT_BOOL *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_UseTransparentColor(
		/* [in] */ VARIANT_BOOL newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Version(
		/* [retval][out] */ tkWmsVersion *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Version(
		/* [in] */ tkWmsVersion newVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Styles(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Styles(
		/* [in] */ BSTR newVal) = 0;

};

EXTERN_C class IGdalUtils : public IDispatch
{
public:
	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastErrorCode(
		/* [retval][out] */ long *pVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorMsg(
		/* [in] */ long ErrorCode,
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GdalRasterWarp(
		/* [in] */ BSTR bstrSrcFilename,
		/* [in] */ BSTR bstrDstFilename,
		/* [in] */ SAFEARRAY * options,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GlobalCallback(
		/* [retval][out] */ ICallback **pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GlobalCallback(
		/* [in] */ ICallback *newVal) = 0;

	virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Key(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Key(
		/* [in] */ BSTR newVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GdalVectorTranslate(
		/* [in] */ BSTR bstrSrcFilename,
		/* [in] */ BSTR bstrDstFilename,
		/* [in] */ SAFEARRAY * options,
		/* [defaultvalue][in] */ VARIANT_BOOL useSharedConnection,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ClipVectorWithVector(
		/* [in] */ BSTR bstrSubjectFilename,
		/* [in] */ BSTR bstrOverlayFilename,
		/* [in] */ BSTR bstrDstFilename,
		/* [defaultvalue][in] */ VARIANT_BOOL useSharedConnection,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DetailedErrorMsg(
		/* [retval][out] */ BSTR *pVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GdalRasterTranslate(
		/* [in] */ BSTR bstrSrcFilename,
		/* [in] */ BSTR bstrDstFilename,
		/* [in] */ SAFEARRAY * options,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GdalBuildOverviews(
		/* [in] */ BSTR bstrSrcFilename,
		/* [in] */ tkGDALResamplingMethod resamplingMethod,
		/* [in] */ SAFEARRAY * overviewList,
		/* [in] */ SAFEARRAY * bandList,
		/* [in] */ SAFEARRAY * configOptions,
		/* [retval][out] */ VARIANT_BOOL *retVal) = 0;

};


EXTERN_C class _DMap : public IDispatch
{
};

EXTERN_C class _ITableEvents : public IDispatch
{
};


EXTERN_C class _DMapEvents : public IDispatch
{
};


#endif


