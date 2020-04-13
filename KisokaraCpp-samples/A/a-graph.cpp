#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/dijkstra_shortest_paths.hpp>
#include <boost/graph/graph_traits.hpp>
#include <boost/graph/graph_utility.hpp>
using namespace std;
using namespace boost;

int main() {
  using Graph = adjacency_list<listS, vecS, directedS, no_property,
    property<edge_weight_t, int >> ;
  using Vertex = graph_traits<Graph>::vertex_descriptor;
  using Edge = pair<int, int>;

  enum vertices { S, A, B, C, D, E, F, Z };//���_�̖��O�i�����j
  const int lastIndex = Z;                 //�Ō�̐�
  string names = "SABCDEFZ";               //���_�̕\�����x��
  vector<Edge> edges{                      //�ӂ̒�`
    { S, A },{ S, B },
    { A, B },{ A, C },{ A, D },
    { B, A },{ B, C },{ B, D },
    { C, D },{ C, E },{ C, F },
    { D, A },{ D, B },{ D, F },
    { E, D },{ E, Z },    //�ŒZ�o�H����
    { F, E },{ F, Z } };  //�ŒZ�o�H����
    //{ E, D }, { Z, E }, //�ŒZ�o�H�Ȃ�
    //{ F, E },{ Z, F } };//�ŒZ�o�H�Ȃ�
  vector<int> weights{//�d�݂̒�`
    3, 5,
    1, 10, 11,
    3, 2, 3,
    2, 7, 12,
    15, 7, 2,
    11, 2,
    3, 2 };
  if (edges.size() != weights.size()) throw runtime_error("�ӂ̐��Əd�݂̐�������Ȃ�");

  Graph g(edges.cbegin(), edges.cend(), weights.cbegin(), lastIndex);//�O���t�̍\�z
  print_graph(g, names.c_str());//�O���t�̕\��
  cout << endl;

  Vertex start = S;//�X�^�[�g�n�_
  vector<Vertex> parents(num_vertices(g));//�ŒZ�o�H���i�[����vector
  dijkstra_shortest_paths(g, start, predecessor_map(&parents[0]));//�ŒZ�o�H�����߂�

  Vertex goal = Z;//�S�[���n�_
  if (parents[goal] == goal) {
    cout << "�ŒZ�o�H�Ȃ�\n";
    return 1;
  }

  for (Vertex v = goal; v != start; v = parents[v]) {//�o�H�̕\��
    cout << names[v] << " <- ";

  }
  cout << names[start] << endl;
}//�o�͒l�FZ <- F <- D <- B <- A <- S