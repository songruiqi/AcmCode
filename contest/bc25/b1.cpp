#include<iostream>
#include<cstdio>
using namespace std;
__int64 a[51][51]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,7,25,79,241,727,2185,6559,19681,59047,177145,531439,1594321,4782967,14348905,43046719,129140161,387420487,162261458,486784378,460353131,381059390,143178167,429534505,288603512,865810540,597431610,792294827,376884471,130653410,391960234,175880699,527642101,582926300,748778897,246336681,739010047,217030131,651090397,953271188,859813554,579440652,738321953,214965849,644897551,934692650,804077940,412233810,236701427,710104285,0,1,25,265,2161,16081,115465,816985,5745121,40294561,282298105,976795298,839692790,884226769,208719199,518429996,801196817,124938311,424250101,618796508,278713016,792403605,71062736,70151803,209200617,618818343,794970502,954519895,850818500,463267325,765484884,926235072,187168241,420746060,276927575,933608575,520606690,600286966,70129241,95266244,479948422,798893118,910014375,323388364,123581913,444663564,851415496,176220159,882476329,124139952,709396773,0,1,79,2161,41503,693601,10924399,167578321,539870769,282062775,520839894,847554794,975022633,508263032,957465555,155788762,270964897,735892653,135779493,910787155,357570322,965196247,883333867,669440757,722744962,844422113,395002694,143549078,36231129,784734469,640798502,243175407,694198739,623501441,479805722,48999228,581156020,288834515,277941486,621981077,4405303,302937303,744164275,189499403,910645363,773481891,309003358,312969472,631457533,604716642,724062224,0,1,241,16081,693601,24997921,831719761,666530619,134160841,808519312,853472452,711047192,997554953,122693721,266461476,746404059,649982140,644251481,3878823,419430103,859483576,18032347,581115054,608669761,763293500,399124225,976226965,93312085,635456087,354901253,917460338,170076746,503626018,156992277,512243954,735277651,353386394,949461508,123426208,353075578,368743830,310203644,155287890,325841560,664987290,951421263,741596539,210705968,830172559,339409558,298280362,0,1,727,115465,10924399,831719761,366997048,451380633,760503107,159173257,406998054,680399865,97275538,47070580,77708934,530047073,901579400,401939593,371252392,845957395,157938406,588986364,621212526,944205986,830328930,566031485,280284470,38054829,334231378,428263765,193767943,468188533,227934019,163494299,60897510,624743518,596068476,957215314,307972146,48519268,430704294,978475790,319736659,926846673,474230237,780005907,288928100,57847091,652486356,979817309,91595493,0,1,2185,816985,167578321,666530619,451380633,805746507,529699133,70076855,773636139,839167023,365301280,500917783,499070118,281468948,398579326,6510275,763116622,213313497,870538133,56616871,226534023,155860523,380933537,693391729,242539445,915797833,897914686,868683547,503060436,387866609,747797582,453790635,667301770,454074935,406582042,59771632,366103892,923074906,909472709,181713750,450942263,74179320,301056816,182282118,774603875,119748595,865071325,391124900,997657907,0,1,6559,5745121,539870769,134160841,760503107,529699133,508617146,576869176,929882662,903449519,45253291,811553156,670230361,113215424,841672356,408022994,122602254,458291856,347545694,137410385,368997883,484986733,263714354,398565302,533265838,532229845,217308263,40733368,8076848,779269383,869777279,546092116,158793272,612490845,314821898,758948083,695089783,223857573,190539185,215770714,902948685,308544892,265241987,760348729,791340,299768468,839763123,649393598,569682307,0,1,19681,40294561,282062775,808519312,159173257,70076855,576869176,129941055,805192536,766797165,136944707,641136483,509074871,397569190,570621560,941235027,618909610,288100549,425274681,268801019,560167193,407491963,403129854,876229557,210717666,121675000,109402572,43030730,651647367,669544294,707924756,169511832,522913781,72835031,27042149,946960747,259915685,332418074,292694259,338116937,668244426,37900120,259664804,629682853,28262059,732184809,320537907,284223432,357477394,0,1,59047,282298105,520839894,853472452,406998054,773636139,929882662,805192536,528985464,531535656,104289959,134114431,946412290,882749730,772625522,244535294,802891652,170339922,798135978,281071965,420490075,656244945,642161006,475305361,775160902,36355784,237577216,66260964,402162415,7472863,286377896,65431036,247455665,641442464,110020469,530459243,485440050,890879678,428777770,103367193,474982140,567312679,715244673,212108941,432279796,238550077,574666294,608938639,232513427,0,1,177145,976795298,847554794,711047192,680399865,839167023,903449519,766797165,531535656,937136493,348926778,889346511,178271660,154066191,730898,263783574,480055625,398440905,426439720,214001916,429881636,798851796,156955737,85677752,63762022,201637667,391879550,862290131,575365699,223337023,177074621,40155175,439937389,193221725,76938487,288405628,382425656,569811143,130902379,567081068,88947567,23474001,903356308,148060016,713727232,580154024,814359778,232921690,20071289,0,1,531439,839692790,975022633,997554953,97275538,365301280,45253291,136944707,104289959,348926778,523238862,648612683,525854095,751019545,360295435,863959449,967177318,931653203,640483429,386609040,251876340,839962813,744462902,647812028,791341112,935860302,319781586,825391129,544174435,283187176,99775857,385042310,930088758,225276347,260025551,573424979,766037214,596932468,2134845,62120195,555032380,398237903,870376058,296516882,114981542,197313736,742835941,965031642,160572120,0,1,1594321,884226769,508263032,122693721,47070580,500917783,811553156,641136483,134114431,889346511,648612683,180764641,532415573,328273303,132641155,520563395,138866582,299251176,944539922,329418045,111968768,190074010,704716743,22786029,458544624,327263521,626962625,247383348,462465852,732495536,863154936,651634436,684943211,382748737,478856627,91223685,808369201,695844928,802760053,178004339,736822627,749500300,144807850,798957717,711387992,249366711,193863550,839403226,463432974,0,1,4782967,208719199,957465555,266461476,77708934,499070118,670230361,509074871,946412290,178271660,525854095,532415573,997298149,32441383,173010594,612726511,496554943,703251194,241438912,289078840,410478044,662619694,776659010,967354995,396524259,353674784,335208740,436016195,397436308,372273825,852816448,655225367,644091315,402524147,986119673,817547453,398523559,468592959,193728935,163501160,953053129,494312818,291512388,112966791,500796640,686413744,197987338,798635202,91807277,0,1,14348905,518429996,155788762,746404059,530047073,281468948,113215424,397569190,882749730,154066191,751019545,328273303,32441383,273350846,870349443,220661533,247023593,423360883,79497866,531376204,348096304,327954249,426484203,597101266,946665213,859561642,370900045,809332468,277926871,137262366,517169475,736515205,864445067,264135724,914702785,712765117,658001579,764852221,681854815,934743320,57915532,144531592,81147963,692842378,954080491,475392506,560301602,965477354,650137790,0,1,43046719,801196817,270964897,649982140,901579400,398579326,841672356,570621560,772625522,730898,360295435,132641155,173010594,870349443,233615557,199368466,754062441,779919909,44327601,225345923,895651387,231470835,407586689,172689705,296900671,915232279,551375402,193631889,353235216,25417292,137012502,317333458,13305153,623361303,883116549,347323519,814171500,813295913,34008459,991763492,487771734,427585211,688100725,283286135,745399640,698471843,909795113,918080852,707684650,0,1,129140161,124938311,735892653,644251481,401939593,6510275,408022994,941235027,244535294,263783574,863959449,520563395,612726511,220661533,199368466,160874925,645330403,824048335,170214364,882771881,185516548,608310993,451449617,233932553,682534723,42794179,780741017,90957758,409459856,960475967,863939350,133785106,365997582,371535255,695092598,193938705,614950750,600543623,117336016,256862149,493833081,618484049,304805447,808155638,648862761,239531839,161159329,302520780,294653598,0,1,387420487,424250101,135779493,3878823,371252392,763116622,122602254,618909610,802891652,480055625,967177318,138866582,496554943,247023593,754062441,645330403,287262291,825072384,665761914,499267867,984319883,257860478,765561920,907481493,49110558,426925294,42824905,649699198,199943301,811198160,428973416,93012963,127851126,37509350,214759279,645498592,524100436,663976603,999403610,372484474,614524774,122365929,623105960,773401343,155646094,777320831,298600375,204902714,444505800,0,1,162261458,618796508,910787155,419430103,845957395,213313497,458291856,288100549,170339922,398440905,931653203,299251176,703251194,423360883,779919909,824048335,825072384,748289348,640094801,239419922,139341090,262836496,408490251,810901654,499320863,104435733,603116746,271581472,645066793,880704379,11951138,97820492,307638959,16920803,725574617,437293956,792777995,435816996,464603185,590680320,849137885,381778707,608447658,38787203,25602204,964511516,39126757,126923421,377792768,0,1,486784378,278713016,357570322,859483576,157938406,870538133,347545694,425274681,798135978,426439720,640483429,944539922,241438912,79497866,44327601,170214364,665761914,640094801,128123451,667665136,316052084,610910228,537084883,416155592,271590067,448563882,103691791,72645481,755031340,25656543,294013133,256126703,577967963,433424615,591855184,114763641,197221357,327239195,560598071,621576884,582208361,694752523,76703294,487396585,569699214,205366776,427558965,528439158,336431537,0,1,460353131,792403605,965196247,18032347,588986364,56616871,137410385,268801019,281071965,214001916,386609040,329418045,289078840,531376204,225345923,882771881,499267867,239419922,667665136,261622043,319024628,601222901,639542961,500098198,885693783,199607936,528047051,887966348,896174217,720022497,637574575,325472715,209860885,398289100,984405504,760899850,536039690,370768510,297973917,151694642,822816706,808215780,411241281,854347936,700085142,793441031,334827585,95568767,779088161,0,1,381059390,71062736,883333867,581115054,621212526,226534023,368997883,560167193,420490075,429881636,251876340,111968768,410478044,348096304,895651387,185516548,984319883,139341090,316052084,319024628,139306386,384981097,329503531,870847382,856025817,264561570,184226990,409466091,293118865,715301686,430901039,360818337,290710845,572099324,352992909,796507368,245939945,705202441,743076658,399728985,653051309,191161781,555010063,329165650,988486600,381867353,775227070,259558120,480877679,0,1,143178167,70151803,669440757,608669761,944205986,155860523,484986733,407491963,656244945,798851796,839962813,190074010,662619694,327954249,231470835,608310993,257860478,262836496,610910228,601222901,384981097,341590571,134561974,183296879,387056134,574424309,654707603,726807852,99535247,68143185,839922502,592918405,10559609,603661371,562528051,883976450,946150562,211059439,184818385,592515832,998453471,549055275,515370888,587037358,852211726,534158028,296711310,763317116,727691995,0,1,429534505,209200617,722744962,763293500,830328930,380933537,263714354,403129854,642161006,156955737,744462902,704716743,776659010,426484203,407586689,451449617,765561920,408490251,537084883,639542961,329503531,134561974,588769908,210154258,991558043,857076180,649858209,900774858,403469038,453075883,126387420,442832997,486473234,386891364,739262487,148110221,253997808,591981928,305391298,247513120,530285659,822597245,354275995,569617436,601650211,710678542,518556733,774578772,409448986,0,1,288603512,618818343,844422113,399124225,566031485,693391729,398565302,876229557,475305361,85677752,647812028,22786029,967354995,597101266,172689705,233932553,907481493,810901654,416155592,500098198,870847382,183296879,210154258,468285437,747477688,181079456,856310311,666682256,566952444,328973601,772643539,182134163,89854340,982649837,100325140,542071445,601645558,631578405,56433040,140377953,814473068,118815717,29954375,102395540,650875660,476580785,195843702,143948059,805440947,0,1,865810540,794970502,395002694,976226965,280284470,242539445,533265838,210717666,775160902,63762022,791341112,458544624,396524259,946665213,296900671,682534723,49110558,499320863,271590067,885693783,856025817,387056134,991558043,747477688,318481025,122832234,6275438,615056662,494745645,631169104,833810415,521374076,418036917,483336655,804315933,571000117,129281486,484141748,155276149,492822111,440533512,335536546,105295619,219625319,391063264,219573153,142114318,277437622,593753143,0,1,597431610,954519895,143549078,93312085,38054829,915797833,532229845,121675000,36355784,201637667,935860302,327263521,353674784,859561642,915232279,42794179,426925294,104435733,448563882,199607936,264561570,574424309,857076180,181079456,122832234,66670434,534124101,385852816,584526190,375252351,725148795,9903530,73834821,125053947,211088912,990486245,35152191,370810997,389529917,677405332,132700508,637754432,493860309,848505942,55817814,988727956,465176570,329198766,835993210,0,1,792294827,850818500,36231129,635456087,334231378,897914686,217308263,109402572,237577216,391879550,319781586,626962625,335208740,370900045,551375402,780741017,42824905,603116746,103691791,528047051,184226990,654707603,649858209,856310311,6275438,534124101,64392855,139108476,711087084,336962197,471013499,802700624,534867386,49696613,190828676,853182237,9686383,658301095,556031724,861116896,978705978,437153443,848398574,236369514,545089237,575298045,831574541,520090960,80459733,0,1,376884471,463267325,784734469,354901253,428263765,868683547,40733368,43030730,66260964,862290131,825391129,247383348,436016195,809332468,193631889,90957758,649699198,271581472,72645481,887966348,409466091,726807852,900774858,666682256,615056662,385852816,139108476,36869165,970409598,55406676,439817671,58838762,578348430,996305075,866132363,62358834,768522334,819178148,456984575,328073131,478274836,740045501,810525215,193156510,420326374,20050358,44633511,865484178,364420153,0,1,130653410,765484884,640798502,917460338,193767943,503060436,8076848,651647367,402162415,575365699,544174435,462465852,397436308,277926871,353235216,409459856,199943301,645066793,755031340,896174217,293118865,99535247,403469038,566952444,494745645,584526190,711087084,970409598,581640340,677219765,838865254,957820954,192629804,563416845,727856863,622613762,915196393,382114854,374008036,155226929,390351829,321443768,238965239,17789243,69661837,306889437,597995697,313111189,180499163,0,1,391960234,926235072,243175407,170076746,468188533,387866609,779269383,669544294,7472863,223337023,283187176,732495536,372273825,137262366,25417292,960475967,811198160,880704379,25656543,720022497,715301686,68143185,453075883,328973601,631169104,375252351,336962197,55406676,677219765,736227813,706769761,617987607,740481432,412022226,514218283,605683244,969175852,139183812,700537966,454508763,372009135,728004801,786425274,582078026,396169424,344411481,93267449,672721420,7462369,0,1,175880699,187168241,694198739,503626018,227934019,747797582,869777279,707924756,286377896,177074621,99775857,863154936,852816448,517169475,137012502,863939350,428973416,11951138,294013133,637574575,430901039,839922502,126387420,772643539,833810415,725148795,471013499,439817671,838865254,706769761,126520830,991644730,235615345,463192063,667392416,252735869,462039452,871863164,509893096,148820163,153246938,62884518,806128908,770729310,217750139,310695679,814286674,738794155,669179646,0,1,527642101,420746060,623501441,156992277,163494299,453790635,546092116,169511832,65431036,40155175,385042310,651634436,655225367,736515205,317333458,133785106,93012963,97820492,256126703,325472715,360818337,592918405,442832997,182134163,521374076,9903530,802700624,58838762,957820954,617987607,991644730,805353576,451571267,183089580,112987231,440070394,12606431,78472383,659798591,960773581,370101289,128436197,198164562,233187043,344738738,466654937,412067309,274317665,255986800,0,1,582926300,276927575,479805722,512243954,60897510,667301770,158793272,522913781,247455665,439937389,930088758,684943211,644091315,864445067,13305153,365997582,127851126,307638959,577967963,209860885,290710845,10559609,486473234,89854340,418036917,73834821,534867386,578348430,192629804,740481432,235615345,451571267,155070266,119476813,155354062,473945408,293038553,167017749,850492596,771030153,577462992,287570245,357580963,836271926,518783686,520524341,718727016,816312802,713916261,0,1,748778897,933608575,48999228,735277651,624743518,454074935,612490845,72835031,641442464,193221725,225276347,382748737,402524147,264135724,623361303,371535255,37509350,16920803,433424615,398289100,572099324,603661371,386891364,982649837,483336655,125053947,49696613,996305075,563416845,412022226,463192063,183089580,119476813,577055197,3506833,974902326,395575761,724011737,206578236,566330759,653747384,571632282,456459502,417243555,795333334,449081271,927450617,817589678,423194533,0,1,246336681,520606690,581156020,353386394,596068476,406582042,314821898,27042149,110020469,76938487,260025551,478856627,986119673,914702785,883116549,695092598,214759279,725574617,591855184,984405504,352992909,562528051,739262487,100325140,804315933,211088912,190828676,866132363,727856863,514218283,667392416,112987231,155354062,3506833,590331554,368867652,8250452,161188783,690956575,269192022,243743076,833440469,762213598,453020436,138086620,979342374,47020861,311345811,730220205,0,1,739010047,600286966,288834515,949461508,957215314,59771632,758948083,946960747,530459243,288405628,573424979,91223685,817547453,712765117,347323519,193938705,645498592,437293956,114763641,760899850,796507368,883976450,148110221,542071445,571000117,990486245,853182237,62358834,622613762,605683244,252735869,440070394,473945408,974902326,368867652,829766056,595540151,391257946,503550182,168250059,162235886,385010321,992746669,517084792,6872482,982458374,350897789,77253457,474338867,0,1,217030131,70129241,277941486,123426208,307972146,366103892,695089783,259915685,485440050,382425656,766037214,808369201,398523559,658001579,814171500,614950750,524100436,792777995,197221357,536039690,245939945,946150562,253997808,601645558,129281486,35152191,9686383,768522334,915196393,969175852,462039452,12606431,293038553,395575761,8250452,595540151,699553411,104150351,555584714,602613250,651441049,413209386,180790322,510360556,605553646,237079366,98106117,665277127,246542382,0,1,651090397,95266244,621981077,353075578,48519268,923074906,223857573,332418074,890879678,569811143,596932468,695844928,468592959,764852221,813295913,600543623,663976603,435816996,327239195,370768510,705202441,211059439,591981928,631578405,484141748,370810997,658301095,819178148,382114854,139183812,871863164,78472383,167017749,724011737,161188783,391257946,104150351,54936201,946059944,589552821,5999447,505654417,367402503,82257267,347760907,42998237,130598862,941925436,13676273,0,1,953271188,479948422,4405303,368743830,430704294,909472709,190539185,292694259,428777770,130902379,2134845,802760053,193728935,681854815,34008459,117336016,999403610,464603185,560598071,297973917,743076658,184818385,305391298,56433040,155276149,389529917,556031724,456984575,374008036,700537966,509893096,659798591,850492596,206578236,690956575,503550182,555584714,946059944,706242289,723467451,216217700,176813639,853817728,521239389,723672128,830745275,772386231,48144727,919552856,0,1,859813554,798893118,302937303,310203644,978475790,181713750,215770714,338116937,103367193,567081068,62120195,178004339,163501160,934743320,991763492,256862149,372484474,590680320,621576884,151694642,399728985,592515832,247513120,140377953,492822111,677405332,861116896,328073131,155226929,454508763,148820163,960773581,771030153,566330759,269192022,168250059,602613250,589552821,723467451,394441755,556297688,373170490,50400667,24499393,561014638,864896906,575327071,791884992,810250235,0,1,579440652,910014375,744164275,155287890,319736659,450942263,902948685,668244426,474982140,88947567,555032380,736822627,953053129,57915532,487771734,493833081,614524774,849137885,582208361,822816706,653051309,998453471,530285659,814473068,440533512,132700508,978705978,478274836,390351829,372009135,153246938,370101289,577462992,653747384,243743076,162235886,651441049,5999447,216217700,556297688,80374692,522824283,983817538,705319102,599207480,816109093,497371527,659580786,957930830,0,1,738321953,323388364,189499403,325841560,926846673,74179320,308544892,37900120,567312679,23474001,398237903,749500300,494312818,144531592,427585211,618484049,122365929,381778707,694752523,808215780,191161781,549055275,822597245,118815717,335536546,637754432,437153443,740045501,321443768,728004801,62884518,128436197,287570245,571632282,833440469,385010321,413209386,505654417,176813639,373170490,522824283,681701174,811647757,328438688,943929830,697126920,726340137,851936086,571982339,0,1,214965849,123581913,910645363,664987290,474230237,301056816,265241987,259664804,715244673,903356308,870376058,144807850,291512388,81147963,688100725,304805447,623105960,608447658,76703294,411241281,555010063,515370888,354275995,29954375,105295619,493860309,848398574,810525215,238965239,786425274,806128908,198164562,357580963,456459502,762213598,992746669,180790322,367402503,853817728,50400667,983817538,811647757,45302015,914532195,725795583,117990347,357714502,794725333,755461800,0,1,644897551,444663564,773481891,951421263,780005907,182282118,760348729,629682853,212108941,148060016,296516882,798957717,112966791,692842378,283286135,808155638,773401343,38787203,487396585,854347936,329165650,587037358,569617436,102395540,219625319,848505942,236369514,193156510,17789243,582078026,770729310,233187043,836271926,417243555,453020436,517084792,510360556,82257267,521239389,24499393,705319102,328438688,914532195,308415479,52224326,723829888,285059962,875445688,280892936,0,1,934692650,851415496,309003358,741596539,288928100,774603875,791340,28262059,432279796,713727232,114981542,711387992,500796640,954080491,745399640,648862761,155646094,25602204,569699214,700085142,988486600,852211726,601650211,650875660,391063264,55817814,545089237,420326374,69661837,396169424,217750139,344738738,518783686,795333334,138086620,6872482,605553646,347760907,723672128,561014638,599207480,943929830,725795583,52224326,320182297,760026713,514424726,815291809,690834891,0,1,804077940,176220159,312969472,210705968,57847091,119748595,299768468,732184809,238550077,580154024,197313736,249366711,686413744,475392506,698471843,239531839,777320831,964511516,205366776,793441031,381867353,534158028,710678542,476580785,219573153,988727956,575298045,20050358,306889437,344411481,310695679,466654937,520524341,449081271,979342374,982458374,237079366,42998237,830745275,864896906,816109093,697126920,117990347,723829888,760026713,908590587,327227020,440664493,613780473,0,1,412233810,882476329,631457533,830172559,652486356,865071325,839763123,320537907,574666294,814359778,742835941,193863550,197987338,560301602,909795113,161159329,298600375,39126757,427558965,334827585,775227070,296711310,518556733,195843702,142114318,465176570,831574541,44633511,597995697,93267449,814286674,412067309,718727016,927450617,47020861,350897789,98106117,130598862,772386231,575327071,497371527,726340137,357714502,285059962,514424726,327227020,148663311,662890102,698957205,0,1,236701427,124139952,604716642,339409558,979817309,391124900,649393598,284223432,608938639,232921690,965031642,839403226,798635202,965477354,918080852,302520780,204902714,126923421,528439158,95568767,259558120,763317116,774578772,143948059,277437622,329198766,520090960,865484178,313111189,672721420,738794155,274317665,816312802,817589678,311345811,77253457,665277127,941925436,48144727,791884992,659580786,851936086,794725333,875445688,815291809,440664493,662890102,302596803,396369217,0,1,710104285,709396773,724062224,298280362,91595493,997657907,569682307,357477394,232513427,20071289,160572120,463432974,91807277,650137790,707684650,294653598,444505800,377792768,336431537,779088161,480877679,727691995,409448986,805440947,593753143,835993210,80459733,364420153,180499163,7462369,669179646,255986800,713916261,423194533,730220205,474338867,246542382,13676273,919552856,810250235,957930830,571982339,755461800,280892936,690834891,613780473,698957205,396369217,676170171};
int main(){
	int n,m;
	while(scanf("%d%d",&n,&m)!=EOF){
		printf("%I64d\n",a[n][m]);
	}
	return 0;
}