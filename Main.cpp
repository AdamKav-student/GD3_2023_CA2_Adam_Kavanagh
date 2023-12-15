#include <SFML/Graphics.hpp>
using namespace std;

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "Not Tetris");

	sf::Event event;

	while (window.isOpen()) {

		while (window.pollEvent(event)) {

			if (event.type == sf::Event::Closed) {

				window.close();
			}
		}
	}

	return 0;
}


void fileToString(string fname, string data)
{
    //load file
    ifstream fin{};(fname);

    //check if file is open
    if (fin)
    {
        //read file into string
        string line;
        //while there is a line to read
        while (getline(fin, line))
        {
            //add line to data
            data += line + "\n";
        }
        fin.close();
    }
    //if file is not open
    else
    {
        cout << "Error opening file" << endl;
    }
}
int main()
{
    string file;
    fileToString("vs_sample_simple.xml", file);

    return 1;
}
