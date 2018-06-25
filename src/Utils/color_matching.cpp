#include "color_matching.hpp"

ColorMatching CIE_cm_fcts;

ColorMatching::ColorMatching() {}

float ColorMatching::x_function(unsigned wavelength)
{
    unsigned index { (wavelength - MIN_WAVELENGTH) / SPECTRAL_RES };
    return _color_matching_fcts[index].x;
}

float ColorMatching::y_function(unsigned wavelength)
{
    unsigned index { (wavelength - MIN_WAVELENGTH) / SPECTRAL_RES };
    return _color_matching_fcts[index].y;
}

float ColorMatching::z_function(unsigned wavelength)
{
    unsigned index { (wavelength - MIN_WAVELENGTH) / SPECTRAL_RES };
    return _color_matching_fcts[index].z;
}

Vec3f& ColorMatching::operator[](int index)
{
    return _color_matching_fcts[index];
}

const Vec3f& ColorMatching::operator[](int index) const
{
    return _color_matching_fcts[index];
}

Vec3f ColorMatching::_color_matching_fcts[471] =
{
    Vec3f(0.0001299f, 3.917e-06f, 0.0006061f),
    Vec3f(0.000145847f, 4.393581e-06f, 0.0006808792f),
    Vec3f(0.0001638021f, 4.929604e-06f, 0.0007651456f),
    Vec3f(0.0001840037f, 5.532136e-06f, 0.0008600124f),
    Vec3f(0.0002066902f, 6.208245e-06f, 0.0009665928f),
    Vec3f(0.0002321f, 6.965e-06f, 0.001086f),
    Vec3f(0.000260728f, 7.813219e-06f, 0.001220586f),
    Vec3f(0.000293075f, 8.767336e-06f, 0.001372729f),
    Vec3f(0.000329388f, 9.839844e-06f, 0.001543579f),
    Vec3f(0.000369914f, 1.104323e-05f, 0.001734286f),
    Vec3f(0.0004149f, 1.239e-05f, 0.001946f),
    Vec3f(0.0004641587f, 1.388641e-05f, 0.002177777f),
    Vec3f(0.000518986f, 1.555728e-05f, 0.002435809f),
    Vec3f(0.000581854f, 1.744296e-05f, 0.002731953f),
    Vec3f(0.0006552347f, 1.958375e-05f, 0.003078064f),
    Vec3f(0.0007416f, 2.202e-05f, 0.003486f),
    Vec3f(0.0008450296f, 2.483965e-05f, 0.003975227f),
    Vec3f(0.0009645268f, 2.804126e-05f, 0.00454088f),
    Vec3f(0.001094949f, 3.153104e-05f, 0.00515832f),
    Vec3f(0.001231154f, 3.521521e-05f, 0.005802907f),
    Vec3f(0.001368f, 3.9e-05f, 0.006450001f),
    Vec3f(0.00150205f, 4.28264e-05f, 0.007083216f),
    Vec3f(0.001642328f, 4.69146e-05f, 0.007745488f),
    Vec3f(0.001802382f, 5.15896e-05f, 0.008501152f),
    Vec3f(0.001995757f, 5.71764e-05f, 0.009414544f),
    Vec3f(0.002236f, 6.4e-05f, 0.01054999f),
    Vec3f(0.002535385f, 7.234421e-05f, 0.0119658f),
    Vec3f(0.002892603f, 8.221224e-05f, 0.01365587f),
    Vec3f(0.003300829f, 9.350816e-05f, 0.01558805f),
    Vec3f(0.003753236f, 0.0001061361f, 0.01773015f),
    Vec3f(0.004243f, 0.00012f, 0.02005001f),
    Vec3f(0.004762389f, 0.000134984f, 0.02251136f),
    Vec3f(0.005330048f, 0.000151492f, 0.02520288f),
    Vec3f(0.005978712f, 0.000170208f, 0.02827972f),
    Vec3f(0.006741117f, 0.000191816f, 0.03189704f),
    Vec3f(0.00765f, 0.000217f, 0.03621f),
    Vec3f(0.008751373f, 0.0002469067f, 0.04143771f),
    Vec3f(0.01002888f, 0.00028124f, 0.04750372f),
    Vec3f(0.0114217f, 0.00031852f, 0.05411988f),
    Vec3f(0.01286901f, 0.0003572667f, 0.06099803f),
    Vec3f(0.01431f, 0.000396f, 0.06785001f),
    Vec3f(0.01570443f, 0.0004337147f, 0.07448632f),
    Vec3f(0.01714744f, 0.000473024f, 0.08136156f),
    Vec3f(0.01878122f, 0.000517876f, 0.08915364f),
    Vec3f(0.02074801f, 0.0005722187f, 0.09854048f),
    Vec3f(0.02319f, 0.00064f, 0.1102f),
    Vec3f(0.02620736f, 0.00072456f, 0.1246133f),
    Vec3f(0.02978248f, 0.0008255f, 0.1417017f),
    Vec3f(0.03388092f, 0.00094116f, 0.1613035f),
    Vec3f(0.03846824f, 0.00106988f, 0.1832568f),
    Vec3f(0.04351f, 0.00121f, 0.2074f),
    Vec3f(0.0489956f, 0.001362091f, 0.2336921f),
    Vec3f(0.0550226f, 0.001530752f, 0.2626114f),
    Vec3f(0.0617188f, 0.001720368f, 0.2947746f),
    Vec3f(0.069212f, 0.001935323f, 0.3307985f),
    Vec3f(0.07763f, 0.00218f, 0.3713f),
    Vec3f(0.08695811f, 0.0024548f, 0.4162091f),
    Vec3f(0.09717672f, 0.002764f, 0.4654642f),
    Vec3f(0.1084063f, 0.0031178f, 0.5196948f),
    Vec3f(0.1207672f, 0.0035264f, 0.5795303f),
    Vec3f(0.13438f, 0.004f, 0.6456f),
    Vec3f(0.1493582f, 0.00454624f, 0.7184838f),
    Vec3f(0.1653957f, 0.00515932f, 0.7967133f),
    Vec3f(0.1819831f, 0.00582928f, 0.8778459f),
    Vec3f(0.198611f, 0.00654616f, 0.959439f),
    Vec3f(0.21477f, 0.0073f, 1.0390501f),
    Vec3f(0.2301868f, 0.008086507f, 1.1153673f),
    Vec3f(0.2448797f, 0.00890872f, 1.1884971f),
    Vec3f(0.2587773f, 0.00976768f, 1.2581233f),
    Vec3f(0.2718079f, 0.01066443f, 1.3239296f),
    Vec3f(0.2839f, 0.0116f, 1.3856f),
    Vec3f(0.2949438f, 0.01257317f, 1.4426352f),
    Vec3f(0.3048965f, 0.01358272f, 1.4948035f),
    Vec3f(0.3137873f, 0.01462968f, 1.5421903f),
    Vec3f(0.3216454f, 0.01571509f, 1.5848807f),
    Vec3f(0.3285f, 0.01684f, 1.62296f),
    Vec3f(0.3343513f, 0.01800736f, 1.6564048f),
    Vec3f(0.3392101f, 0.01921448f, 1.6852959f),
    Vec3f(0.3431213f, 0.02045392f, 1.7098745f),
    Vec3f(0.3461296f, 0.02171824f, 1.7303821f),
    Vec3f(0.34828f, 0.023f, 1.74706f),
    Vec3f(0.3495999f, 0.02429461f, 1.7600446f),
    Vec3f(0.3501474f, 0.02561024f, 1.7696233f),
    Vec3f(0.350013f, 0.02695857f, 1.7762637f),
    Vec3f(0.349287f, 0.02835125f, 1.7804334f),
    Vec3f(0.34806f, 0.0298f, 1.7826f),
    Vec3f(0.3463733f, 0.03131083f, 1.7829682f),
    Vec3f(0.3442624f, 0.03288368f, 1.7816998f),
    Vec3f(0.3418088f, 0.03452112f, 1.7791982f),
    Vec3f(0.3390941f, 0.03622571f, 1.7758671f),
    Vec3f(0.3362f, 0.038f, 1.77211f),
    Vec3f(0.3331977f, 0.03984667f, 1.7682589f),
    Vec3f(0.3300411f, 0.041768f, 1.764039f),
    Vec3f(0.3266357f, 0.043766f, 1.7589438f),
    Vec3f(0.3228868f, 0.04584267f, 1.7524663f),
    Vec3f(0.3187f, 0.048f, 1.7441f),
    Vec3f(0.3140251f, 0.05024368f, 1.7335595f),
    Vec3f(0.308884f, 0.05257304f, 1.7208581f),
    Vec3f(0.3032904f, 0.05498056f, 1.7059369f),
    Vec3f(0.2972579f, 0.05745872f, 1.6887372f),
    Vec3f(0.2908f, 0.06f, 1.6692f),
    Vec3f(0.2839701f, 0.06260197f, 1.6475287f),
    Vec3f(0.2767214f, 0.06527752f, 1.6234127f),
    Vec3f(0.2689178f, 0.06804208f, 1.5960223f),
    Vec3f(0.2604227f, 0.07091109f, 1.564528f),
    Vec3f(0.2511f, 0.0739f, 1.5281f),
    Vec3f(0.2408475f, 0.077016f, 1.4861114f),
    Vec3f(0.2298512f, 0.0802664f, 1.4395215f),
    Vec3f(0.2184072f, 0.0836668f, 1.3898799f),
    Vec3f(0.2068115f, 0.0872328f, 1.3387362f),
    Vec3f(0.19536f, 0.09098f, 1.28764f),
    Vec3f(0.1842136f, 0.09491755f, 1.2374223f),
    Vec3f(0.1733273f, 0.09904584f, 1.1878243f),
    Vec3f(0.1626881f, 0.1033674f, 1.1387611f),
    Vec3f(0.1522833f, 0.1078846f, 1.090148f),
    Vec3f(0.1421f, 0.1126f, 1.0419f),
    Vec3f(0.1321786f, 0.117532f, 0.9941976f),
    Vec3f(0.1225696f, 0.1226744f, 0.9473473f),
    Vec3f(0.1132752f, 0.1279928f, 0.9014531f),
    Vec3f(0.1042979f, 0.1334528f, 0.8566193f),
    Vec3f(0.09564f, 0.13902f, 0.8129501f),
    Vec3f(0.08729955f, 0.1446764f, 0.7705173f),
    Vec3f(0.07930804f, 0.1504693f, 0.7294448f),
    Vec3f(0.07171776f, 0.1564619f, 0.6899136f),
    Vec3f(0.06458099f, 0.1627177f, 0.6521049f),
    Vec3f(0.05795001f, 0.1693f, 0.6162f),
    Vec3f(0.05186211f, 0.1762431f, 0.5823286f),
    Vec3f(0.04628152f, 0.1835581f, 0.5504162f),
    Vec3f(0.04115088f, 0.1912735f, 0.5203376f),
    Vec3f(0.03641283f, 0.199418f, 0.4919673f),
    Vec3f(0.03201f, 0.20802f, 0.46518f),
    Vec3f(0.0279172f, 0.2171199f, 0.4399246f),
    Vec3f(0.0241444f, 0.2267345f, 0.4161836f),
    Vec3f(0.020687f, 0.2368571f, 0.3938822f),
    Vec3f(0.0175404f, 0.2474812f, 0.3729459f),
    Vec3f(0.0147f, 0.2586f, 0.3533f),
    Vec3f(0.01216179f, 0.2701849f, 0.3348578f),
    Vec3f(0.00991996f, 0.2822939f, 0.3175521f),
    Vec3f(0.00796724f, 0.2950505f, 0.3013375f),
    Vec3f(0.006296346f, 0.308578f, 0.2861686f),
    Vec3f(0.0049f, 0.323f, 0.272f),
    Vec3f(0.003777173f, 0.3384021f, 0.2588171f),
    Vec3f(0.00294532f, 0.3546858f, 0.2464838f),
    Vec3f(0.00242488f, 0.3716986f, 0.2347718f),
    Vec3f(0.002236293f, 0.3892875f, 0.2234533f),
    Vec3f(0.0024f, 0.4073f, 0.2123f),
    Vec3f(0.00292552f, 0.4256299f, 0.2011692f),
    Vec3f(0.00383656f, 0.4443096f, 0.1901196f),
    Vec3f(0.00517484f, 0.4633944f, 0.1792254f),
    Vec3f(0.00698208f, 0.4829395f, 0.1685608f),
    Vec3f(0.0093f, 0.503f, 0.1582f),
    Vec3f(0.01214949f, 0.5235693f, 0.1481383f),
    Vec3f(0.01553588f, 0.544512f, 0.1383758f),
    Vec3f(0.01947752f, 0.56569f, 0.1289942f),
    Vec3f(0.02399277f, 0.5869653f, 0.1200751f),
    Vec3f(0.0291f, 0.6082f, 0.1117f),
    Vec3f(0.03481485f, 0.6293456f, 0.1039048f),
    Vec3f(0.04112016f, 0.6503068f, 0.09666748f),
    Vec3f(0.04798504f, 0.6708752f, 0.08998272f),
    Vec3f(0.05537861f, 0.6908424f, 0.08384531f),
    Vec3f(0.06327f, 0.71f, 0.07824999f),
    Vec3f(0.07163501f, 0.7281852f, 0.07320899f),
    Vec3f(0.08046224f, 0.7454636f, 0.06867816f),
    Vec3f(0.08973996f, 0.7619694f, 0.06456784f),
    Vec3f(0.09945645f, 0.7778368f, 0.06078835f),
    Vec3f(0.1096f, 0.7932f, 0.05725001f),
    Vec3f(0.1201674f, 0.8081104f, 0.05390435f),
    Vec3f(0.1311145f, 0.8224962f, 0.05074664f),
    Vec3f(0.1423679f, 0.8363068f, 0.04775276f),
    Vec3f(0.1538542f, 0.8494916f, 0.04489859f),
    Vec3f(0.1655f, 0.862f, 0.04216f),
    Vec3f(0.1772571f, 0.8738108f, 0.03950728f),
    Vec3f(0.18914f, 0.8849624f, 0.03693564f),
    Vec3f(0.2011694f, 0.8954936f, 0.03445836f),
    Vec3f(0.2133658f, 0.9054432f, 0.03208872f),
    Vec3f(0.2257499f, 0.9148501f, 0.02984f),
    Vec3f(0.2383209f, 0.9237348f, 0.02771181f),
    Vec3f(0.2510668f, 0.9320924f, 0.02569444f),
    Vec3f(0.2639922f, 0.9399226f, 0.02378716f),
    Vec3f(0.2771017f, 0.9472252f, 0.02198925f),
    Vec3f(0.2904f, 0.954f, 0.0203f),
    Vec3f(0.3038912f, 0.9602561f, 0.01871805f),
    Vec3f(0.3175726f, 0.9660074f, 0.01724036f),
    Vec3f(0.3314384f, 0.9712606f, 0.01586364f),
    Vec3f(0.3454828f, 0.9760225f, 0.01458461f),
    Vec3f(0.3597f, 0.9803f, 0.0134f),
    Vec3f(0.3740839f, 0.9840924f, 0.01230723f),
    Vec3f(0.3886396f, 0.9874182f, 0.01130188f),
    Vec3f(0.4033784f, 0.9903128f, 0.01037792f),
    Vec3f(0.4183115f, 0.9928116f, 0.009529306f),
    Vec3f(0.4334499f, 0.9949501f, 0.008749999f),
    Vec3f(0.4487953f, 0.9967108f, 0.0080352f),
    Vec3f(0.464336f, 0.9980983f, 0.0073816f),
    Vec3f(0.480064f, 0.999112f, 0.0067854f),
    Vec3f(0.4959713f, 0.9997482f, 0.0062428f),
    Vec3f(0.5120501f, 1.f, 0.005749999f),
    Vec3f(0.5282959f, 0.9998567f, 0.0053036f),
    Vec3f(0.5446916f, 0.9993046f, 0.0048998f),
    Vec3f(0.5612094f, 0.9983255f, 0.0045342f),
    Vec3f(0.5778215f, 0.9968987f, 0.0042024f),
    Vec3f(0.5945f, 0.995f, 0.0039f),
    Vec3f(0.6112209f, 0.9926005f, 0.0036232f),
    Vec3f(0.6279758f, 0.9897426f, 0.0033706f),
    Vec3f(0.6447602f, 0.9864444f, 0.0031414f),
    Vec3f(0.6615697f, 0.9827241f, 0.0029348f),
    Vec3f(0.6784f, 0.9786f, 0.002749999f),
    Vec3f(0.6952392f, 0.9740837f, 0.0025852f),
    Vec3f(0.7120586f, 0.9691712f, 0.0024386f),
    Vec3f(0.7288284f, 0.9638568f, 0.0023094f),
    Vec3f(0.7455188f, 0.9581349f, 0.0021968f),
    Vec3f(0.7621f, 0.952f, 0.0021f),
    Vec3f(0.7785432f, 0.9454504f, 0.002017733f),
    Vec3f(0.7948256f, 0.9384992f, 0.0019482f),
    Vec3f(0.8109264f, 0.9311628f, 0.0018898f),
    Vec3f(0.8268248f, 0.9234576f, 0.001840933f),
    Vec3f(0.8425f, 0.9154f, 0.0018f),
    Vec3f(0.8579325f, 0.9070064f, 0.001766267f),
    Vec3f(0.8730816f, 0.8982772f, 0.0017378f),
    Vec3f(0.8878944f, 0.8892048f, 0.0017112f),
    Vec3f(0.9023181f, 0.8797816f, 0.001683067f),
    Vec3f(0.9163f, 0.87f, 0.001650001f),
    Vec3f(0.9297995f, 0.8598613f, 0.001610133f),
    Vec3f(0.9427984f, 0.849392f, 0.0015644f),
    Vec3f(0.9552776f, 0.838622f, 0.0015136f),
    Vec3f(0.9672179f, 0.8275813f, 0.001458533f),
    Vec3f(0.9786f, 0.8163f, 0.0014f),
    Vec3f(0.9893856f, 0.8047947f, 0.001336667f),
    Vec3f(0.9995488f, 0.793082f, 0.00127f),
    Vec3f(1.0090892f, 0.781192f, 0.001205f),
    Vec3f(1.0180064f, 0.7691547f, 0.001146667f),
    Vec3f(1.0263f, 0.757f, 0.0011f),
    Vec3f(1.0339827f, 0.7447541f, 0.0010688f),
    Vec3f(1.040986f, 0.7324224f, 0.0010494f),
    Vec3f(1.047188f, 0.7200036f, 0.0010356f),
    Vec3f(1.0524667f, 0.7074965f, 0.0010212f),
    Vec3f(1.0567f, 0.6949f, 0.001f),
    Vec3f(1.0597944f, 0.6822192f, 0.00096864f),
    Vec3f(1.0617992f, 0.6694716f, 0.00092992f),
    Vec3f(1.0628068f, 0.6566744f, 0.00088688f),
    Vec3f(1.0629096f, 0.6438448f, 0.00084256f),
    Vec3f(1.0622f, 0.631f, 0.0008f),
    Vec3f(1.0607352f, 0.6181555f, 0.00076096f),
    Vec3f(1.0584436f, 0.6053144f, 0.00072368f),
    Vec3f(1.0552244f, 0.5924756f, 0.00068592f),
    Vec3f(1.0509768f, 0.5796379f, 0.00064544f),
    Vec3f(1.0456f, 0.5668f, 0.0006f),
    Vec3f(1.0390369f, 0.5539611f, 0.0005478667f),
    Vec3f(1.0313608f, 0.5411372f, 0.0004916f),
    Vec3f(1.0226662f, 0.5283528f, 0.0004354f),
    Vec3f(1.0130477f, 0.5156323f, 0.0003834667f),
    Vec3f(1.0026f, 0.503f, 0.00034f),
    Vec3f(0.9913675f, 0.4904688f, 0.0003072533f),
    Vec3f(0.9793314f, 0.4780304f, 0.00028316f),
    Vec3f(0.9664916f, 0.4656776f, 0.00026544f),
    Vec3f(0.9528479f, 0.4534032f, 0.0002518133f),
    Vec3f(0.9384f, 0.4412f, 0.00024f),
    Vec3f(0.923194f, 0.42908f, 0.0002295467f),
    Vec3f(0.907244f, 0.417036f, 0.00022064f),
    Vec3f(0.890502f, 0.405032f, 0.00021196f),
    Vec3f(0.87292f, 0.393032f, 0.0002021867f),
    Vec3f(0.8544499f, 0.381f, 0.00019f),
    Vec3f(0.835084f, 0.3689184f, 0.0001742133f),
    Vec3f(0.814946f, 0.3568272f, 0.00015564f),
    Vec3f(0.794186f, 0.3447768f, 0.00013596f),
    Vec3f(0.772954f, 0.3328176f, 0.0001168533f),
    Vec3f(0.7514f, 0.321f, 1e-04f),
    Vec3f(0.7295836f, 0.3093381f, 8.613333e-05f),
    Vec3f(0.7075888f, 0.2978504f, 7.46e-05f),
    Vec3f(0.6856022f, 0.2865936f, 6.5e-05f),
    Vec3f(0.6638104f, 0.2756245f, 5.693333e-05f),
    Vec3f(0.6424f, 0.265f, 4.999999e-05f),
    Vec3f(0.6215149f, 0.2547632f, 4.416e-05f),
    Vec3f(0.6011138f, 0.2448896f, 3.948e-05f),
    Vec3f(0.5811052f, 0.2353344f, 3.572e-05f),
    Vec3f(0.5613977f, 0.2260528f, 3.264e-05f),
    Vec3f(0.5419f, 0.217f, 3e-05f),
    Vec3f(0.5225995f, 0.2081616f, 2.765333e-05f),
    Vec3f(0.5035464f, 0.1995488f, 2.556e-05f),
    Vec3f(0.4847436f, 0.1911552f, 2.364e-05f),
    Vec3f(0.4661939f, 0.1829744f, 2.181333e-05f),
    Vec3f(0.4479f, 0.175f, 2e-05f),
    Vec3f(0.4298613f, 0.1672235f, 1.813333e-05f),
    Vec3f(0.412098f, 0.1596464f, 1.62e-05f),
    Vec3f(0.394644f, 0.1522776f, 1.42e-05f),
    Vec3f(0.3775333f, 0.1451259f, 1.213333e-05f),
    Vec3f(0.3608f, 0.1382f, 1e-05f),
    Vec3f(0.3444563f, 0.1315003f, 7.733333e-06f),
    Vec3f(0.3285168f, 0.1250248f, 5.4e-06f),
    Vec3f(0.3130192f, 0.1187792f, 3.2e-06f),
    Vec3f(0.2980011f, 0.1127691f, 1.333333e-06f),
    Vec3f(0.2835f, 0.107f, 0.f),
    Vec3f(0.2695448f, 0.1014762f, 0.f),
    Vec3f(0.2561184f, 0.09618864f, 0.f),
    Vec3f(0.2431896f, 0.09112296f, 0.f),
    Vec3f(0.2307272f, 0.08626485f, 0.f),
    Vec3f(0.2187f, 0.0816f, 0.f),
    Vec3f(0.2070971f, 0.07712064f, 0.f),
    Vec3f(0.1959232f, 0.07282552f, 0.f),
    Vec3f(0.1851708f, 0.06871008f, 0.f),
    Vec3f(0.1748323f, 0.06476976f, 0.f),
    Vec3f(0.1649f, 0.061f, 0.f),
    Vec3f(0.1553667f, 0.05739621f, 0.f),
    Vec3f(0.14623f, 0.05395504f, 0.f),
    Vec3f(0.13749f, 0.05067376f, 0.f),
    Vec3f(0.1291467f, 0.04754965f, 0.f),
    Vec3f(0.1212f, 0.04458f, 0.f),
    Vec3f(0.1136397f, 0.04175872f, 0.f),
    Vec3f(0.106465f, 0.03908496f, 0.f),
    Vec3f(0.09969044f, 0.03656384f, 0.f),
    Vec3f(0.09333061f, 0.03420048f, 0.f),
    Vec3f(0.0874f, 0.032f, 0.f),
    Vec3f(0.08190096f, 0.02996261f, 0.f),
    Vec3f(0.07680428f, 0.02807664f, 0.f),
    Vec3f(0.07207712f, 0.02632936f, 0.f),
    Vec3f(0.06768664f, 0.02470805f, 0.f),
    Vec3f(0.0636f, 0.0232f, 0.f),
    Vec3f(0.05980685f, 0.02180077f, 0.f),
    Vec3f(0.05628216f, 0.02050112f, 0.f),
    Vec3f(0.05297104f, 0.01928108f, 0.f),
    Vec3f(0.04981861f, 0.01812069f, 0.f),
    Vec3f(0.04677f, 0.017f, 0.f),
    Vec3f(0.04378405f, 0.01590379f, 0.f),
    Vec3f(0.04087536f, 0.01483718f, 0.f),
    Vec3f(0.03807264f, 0.01381068f, 0.f),
    Vec3f(0.03540461f, 0.01283478f, 0.f),
    Vec3f(0.0329f, 0.01192f, 0.f),
    Vec3f(0.03056419f, 0.01106831f, 0.f),
    Vec3f(0.02838056f, 0.01027339f, 0.f),
    Vec3f(0.02634484f, 0.009533311f, 0.f),
    Vec3f(0.02445275f, 0.008846157f, 0.f),
    Vec3f(0.0227f, 0.00821f, 0.f),
    Vec3f(0.02108429f, 0.007623781f, 0.f),
    Vec3f(0.01959988f, 0.007085424f, 0.f),
    Vec3f(0.01823732f, 0.006591476f, 0.f),
    Vec3f(0.01698717f, 0.006138485f, 0.f),
    Vec3f(0.01584f, 0.005723f, 0.f),
    Vec3f(0.01479064f, 0.005343059f, 0.f),
    Vec3f(0.01383132f, 0.004995796f, 0.f),
    Vec3f(0.01294868f, 0.004676404f, 0.f),
    Vec3f(0.0121292f, 0.004380075f, 0.f),
    Vec3f(0.01135916f, 0.004102f, 0.f),
    Vec3f(0.01062935f, 0.003838453f, 0.f),
    Vec3f(0.009938846f, 0.003589099f, 0.f),
    Vec3f(0.009288422f, 0.003354219f, 0.f),
    Vec3f(0.008678854f, 0.003134093f, 0.f),
    Vec3f(0.008110916f, 0.002929f, 0.f),
    Vec3f(0.007582388f, 0.002738139f, 0.f),
    Vec3f(0.007088746f, 0.002559876f, 0.f),
    Vec3f(0.006627313f, 0.002393244f, 0.f),
    Vec3f(0.006195408f, 0.002237275f, 0.f),
    Vec3f(0.005790346f, 0.002091f, 0.f),
    Vec3f(0.005409826f, 0.001953587f, 0.f),
    Vec3f(0.005052583f, 0.00182458f, 0.f),
    Vec3f(0.004717512f, 0.00170358f, 0.f),
    Vec3f(0.004403507f, 0.001590187f, 0.f),
    Vec3f(0.004109457f, 0.001484f, 0.f),
    Vec3f(0.003833913f, 0.001384496f, 0.f),
    Vec3f(0.003575748f, 0.001291268f, 0.f),
    Vec3f(0.003334342f, 0.001204092f, 0.f),
    Vec3f(0.003109075f, 0.001122744f, 0.f),
    Vec3f(0.002899327f, 0.001047f, 0.f),
    Vec3f(0.002704348f, 0.0009765896f, 0.f),
    Vec3f(0.00252302f, 0.0009111088f, 0.f),
    Vec3f(0.002354168f, 0.0008501332f, 0.f),
    Vec3f(0.002196616f, 0.0007932384f, 0.f),
    Vec3f(0.00204919f, 0.00074f, 0.f),
    Vec3f(0.00191096f, 0.0006900827f, 0.f),
    Vec3f(0.001781438f, 0.00064331f, 0.f),
    Vec3f(0.00166011f, 0.000599496f, 0.f),
    Vec3f(0.001546459f, 0.0005584547f, 0.f),
    Vec3f(0.001439971f, 0.00052f, 0.f),
    Vec3f(0.001340042f, 0.0004839136f, 0.f),
    Vec3f(0.001246275f, 0.0004500528f, 0.f),
    Vec3f(0.001158471f, 0.0004183452f, 0.f),
    Vec3f(0.00107643f, 0.0003887184f, 0.f),
    Vec3f(0.0009999493f, 0.0003611f, 0.f),
    Vec3f(0.0009287358f, 0.0003353835f, 0.f),
    Vec3f(0.0008624332f, 0.0003114404f, 0.f),
    Vec3f(0.0008007503f, 0.0002891656f, 0.f),
    Vec3f(0.000743396f, 0.0002684539f, 0.f),
    Vec3f(0.0006900786f, 0.0002492f, 0.f),
    Vec3f(0.0006405156f, 0.0002313019f, 0.f),
    Vec3f(0.0005945021f, 0.0002146856f, 0.f),
    Vec3f(0.0005518646f, 0.0001992884f, 0.f),
    Vec3f(0.000512429f, 0.0001850475f, 0.f),
    Vec3f(0.0004760213f, 0.0001719f, 0.f),
    Vec3f(0.0004424536f, 0.0001597781f, 0.f),
    Vec3f(0.0004115117f, 0.0001486044f, 0.f),
    Vec3f(0.0003829814f, 0.0001383016f, 0.f),
    Vec3f(0.0003566491f, 0.0001287925f, 0.f),
    Vec3f(0.0003323011f, 0.00012f, 0.f),
    Vec3f(0.0003097586f, 0.0001118595f, 0.f),
    Vec3f(0.0002888871f, 0.0001043224f, 0.f),
    Vec3f(0.0002695394f, 9.73356e-05f, 0.f),
    Vec3f(0.0002515682f, 9.084587e-05f, 0.f),
    Vec3f(0.0002348261f, 8.48e-05f, 0.f),
    Vec3f(0.000219171f, 7.914667e-05f, 0.f),
    Vec3f(0.0002045258f, 7.3858e-05f, 0.f),
    Vec3f(0.0001908405f, 6.8916e-05f, 0.f),
    Vec3f(0.0001780654f, 6.430267e-05f, 0.f),
    Vec3f(0.0001661505f, 6e-05f, 0.f),
    Vec3f(0.0001550236f, 5.598187e-05f, 0.f),
    Vec3f(0.0001446219f, 5.22256e-05f, 0.f),
    Vec3f(0.0001349098f, 4.87184e-05f, 0.f),
    Vec3f(0.000125852f, 4.544747e-05f, 0.f),
    Vec3f(0.000117413f, 4.24e-05f, 0.f),
    Vec3f(0.0001095515f, 3.956104e-05f, 0.f),
    Vec3f(0.0001022245f, 3.691512e-05f, 0.f),
    Vec3f(9.539445e-05f, 3.444868e-05f, 0.f),
    Vec3f(8.90239e-05f, 3.214816e-05f, 0.f),
    Vec3f(8.307527e-05f, 3e-05f, 0.f),
    Vec3f(7.751269e-05f, 2.799125e-05f, 0.f),
    Vec3f(7.231304e-05f, 2.611356e-05f, 0.f),
    Vec3f(6.745778e-05f, 2.436024e-05f, 0.f),
    Vec3f(6.292844e-05f, 2.272461e-05f, 0.f),
    Vec3f(5.870652e-05f, 2.12e-05f, 0.f),
    Vec3f(5.477028e-05f, 1.977855e-05f, 0.f),
    Vec3f(5.109918e-05f, 1.845285e-05f, 0.f),
    Vec3f(4.767654e-05f, 1.721687e-05f, 0.f),
    Vec3f(4.448567e-05f, 1.606459e-05f, 0.f),
    Vec3f(4.150994e-05f, 1.499e-05f, 0.f),
    Vec3f(3.873324e-05f, 1.398728e-05f, 0.f),
    Vec3f(3.614203e-05f, 1.305155e-05f, 0.f),
    Vec3f(3.372352e-05f, 1.217818e-05f, 0.f),
    Vec3f(3.146487e-05f, 1.136254e-05f, 0.f),
    Vec3f(2.935326e-05f, 1.06e-05f, 0.f),
    Vec3f(2.737573e-05f, 9.885877e-06f, 0.f),
    Vec3f(2.552433e-05f, 9.217304e-06f, 0.f),
    Vec3f(2.379376e-05f, 8.592362e-06f, 0.f),
    Vec3f(2.21787e-05f, 8.009133e-06f, 0.f),
    Vec3f(2.067383e-05f, 7.4657e-06f, 0.f),
    Vec3f(1.927226e-05f, 6.959567e-06f, 0.f),
    Vec3f(1.79664e-05f, 6.487995e-06f, 0.f),
    Vec3f(1.674991e-05f, 6.048699e-06f, 0.f),
    Vec3f(1.561648e-05f, 5.639396e-06f, 0.f),
    Vec3f(1.455977e-05f, 5.2578e-06f, 0.f),
    Vec3f(1.357387e-05f, 4.901771e-06f, 0.f),
    Vec3f(1.265436e-05f, 4.56972e-06f, 0.f),
    Vec3f(1.179723e-05f, 4.260194e-06f, 0.f),
    Vec3f(1.099844e-05f, 3.971739e-06f, 0.f),
    Vec3f(1.025398e-05f, 3.7029e-06f, 0.f),
    Vec3f(9.559646e-06f, 3.452163e-06f, 0.f),
    Vec3f(8.912044e-06f, 3.218302e-06f, 0.f),
    Vec3f(8.308358e-06f, 3.0003e-06f, 0.f),
    Vec3f(7.745769e-06f, 2.797139e-06f, 0.f),
    Vec3f(7.221456e-06f, 2.6078e-06f, 0.f),
    Vec3f(6.732475e-06f, 2.43122e-06f, 0.f),
    Vec3f(6.276423e-06f, 2.266531e-06f, 0.f),
    Vec3f(5.851304e-06f, 2.113013e-06f, 0.f),
    Vec3f(5.455118e-06f, 1.969943e-06f, 0.f),
    Vec3f(5.085868e-06f, 1.8366e-06f, 0.f),
    Vec3f(4.741466e-06f, 1.71223e-06f, 0.f),
    Vec3f(4.420236e-06f, 1.596228e-06f, 0.f),
    Vec3f(4.120783e-06f, 1.48809e-06f, 0.f),
    Vec3f(3.841716e-06f, 1.387314e-06f, 0.f),
    Vec3f(3.581652e-06f, 1.2934e-06f, 0.f),
    Vec3f(3.339127e-06f, 1.20582e-06f, 0.f),
    Vec3f(3.112949e-06f, 1.124143e-06f, 0.f),
    Vec3f(2.902121e-06f, 1.048009e-06f, 0.f),
    Vec3f(2.705645e-06f, 9.77058e-07f, 0.f),
    Vec3f(2.522525e-06f, 9.1093e-07f, 0.f),
    Vec3f(2.351726e-06f, 8.49251e-07f, 0.f),
    Vec3f(2.192415e-06f, 7.91721e-07f, 0.f),
    Vec3f(2.043902e-06f, 7.3809e-07f, 0.f),
    Vec3f(1.905497e-06f, 6.8811e-07f, 0.f),
    Vec3f(1.776509e-06f, 6.4153e-07f, 0.f),
    Vec3f(1.656215e-06f, 5.9809e-07f, 0.f),
    Vec3f(1.544022e-06f, 5.57575e-07f, 0.f),
    Vec3f(1.43944e-06f, 5.19808e-07f, 0.f),
    Vec3f(1.341977e-06f, 4.84612e-07f, 0.f),
    Vec3f(1.251141e-06f, 4.5181e-07f, 0.f)
};