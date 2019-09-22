#ifndef SUBWAYGRAPH_H
#define SUBWAYGRAPH_H
#include<QFile>
#include<QString>
class SubwayGraph
{
public:
    SubwayGraph();
    ~SubwayGraph();
protected:
    QVector<Station> stations;          //存储所有站点
    QVector<Line> lines;                //存储所有线路
    QHash<QString, int> stationsHash;   //站点名到存储位置的 hash
    QHash<QString, int> linesHash;      //线路名到存储位置的 hash
    QSet<Edge> edges;                   //所有边的集合
    QVector<QVector<Node>> graph;       //地铁线路网络图
};

#endif // SUBWAYGRAPH_H
