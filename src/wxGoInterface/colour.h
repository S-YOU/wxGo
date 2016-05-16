#define wxC2S_NAME              1
#define wxC2S_CSS_SYNTAX        2
#define wxC2S_HTML_SYNTAX       4
%constant const unsigned char wxALPHA_TRANSPARENT = 0;
%constant const unsigned char wxALPHA_OPAQUE = 0xff;
class wxColour : public wxObject
{
public:
    wxColour();
    wxColour(unsigned char red, unsigned char green, unsigned char blue,
             unsigned char alpha = wxALPHA_OPAQUE);
    wxColour(const wxString& colourName);
    wxColour(unsigned long colRGB);
    wxColour(const wxColour& colour);
    virtual unsigned char Alpha() const;
    virtual unsigned char Blue() const;
    virtual wxString GetAsString(long flags = wxC2S_NAME | wxC2S_CSS_SYNTAX) const;
    void SetRGB(wxUint32 colRGB);
    void SetRGBA(wxUint32 colRGBA);
    wxUint32 GetRGB() const;
    wxUint32 GetRGBA() const;
    wxIntPtr GetPixel() const;
    virtual unsigned char Green() const;
    virtual bool IsOk() const;
    virtual unsigned char Red() const;
    void Set(unsigned char red, unsigned char green,
             unsigned char blue,
             unsigned char alpha = wxALPHA_OPAQUE);
    void Set(unsigned long RGB);
    bool Set(const wxString& str);
    static void MakeMono(unsigned char* r, unsigned char* g, unsigned char* b, bool on);
    wxColour& MakeDisabled(unsigned char brightness = 255);
    static void MakeGrey(unsigned char* r, unsigned char* g, unsigned char* b);
    static void MakeGrey(unsigned char* r, unsigned char* g, unsigned char* b,
                         double weight_r, double weight_g, double weight_b);
    static unsigned char AlphaBlend(unsigned char fg, unsigned char bg, double alpha);
    wxColour ChangeLightness(int ialpha) const;
};
%constant const wxColour wxNullColour;
%constant const wxColour wxTransparentColour;
bool wxFromString(const wxString& string, wxColour* colour);
wxString wxToString(const wxColour& colour);