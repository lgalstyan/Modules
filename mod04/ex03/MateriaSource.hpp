#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP


class MateriaSource : public IMateriaSource
{
    public:
        MateriaSource();
        ~MateriaSource();
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);

    private:
        AMateria *array[4];
};

#endif