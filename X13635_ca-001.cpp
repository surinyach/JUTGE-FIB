#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Track {
  string artist, title, genre;
  int year;
};

bool comp(const Track &a, const Track &b) {
    if (a.genre == b.genre) {
        if (a.artist == b.artist) {
            if (a.year == b.year) return a.title < b.title;
            else return a.year < b.year;
        } else {
            return a.artist < b.artist;
        }
    } else {
        return a.genre < b.genre;
    }
}

vector<Track> read_tracks(int n) {
    vector<Track> track(n);
    for (int i = 0; i < n; ++i) {
        cin >> track[i].artist >> track[i].title >> track[i].genre >> track[i].year;
    }
    return track;
}

void print_track(const Track &t) {
  cout << t.artist;
  cout << " (" << t.year;
  cout << ") " << t.title << " (" << t.genre << ")" << endl;
}

int main() {
    int n;
    cin >> n;
    vector<Track> tracks = read_tracks(n);
    sort(tracks.begin(), tracks.end(), comp);

    string qry;
    cin >> qry;
    while (cin >> qry) {
        for (int i = 0; i < n; ++i) {
            if (tracks[i].genre == qry) print_track(tracks[i]);
        }
    }
}
