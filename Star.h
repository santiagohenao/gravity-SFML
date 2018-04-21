int codespace=0;

class Star : public sf::Drawable
{
    private:
        int star_code;
    public:
        // class atributes
        double mass;
        Complex r,v;
        sf::CircleShape marker;
        //Constructors
        Star() { }

        Star( Complex r0, Complex v0, double mass_arg)
        {
            r=r0;
            v=v0;
            marker=sf::CircleShape(mass_arg);
            star_code=codespace;
            codespace++;
        }
        // Functions
        int code(void){return star_code;}
        void d2r_dt2(void);      //delayed due to existence of vector of stars
        void dr_dt(void){r+=v*dt;}

    protected:
        void draw(sf::RenderTarget& target, sf::RenderStates state) const
        {
            target.draw(marker);
        }
};

vector<Star> stars;

void Star::d2r_dt2(void)
{
    for(int i=0;i<stars.size();i++)
    {
        if(star_code!=stars[i].code())
        {
            v+=((G*stars[i].mass*(r-stars[i].r))/(pow(norm((r-stars[i].r)),3)))*dt;
        }
    }
}
