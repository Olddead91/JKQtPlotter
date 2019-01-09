/*
    Copyright (c) 2008-2018 Jan W. Krieger (<jan@jkrieger.de>)

    

    This software is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License (LGPL) as published by
    the Free Software Foundation, either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License (LGPL) for more details.

    You should have received a copy of the GNU Lesser General Public License (LGPL)
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/



/**
 * \defgroup jkqtplotter_overlays Overlay Elements
 * \ingroup jkqtplotter
 */

/** \file jkqtpelementsoverlay.h
  * \ingroup jkqtplotter_overlays
  */

#include <QObject>
#include <QString>
#include <QPainter>
#include <QPair>
#include "jkqtplottertools/jkqtptools.h"
#include "jkqtplottertools/jkqtp_imexport.h"

#ifndef jkqtpelementsoverlay_H
#define jkqtpelementsoverlay_H

// forward declarations
class JKQtBasePlotter;

/*! \brief this virtual base class describes an interface for graph overlay elements, which are simple geometric
           forms drawn ONTO the graphe, so a redraw of the overlays does NOT require a redraw of the graph.
   \ingroup jkqtplotter_overlays

   These simple primitive elements can be used to e.g. display fast changing indicators on the graph ...
 */
class LIB_EXPORT JKQTPoverlayElement : public QObject {
        Q_OBJECT
    public:
        explicit JKQTPoverlayElement(JKQtBasePlotter *parent = 0);

        /** \brief plots the graph to the plotter object specified as parent */
        virtual void draw(JKQTPEnhancedPainter& painter)=0;

        /** \brief returns the parent painter class */
        inline JKQtBasePlotter* getParent() { return parent; }

        /** \brief sets the parent painter class */
        virtual void setParent(JKQtBasePlotter* parent);

        /*! \brief sets the property color to the specified \a __value. 
            \details Description of the parameter color is: <CENTER>\copybrief color.</CENTER> 
            \see color for more information */ 
        inline virtual void set_color(const QColor & __value)  
        {
            this->color = __value;
        } 
        /*! \brief returns the property color. 
            \details Description of the parameter color is: <CENTER>\copybrief color.</CENTER> 
            \see color for more information */ 
        inline virtual QColor get_color() const  
        {
            return this->color; 
        }
        /*! \brief sets the property fillColor to the specified \a __value. 
            \details Description of the parameter fillColor is: <CENTER>\copybrief fillColor.</CENTER> 
            \see fillColor for more information */ 
        inline virtual void set_fillColor(const QColor & __value)  
        {
            this->fillColor = __value;
        } 
        /*! \brief returns the property fillColor. 
            \details Description of the parameter fillColor is: <CENTER>\copybrief fillColor.</CENTER> 
            \see fillColor for more information */ 
        inline virtual QColor get_fillColor() const  
        {
            return this->fillColor; 
        }
        /*! \brief sets the property lineStyle to the specified \a __value. 
            \details Description of the parameter lineStyle is: <CENTER>\copybrief lineStyle.</CENTER> 
            \see lineStyle for more information */ 
        inline virtual void set_lineStyle(const Qt::PenStyle & __value)  
        {
            this->lineStyle = __value;
        } 
        /*! \brief returns the property lineStyle. 
            \details Description of the parameter lineStyle is: <CENTER>\copybrief lineStyle.</CENTER> 
            \see lineStyle for more information */ 
        inline virtual Qt::PenStyle get_lineStyle() const  
        {
            return this->lineStyle; 
        }
        /*! \brief sets the property fillStyle to the specified \a __value. 
            \details Description of the parameter fillStyle is: <CENTER>\copybrief fillStyle.</CENTER> 
            \see fillStyle for more information */ 
        inline virtual void set_fillStyle(const Qt::BrushStyle & __value)  
        {
            this->fillStyle = __value;
        } 
        /*! \brief returns the property fillStyle. 
            \details Description of the parameter fillStyle is: <CENTER>\copybrief fillStyle.</CENTER> 
            \see fillStyle for more information */ 
        inline virtual Qt::BrushStyle get_fillStyle() const  
        {
            return this->fillStyle; 
        }
        /*! \brief sets the property lineWidth to the specified \a __value. 
            \details Description of the parameter lineWidth is: <CENTER>\copybrief lineWidth.</CENTER> 
            \see lineWidth for more information */ 
        inline virtual void set_lineWidth(double __value)  
        {
            this->lineWidth = __value;
        } 
        /*! \brief returns the property lineWidth. 
            \details Description of the parameter lineWidth is: <CENTER>\copybrief lineWidth.</CENTER> 
            \see lineWidth for more information */ 
        inline virtual double get_lineWidth() const  
        {
            return this->lineWidth; 
        }
        /*! \brief sets the property text to the specified \a __value. 
            \details Description of the parameter text is: <CENTER>\copybrief text.</CENTER> 
            \see text for more information */ 
        inline virtual void set_text(const QString & __value)  
        {
            this->text = __value;
        } 
        /*! \brief returns the property text. 
            \details Description of the parameter text is: <CENTER>\copybrief text.</CENTER> 
            \see text for more information */ 
        inline virtual QString get_text() const  
        {
            return this->text; 
        }
        /*! \brief sets the property fontName to the specified \a __value. 
            \details Description of the parameter fontName is: <CENTER>\copybrief fontName.</CENTER> 
            \see fontName for more information */ 
        inline virtual void set_fontName(const QString & __value)  
        {
            this->fontName = __value;
        } 
        /*! \brief returns the property fontName. 
            \details Description of the parameter fontName is: <CENTER>\copybrief fontName.</CENTER> 
            \see fontName for more information */ 
        inline virtual QString get_fontName() const  
        {
            return this->fontName; 
        }
        /*! \brief sets the property fontSize to the specified \a __value. 
            \details Description of the parameter fontSize is: <CENTER>\copybrief fontSize.</CENTER> 
            \see fontSize for more information */ 
        inline virtual void set_fontSize(double __value)  
        {
            this->fontSize = __value;
        } 
        /*! \brief returns the property fontSize. 
            \details Description of the parameter fontSize is: <CENTER>\copybrief fontSize.</CENTER> 
            \see fontSize for more information */ 
        inline virtual double get_fontSize() const  
        {
            return this->fontSize; 
        }
        /*! \brief sets the property visible to the specified \a __value. 
            \details Description of the parameter visible is: <CENTER>\copybrief visible.</CENTER> 
            \see visible for more information */ 
        inline virtual void set_visible(bool __value)  
        {
            this->visible = __value;
        } 
        /*! \brief returns the property visible. 
            \details Description of the parameter visible is: <CENTER>\copybrief visible.</CENTER> 
            \see visible for more information */ 
        inline virtual bool get_visible() const  
        {
            return this->visible; 
        }

    protected:
        /** \brief the plotter object this object belongs to */
        JKQtBasePlotter* parent;

        QColor color;
        QColor fillColor;
        Qt::PenStyle lineStyle;
        Qt::BrushStyle fillStyle;
        double lineWidth;
        QString text;
        QString fontName;
        double fontSize;
        bool visible;
        QFont getFont() const;


        /** \brief tool routine that transforms a QPointF according to the parent's transformation rules */
        QPointF transform(const QPointF& x);

        double transfromX(double x);
        double transfromY(double y);

        /** \brief tool routine that back-transforms a QPointF according to the parent's transformation rules */
        QPointF backTransform(const QPointF& x);

        /** \brief tool routine that transforms a QPointF according to the parent's transformation rules */
        inline QPointF transform(double x, double y) {
            return transform(QPointF(x,y));
        };
        /** \brief tool routine that back-transforms a QPointF according to the parent's transformation rules */
        inline QPointF backTransform(double x, double y) {
            return backTransform(QPointF(x,y));
        };
        /** \brief tool routine that transforms a QVector<QPointF> according to the parent's transformation rules */
        QVector<QPointF> transform(const QVector<QPointF>& x);

        /** \brief tool routine that transforms a QVector<QPointF> according to the parent's transformation rules
         *         and returns a (non-closed) path consisting of lines */
        QPainterPath transformToLinePath(const QVector<QPointF>& x);

        /** \brief tool routine that transforms a QVector<QPointF> according to the parent's transformation rules
         *         and returns a polygon */
        inline QPolygonF transformToPolygon(const QVector<QPointF>& x) {
            return QPolygonF(transform(x));
        }

        virtual QBrush getBrush(JKQTPEnhancedPainter &painter) const;
        virtual QPen getPen(JKQTPEnhancedPainter& painter) const;

};



/*! \brief baseclass for a two-position overlay
   \ingroup jkqtplotter_overlays
 */
class LIB_EXPORT JKQTPoverlayTwoPositionOverlay : public JKQTPoverlayElement {
        Q_OBJECT
    public:
        explicit JKQTPoverlayTwoPositionOverlay(double x1, double y1, double x2, double y2, JKQtBasePlotter *parent = 0);

        /*! \brief sets the property x1 to the specified \a __value. 
            \details Description of the parameter x1 is: <CENTER>\copybrief x1.</CENTER> 
            \see x1 for more information */ 
        inline virtual void set_x1(double __value)  
        {
            this->x1 = __value;
        } 
        /*! \brief returns the property x1. 
            \details Description of the parameter x1 is: <CENTER>\copybrief x1.</CENTER> 
            \see x1 for more information */ 
        inline virtual double get_x1() const  
        {
            return this->x1; 
        }
        /*! \brief sets the property x2 to the specified \a __value. 
            \details Description of the parameter x2 is: <CENTER>\copybrief x2.</CENTER> 
            \see x2 for more information */ 
        inline virtual void set_x2(double __value)  
        {
            this->x2 = __value;
        } 
        /*! \brief returns the property x2. 
            \details Description of the parameter x2 is: <CENTER>\copybrief x2.</CENTER> 
            \see x2 for more information */ 
        inline virtual double get_x2() const  
        {
            return this->x2; 
        }
        /*! \brief sets the property y1 to the specified \a __value. 
            \details Description of the parameter y1 is: <CENTER>\copybrief y1.</CENTER> 
            \see y1 for more information */ 
        inline virtual void set_y1(double __value)  
        {
            this->y1 = __value;
        } 
        /*! \brief returns the property y1. 
            \details Description of the parameter y1 is: <CENTER>\copybrief y1.</CENTER> 
            \see y1 for more information */ 
        inline virtual double get_y1() const  
        {
            return this->y1; 
        }
        /*! \brief sets the property y2 to the specified \a __value. 
            \details Description of the parameter y2 is: <CENTER>\copybrief y2.</CENTER> 
            \see y2 for more information */ 
        inline virtual void set_y2(double __value)  
        {
            this->y2 = __value;
        } 
        /*! \brief returns the property y2. 
            \details Description of the parameter y2 is: <CENTER>\copybrief y2.</CENTER> 
            \see y2 for more information */ 
        inline virtual double get_y2() const  
        {
            return this->y2; 
        }
    protected:
        double x1;
        double y1;
        double x2;
        double y2;
};



/*! \brief baseclass for one-coordinate indicator overlays (horizontal/vertical lines
   \ingroup jkqtplotter_overlays
 */
class LIB_EXPORT JKQTPoverlayOneCoordOverlay : public JKQTPoverlayElement {
        Q_OBJECT
    public:
        explicit JKQTPoverlayOneCoordOverlay(double pos, JKQtBasePlotter *parent = 0);

        /*! \brief sets the property position to the specified \a __value. 
            \details Description of the parameter position is: <CENTER>\copybrief position.</CENTER> 
            \see position for more information */ 
        inline virtual void set_position(double __value)  
        {
            this->position = __value;
        } 
        /*! \brief returns the property position. 
            \details Description of the parameter position is: <CENTER>\copybrief position.</CENTER> 
            \see position for more information */ 
        inline virtual double get_position() const  
        {
            return this->position; 
        }
    protected:
        double position;
};



/*! \brief baseclass for two-coordinate indicator overlays (horizontal/vertical lines
   \ingroup jkqtplotter_overlays
 */
class LIB_EXPORT JKQTPoverlayTwoCoordOverlay : public JKQTPoverlayOneCoordOverlay {
        Q_OBJECT
    public:
        explicit JKQTPoverlayTwoCoordOverlay(double pos, double pos2, JKQtBasePlotter *parent = 0);

        /*! \brief sets the property position2 to the specified \a __value. 
            \details Description of the parameter position2 is: <CENTER>\copybrief position2.</CENTER> 
            \see position2 for more information */ 
        inline virtual void set_position2(double __value)  
        {
            this->position2 = __value;
        } 
        /*! \brief returns the property position2. 
            \details Description of the parameter position2 is: <CENTER>\copybrief position2.</CENTER> 
            \see position2 for more information */ 
        inline virtual double get_position2() const  
        {
            return this->position2; 
        }
    protected:
        double position2;
};




/*! \brief draws a vertical line as an overlay
   \ingroup jkqtplotter_overlays

   These simple primitive elements can be used to e.g. display fast changing indicators on the graph ...
 */
class LIB_EXPORT JKQTPoverlayVerticalLine : public JKQTPoverlayOneCoordOverlay {
        Q_OBJECT
    public:
        explicit JKQTPoverlayVerticalLine(double pos, JKQtBasePlotter *parent = 0);
        explicit JKQTPoverlayVerticalLine(double pos, QString text, JKQtBasePlotter *parent = 0);

        /** \brief plots the graph to the plotter object specified as parent */
        virtual void draw(JKQTPEnhancedPainter& painter);
};



/*! \brief draws a vertical range as an overlay
   \ingroup jkqtplotter_overlays

   These simple primitive elements can be used to e.g. display fast changing indicators on the graph ...
 */
class LIB_EXPORT JKQTPoverlayVerticalRange : public JKQTPoverlayTwoCoordOverlay {
        Q_OBJECT
    public:
        explicit JKQTPoverlayVerticalRange(double pos, double pos2, JKQtBasePlotter *parent = 0);
        explicit JKQTPoverlayVerticalRange(double pos, double pos2, QString text, JKQtBasePlotter *parent = 0);

        /** \brief plots the graph to the plotter object specified as parent */
        virtual void draw(JKQTPEnhancedPainter& painter);

        /*! \brief sets the property inverted to the specified \a __value. 
            \details Description of the parameter inverted is: <CENTER>\copybrief inverted.</CENTER> 
            \see inverted for more information */ 
        inline virtual void set_inverted(bool __value)  
        {
            this->inverted = __value;
        } 
        /*! \brief returns the property inverted. 
            \details Description of the parameter inverted is: <CENTER>\copybrief inverted.</CENTER> 
            \see inverted for more information */ 
        inline virtual bool get_inverted() const  
        {
            return this->inverted; 
        }
    protected:
        /** \brief if set \c false, the range is filled, otherwise everything outside the range is filled */
        bool inverted;
};

/*! \brief draws a line throught two points
   \ingroup jkqtplotter_overlays

 */
class LIB_EXPORT JKQTPoverlayLine : public JKQTPoverlayTwoPositionOverlay {
        Q_OBJECT
    public:
        explicit JKQTPoverlayLine(double x1, double y1, double x2, double y2, JKQtBasePlotter *parent = 0);

        /** \brief plots the graph to the plotter object specified as parent */
        virtual void draw(JKQTPEnhancedPainter& painter);

        /*! \brief sets the property infinite to the specified \a __value. 
            \details Description of the parameter infinite is: <CENTER>\copybrief infinite.</CENTER> 
            \see infinite for more information */ 
        inline virtual void set_infinite(bool __value)  
        {
            this->infinite = __value;
        } 
        /*! \brief returns the property infinite. 
            \details Description of the parameter infinite is: <CENTER>\copybrief infinite.</CENTER> 
            \see infinite for more information */ 
        inline virtual bool get_infinite() const  
        {
            return this->infinite; 
        }
    protected:
        /** \brief the line goes on infinitely */
        bool infinite;
};

/*! \brief draws a rectangle, spanned by two points
   \ingroup jkqtplotter_overlays

 */
class LIB_EXPORT JKQTPoverlayRectangle : public JKQTPoverlayTwoPositionOverlay {
        Q_OBJECT
    public:
        explicit JKQTPoverlayRectangle(double x1, double y1, double x2, double y2, JKQtBasePlotter *parent = 0);

        /** \brief plots the graph to the plotter object specified as parent */
        virtual void draw(JKQTPEnhancedPainter& painter);

    protected:
};

#endif // jkqtpelementsoverlay_H
