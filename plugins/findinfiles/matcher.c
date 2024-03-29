/* matcher.c generated by valac 0.40.2, the Vala compiler
 * generated from matcher.vala, do not modify */

/*
* Copyright (C) 2015 The Lemon Man
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2, or (at your option)
* any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
*/


#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


#define GEDIT_FIND_IN_FILES_PLUGIN_TYPE_IMATCHER (gedit_find_in_files_plugin_imatcher_get_type ())
#define GEDIT_FIND_IN_FILES_PLUGIN_IMATCHER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEDIT_FIND_IN_FILES_PLUGIN_TYPE_IMATCHER, GeditFindInFilesPluginIMatcher))
#define GEDIT_FIND_IN_FILES_PLUGIN_IS_IMATCHER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEDIT_FIND_IN_FILES_PLUGIN_TYPE_IMATCHER))
#define GEDIT_FIND_IN_FILES_PLUGIN_IMATCHER_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GEDIT_FIND_IN_FILES_PLUGIN_TYPE_IMATCHER, GeditFindInFilesPluginIMatcherIface))

typedef struct _GeditFindInFilesPluginIMatcher GeditFindInFilesPluginIMatcher;
typedef struct _GeditFindInFilesPluginIMatcherIface GeditFindInFilesPluginIMatcherIface;

#define GEDIT_FIND_IN_FILES_PLUGIN_TYPE_RANGE (gedit_find_in_files_plugin_range_get_type ())
typedef struct _GeditFindInFilesPluginRange GeditFindInFilesPluginRange;

#define GEDIT_FIND_IN_FILES_PLUGIN_TYPE_REGEX_FIND (gedit_find_in_files_plugin_regex_find_get_type ())
#define GEDIT_FIND_IN_FILES_PLUGIN_REGEX_FIND(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEDIT_FIND_IN_FILES_PLUGIN_TYPE_REGEX_FIND, GeditFindInFilesPluginRegexFind))
#define GEDIT_FIND_IN_FILES_PLUGIN_REGEX_FIND_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEDIT_FIND_IN_FILES_PLUGIN_TYPE_REGEX_FIND, GeditFindInFilesPluginRegexFindClass))
#define GEDIT_FIND_IN_FILES_PLUGIN_IS_REGEX_FIND(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEDIT_FIND_IN_FILES_PLUGIN_TYPE_REGEX_FIND))
#define GEDIT_FIND_IN_FILES_PLUGIN_IS_REGEX_FIND_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEDIT_FIND_IN_FILES_PLUGIN_TYPE_REGEX_FIND))
#define GEDIT_FIND_IN_FILES_PLUGIN_REGEX_FIND_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEDIT_FIND_IN_FILES_PLUGIN_TYPE_REGEX_FIND, GeditFindInFilesPluginRegexFindClass))

typedef struct _GeditFindInFilesPluginRegexFind GeditFindInFilesPluginRegexFind;
typedef struct _GeditFindInFilesPluginRegexFindClass GeditFindInFilesPluginRegexFindClass;
typedef struct _GeditFindInFilesPluginRegexFindPrivate GeditFindInFilesPluginRegexFindPrivate;
enum  {
	GEDIT_FIND_IN_FILES_PLUGIN_REGEX_FIND_0_PROPERTY,
	GEDIT_FIND_IN_FILES_PLUGIN_REGEX_FIND_NUM_PROPERTIES
};
static GParamSpec* gedit_find_in_files_plugin_regex_find_properties[GEDIT_FIND_IN_FILES_PLUGIN_REGEX_FIND_NUM_PROPERTIES];
#define _g_regex_unref0(var) ((var == NULL) ? NULL : (var = (g_regex_unref (var), NULL)))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_match_info_unref0(var) ((var == NULL) ? NULL : (var = (g_match_info_unref (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))

#define GEDIT_FIND_IN_FILES_PLUGIN_TYPE_BOYER_MOORE_HORSPOOL (gedit_find_in_files_plugin_boyer_moore_horspool_get_type ())
#define GEDIT_FIND_IN_FILES_PLUGIN_BOYER_MOORE_HORSPOOL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEDIT_FIND_IN_FILES_PLUGIN_TYPE_BOYER_MOORE_HORSPOOL, GeditFindInFilesPluginBoyerMooreHorspool))
#define GEDIT_FIND_IN_FILES_PLUGIN_BOYER_MOORE_HORSPOOL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEDIT_FIND_IN_FILES_PLUGIN_TYPE_BOYER_MOORE_HORSPOOL, GeditFindInFilesPluginBoyerMooreHorspoolClass))
#define GEDIT_FIND_IN_FILES_PLUGIN_IS_BOYER_MOORE_HORSPOOL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEDIT_FIND_IN_FILES_PLUGIN_TYPE_BOYER_MOORE_HORSPOOL))
#define GEDIT_FIND_IN_FILES_PLUGIN_IS_BOYER_MOORE_HORSPOOL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEDIT_FIND_IN_FILES_PLUGIN_TYPE_BOYER_MOORE_HORSPOOL))
#define GEDIT_FIND_IN_FILES_PLUGIN_BOYER_MOORE_HORSPOOL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEDIT_FIND_IN_FILES_PLUGIN_TYPE_BOYER_MOORE_HORSPOOL, GeditFindInFilesPluginBoyerMooreHorspoolClass))

typedef struct _GeditFindInFilesPluginBoyerMooreHorspool GeditFindInFilesPluginBoyerMooreHorspool;
typedef struct _GeditFindInFilesPluginBoyerMooreHorspoolClass GeditFindInFilesPluginBoyerMooreHorspoolClass;
typedef struct _GeditFindInFilesPluginBoyerMooreHorspoolPrivate GeditFindInFilesPluginBoyerMooreHorspoolPrivate;
enum  {
	GEDIT_FIND_IN_FILES_PLUGIN_BOYER_MOORE_HORSPOOL_0_PROPERTY,
	GEDIT_FIND_IN_FILES_PLUGIN_BOYER_MOORE_HORSPOOL_NUM_PROPERTIES
};
static GParamSpec* gedit_find_in_files_plugin_boyer_moore_horspool_properties[GEDIT_FIND_IN_FILES_PLUGIN_BOYER_MOORE_HORSPOOL_NUM_PROPERTIES];
#define _g_free0(var) (var = (g_free (var), NULL))

struct _GeditFindInFilesPluginRange {
	gsize from;
	gsize to;
};

struct _GeditFindInFilesPluginIMatcherIface {
	GTypeInterface parent_iface;
	gboolean (*has_match) (GeditFindInFilesPluginIMatcher* self, guint8* text, gsize text_length, gsize pos, GeditFindInFilesPluginRange* match);
};

struct _GeditFindInFilesPluginRegexFind {
	GObject parent_instance;
	GeditFindInFilesPluginRegexFindPrivate * priv;
};

struct _GeditFindInFilesPluginRegexFindClass {
	GObjectClass parent_class;
};

struct _GeditFindInFilesPluginRegexFindPrivate {
	GRegex* re;
};

struct _GeditFindInFilesPluginBoyerMooreHorspool {
	GObject parent_instance;
	GeditFindInFilesPluginBoyerMooreHorspoolPrivate * priv;
};

struct _GeditFindInFilesPluginBoyerMooreHorspoolClass {
	GObjectClass parent_class;
};

struct _GeditFindInFilesPluginBoyerMooreHorspoolPrivate {
	gchar* pattern;
	gint bad_char_shift[256];
	gboolean ignore_case;
};


static gpointer gedit_find_in_files_plugin_regex_find_parent_class = NULL;
static GeditFindInFilesPluginIMatcherIface * gedit_find_in_files_plugin_regex_find_gedit_find_in_files_plugin_imatcher_parent_iface = NULL;
static GType gedit_find_in_files_plugin_regex_find_type_id = 0;
static gpointer gedit_find_in_files_plugin_boyer_moore_horspool_parent_class = NULL;
static GeditFindInFilesPluginIMatcherIface * gedit_find_in_files_plugin_boyer_moore_horspool_gedit_find_in_files_plugin_imatcher_parent_iface = NULL;
static GType gedit_find_in_files_plugin_boyer_moore_horspool_type_id = 0;

GType gedit_find_in_files_plugin_range_get_type (void) G_GNUC_CONST;
GeditFindInFilesPluginRange* gedit_find_in_files_plugin_range_dup (const GeditFindInFilesPluginRange* self);
void gedit_find_in_files_plugin_range_free (GeditFindInFilesPluginRange* self);
GType gedit_find_in_files_plugin_imatcher_get_type (void) G_GNUC_CONST;
GType gedit_find_in_files_plugin_regex_find_get_type (void) G_GNUC_CONST;
#define GEDIT_FIND_IN_FILES_PLUGIN_REGEX_FIND_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), GEDIT_FIND_IN_FILES_PLUGIN_TYPE_REGEX_FIND, GeditFindInFilesPluginRegexFindPrivate))
GeditFindInFilesPluginRegexFind* gedit_find_in_files_plugin_regex_find_new (const gchar* pattern,
                                                                            gboolean ignore_case,
                                                                            GError** error);
GeditFindInFilesPluginRegexFind* gedit_find_in_files_plugin_regex_find_construct (GType object_type,
                                                                                  const gchar* pattern,
                                                                                  gboolean ignore_case,
                                                                                  GError** error);
static gboolean gedit_find_in_files_plugin_regex_find_real_has_match (GeditFindInFilesPluginIMatcher* base,
                                                               guint8* text,
                                                               gsize text_length,
                                                               gsize pos,
                                                               GeditFindInFilesPluginRange* match);
static void gedit_find_in_files_plugin_regex_find_finalize (GObject * obj);
GType gedit_find_in_files_plugin_boyer_moore_horspool_get_type (void) G_GNUC_CONST;
#define GEDIT_FIND_IN_FILES_PLUGIN_BOYER_MOORE_HORSPOOL_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), GEDIT_FIND_IN_FILES_PLUGIN_TYPE_BOYER_MOORE_HORSPOOL, GeditFindInFilesPluginBoyerMooreHorspoolPrivate))
GeditFindInFilesPluginBoyerMooreHorspool* gedit_find_in_files_plugin_boyer_moore_horspool_new (const gchar* pattern_,
                                                                                               gboolean ignore_case_);
GeditFindInFilesPluginBoyerMooreHorspool* gedit_find_in_files_plugin_boyer_moore_horspool_construct (GType object_type,
                                                                                                     const gchar* pattern_,
                                                                                                     gboolean ignore_case_);
static gboolean gedit_find_in_files_plugin_boyer_moore_horspool_real_has_match (GeditFindInFilesPluginIMatcher* base,
                                                                         guint8* text,
                                                                         gsize text_length,
                                                                         gsize pos,
                                                                         GeditFindInFilesPluginRange* match);
static void gedit_find_in_files_plugin_boyer_moore_horspool_finalize (GObject * obj);


GeditFindInFilesPluginRegexFind*
gedit_find_in_files_plugin_regex_find_construct (GType object_type,
                                                 const gchar* pattern,
                                                 gboolean ignore_case,
                                                 GError** error)
{
	GeditFindInFilesPluginRegexFind * self = NULL;
	GRegexCompileFlags flags = 0;
	GRegex* _tmp1_ = NULL;
	GRegexCompileFlags _tmp2_;
	GRegex* _tmp3_;
	GRegex* _tmp4_;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (pattern != NULL, NULL);
	self = (GeditFindInFilesPluginRegexFind*) g_object_new (object_type, NULL);
	flags = G_REGEX_OPTIMIZE;
	if (ignore_case) {
		GRegexCompileFlags _tmp0_;
		_tmp0_ = flags;
		flags = _tmp0_ | G_REGEX_CASELESS;
	}
	_tmp2_ = flags;
	_tmp3_ = g_regex_new (pattern, _tmp2_, 0, &_inner_error_);
	_tmp1_ = _tmp3_;
	if (G_UNLIKELY (_inner_error_ != NULL)) {
		g_propagate_error (error, _inner_error_);
		_g_object_unref0 (self);
		return NULL;
	}
	_tmp4_ = _tmp1_;
	_tmp1_ = NULL;
	_g_regex_unref0 (self->priv->re);
	self->priv->re = _tmp4_;
	_g_regex_unref0 (_tmp1_);
	return self;
}


GeditFindInFilesPluginRegexFind*
gedit_find_in_files_plugin_regex_find_new (const gchar* pattern,
                                           gboolean ignore_case,
                                           GError** error)
{
	return gedit_find_in_files_plugin_regex_find_construct (GEDIT_FIND_IN_FILES_PLUGIN_TYPE_REGEX_FIND, pattern, ignore_case, error);
}


static gboolean
gedit_find_in_files_plugin_regex_find_real_has_match (GeditFindInFilesPluginIMatcher* base,
                                                      guint8* text,
                                                      gsize text_length,
                                                      gsize pos,
                                                      GeditFindInFilesPluginRange* match)
{
	GeditFindInFilesPluginRegexFind * self;
	gboolean result = FALSE;
	GMatchInfo* info = NULL;
	gint casted_pos = 0;
	const gchar* str = NULL;
	gint _tmp9_ = 0;
	gint _tmp10_ = 0;
	GError * _inner_error_ = NULL;
	self = (GeditFindInFilesPluginRegexFind*) base;
	g_return_val_if_fail (match != NULL, FALSE);
	if (pos > ((gsize) G_MAXINT)) {
		casted_pos = 0;
		text = text + pos;
	} else {
		casted_pos = (gint) pos;
	}
	str = (const gchar*) text;
	{
		gboolean _tmp0_ = FALSE;
		GRegex* _tmp1_;
		gint _tmp2_;
		GMatchInfo* _tmp3_ = NULL;
		gboolean _tmp4_;
		_tmp1_ = self->priv->re;
		_tmp2_ = casted_pos;
		_tmp4_ = g_regex_match_full (_tmp1_, str, (gssize) text_length, _tmp2_, 0, &_tmp3_, &_inner_error_);
		_g_match_info_unref0 (info);
		info = _tmp3_;
		_tmp0_ = _tmp4_;
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			gboolean _tmp5_ = FALSE;
			if (_inner_error_->domain == G_REGEX_ERROR) {
				goto __catch3_g_regex_error;
			}
			_g_match_info_unref0 (info);
			g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return _tmp5_;
		}
		if (!_tmp0_) {
			result = FALSE;
			_g_match_info_unref0 (info);
			return result;
		}
	}
	goto __finally3;
	__catch3_g_regex_error:
	{
		GError* err = NULL;
		GError* _tmp6_;
		const gchar* _tmp7_;
		err = _inner_error_;
		_inner_error_ = NULL;
		_tmp6_ = err;
		_tmp7_ = _tmp6_->message;
		g_warning ("matcher.vala:55: %s", _tmp7_);
		result = FALSE;
		_g_error_free0 (err);
		_g_match_info_unref0 (info);
		return result;
	}
	__finally3:
	if (G_UNLIKELY (_inner_error_ != NULL)) {
		gboolean _tmp8_ = FALSE;
		_g_match_info_unref0 (info);
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return _tmp8_;
	}
	g_match_info_fetch_pos (info, 0, &_tmp9_, &_tmp10_);
	(*match).from = (gsize) _tmp9_;
	(*match).to = (gsize) _tmp10_;
	result = TRUE;
	_g_match_info_unref0 (info);
	return result;
}


static void
gedit_find_in_files_plugin_regex_find_class_init (GeditFindInFilesPluginRegexFindClass * klass)
{
	gedit_find_in_files_plugin_regex_find_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (GeditFindInFilesPluginRegexFindPrivate));
	G_OBJECT_CLASS (klass)->finalize = gedit_find_in_files_plugin_regex_find_finalize;
}


static void
gedit_find_in_files_plugin_regex_find_gedit_find_in_files_plugin_imatcher_interface_init (GeditFindInFilesPluginIMatcherIface * iface)
{
	gedit_find_in_files_plugin_regex_find_gedit_find_in_files_plugin_imatcher_parent_iface = g_type_interface_peek_parent (iface);
	iface->has_match = (gboolean (*) (GeditFindInFilesPluginIMatcher *, guint8*, gsize, gsize, GeditFindInFilesPluginRange*)) gedit_find_in_files_plugin_regex_find_real_has_match;
}


static void
gedit_find_in_files_plugin_regex_find_instance_init (GeditFindInFilesPluginRegexFind * self)
{
	self->priv = GEDIT_FIND_IN_FILES_PLUGIN_REGEX_FIND_GET_PRIVATE (self);
}


static void
gedit_find_in_files_plugin_regex_find_finalize (GObject * obj)
{
	GeditFindInFilesPluginRegexFind * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GEDIT_FIND_IN_FILES_PLUGIN_TYPE_REGEX_FIND, GeditFindInFilesPluginRegexFind);
	_g_regex_unref0 (self->priv->re);
	G_OBJECT_CLASS (gedit_find_in_files_plugin_regex_find_parent_class)->finalize (obj);
}


GType
gedit_find_in_files_plugin_regex_find_get_type (void)
{
	return gedit_find_in_files_plugin_regex_find_type_id;
}


GType
gedit_find_in_files_plugin_regex_find_register_type (GTypeModule * module)
{
	static const GTypeInfo g_define_type_info = { sizeof (GeditFindInFilesPluginRegexFindClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) gedit_find_in_files_plugin_regex_find_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GeditFindInFilesPluginRegexFind), 0, (GInstanceInitFunc) gedit_find_in_files_plugin_regex_find_instance_init, NULL };
	static const GInterfaceInfo gedit_find_in_files_plugin_imatcher_info = { (GInterfaceInitFunc) gedit_find_in_files_plugin_regex_find_gedit_find_in_files_plugin_imatcher_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
	gedit_find_in_files_plugin_regex_find_type_id = g_type_module_register_type (module, G_TYPE_OBJECT, "GeditFindInFilesPluginRegexFind", &g_define_type_info, 0);
	g_type_module_add_interface (module, gedit_find_in_files_plugin_regex_find_type_id, GEDIT_FIND_IN_FILES_PLUGIN_TYPE_IMATCHER, &gedit_find_in_files_plugin_imatcher_info);
	return gedit_find_in_files_plugin_regex_find_type_id;
}


static gchar
string_get (const gchar* self,
            glong index)
{
	gchar result = '\0';
	gchar _tmp0_;
	g_return_val_if_fail (self != NULL, '\0');
	_tmp0_ = ((gchar*) self)[index];
	result = _tmp0_;
	return result;
}


GeditFindInFilesPluginBoyerMooreHorspool*
gedit_find_in_files_plugin_boyer_moore_horspool_construct (GType object_type,
                                                           const gchar* pattern_,
                                                           gboolean ignore_case_)
{
	GeditFindInFilesPluginBoyerMooreHorspool * self = NULL;
	gchar* _tmp0_;
	g_return_val_if_fail (pattern_ != NULL, NULL);
	self = (GeditFindInFilesPluginBoyerMooreHorspool*) g_object_new (object_type, NULL);
	_tmp0_ = g_strdup (pattern_);
	_g_free0 (self->priv->pattern);
	self->priv->pattern = _tmp0_;
	self->priv->ignore_case = ignore_case_;
	{
		gint i = 0;
		i = 0;
		{
			gboolean _tmp1_ = FALSE;
			_tmp1_ = TRUE;
			while (TRUE) {
				gint _tmp3_;
				gint _tmp4_;
				const gchar* _tmp5_;
				gint _tmp6_;
				gint _tmp7_;
				gint _tmp8_;
				if (!_tmp1_) {
					gint _tmp2_;
					_tmp2_ = i;
					i = _tmp2_ + 1;
				}
				_tmp1_ = FALSE;
				_tmp3_ = i;
				if (!(_tmp3_ < 256)) {
					break;
				}
				_tmp4_ = i;
				_tmp5_ = self->priv->pattern;
				_tmp6_ = strlen (_tmp5_);
				_tmp7_ = _tmp6_;
				self->priv->bad_char_shift[_tmp4_] = _tmp7_;
				_tmp8_ = self->priv->bad_char_shift[_tmp4_];
			}
		}
	}
	{
		gint i = 0;
		i = 0;
		{
			gboolean _tmp9_ = FALSE;
			_tmp9_ = TRUE;
			while (TRUE) {
				gint _tmp11_;
				const gchar* _tmp12_;
				gint _tmp13_;
				gint _tmp14_;
				gboolean _tmp15_;
				if (!_tmp9_) {
					gint _tmp10_;
					_tmp10_ = i;
					i = _tmp10_ + 1;
				}
				_tmp9_ = FALSE;
				_tmp11_ = i;
				_tmp12_ = self->priv->pattern;
				_tmp13_ = strlen (_tmp12_);
				_tmp14_ = _tmp13_;
				if (!(_tmp11_ < (_tmp14_ - 1))) {
					break;
				}
				_tmp15_ = self->priv->ignore_case;
				if (_tmp15_) {
					const gchar* _tmp16_;
					gint _tmp17_;
					const gchar* _tmp18_;
					gint _tmp19_;
					gint _tmp20_;
					gint _tmp21_;
					gint _tmp22_;
					const gchar* _tmp23_;
					gint _tmp24_;
					const gchar* _tmp25_;
					gint _tmp26_;
					gint _tmp27_;
					gint _tmp28_;
					gint _tmp29_;
					_tmp16_ = self->priv->pattern;
					_tmp17_ = i;
					_tmp18_ = self->priv->pattern;
					_tmp19_ = strlen (_tmp18_);
					_tmp20_ = _tmp19_;
					_tmp21_ = i;
					self->priv->bad_char_shift[toupper ((gint) string_get (_tmp16_, (glong) _tmp17_))] = (_tmp20_ - 1) - _tmp21_;
					_tmp22_ = self->priv->bad_char_shift[toupper ((gint) string_get (_tmp16_, (glong) _tmp17_))];
					_tmp23_ = self->priv->pattern;
					_tmp24_ = i;
					_tmp25_ = self->priv->pattern;
					_tmp26_ = strlen (_tmp25_);
					_tmp27_ = _tmp26_;
					_tmp28_ = i;
					self->priv->bad_char_shift[tolower ((gint) string_get (_tmp23_, (glong) _tmp24_))] = (_tmp27_ - 1) - _tmp28_;
					_tmp29_ = self->priv->bad_char_shift[tolower ((gint) string_get (_tmp23_, (glong) _tmp24_))];
				} else {
					const gchar* _tmp30_;
					gint _tmp31_;
					const gchar* _tmp32_;
					gint _tmp33_;
					gint _tmp34_;
					gint _tmp35_;
					gint _tmp36_;
					_tmp30_ = self->priv->pattern;
					_tmp31_ = i;
					_tmp32_ = self->priv->pattern;
					_tmp33_ = strlen (_tmp32_);
					_tmp34_ = _tmp33_;
					_tmp35_ = i;
					self->priv->bad_char_shift[string_get (_tmp30_, (glong) _tmp31_)] = (_tmp34_ - 1) - _tmp35_;
					_tmp36_ = self->priv->bad_char_shift[string_get (_tmp30_, (glong) _tmp31_)];
				}
			}
		}
	}
	return self;
}


GeditFindInFilesPluginBoyerMooreHorspool*
gedit_find_in_files_plugin_boyer_moore_horspool_new (const gchar* pattern_,
                                                     gboolean ignore_case_)
{
	return gedit_find_in_files_plugin_boyer_moore_horspool_construct (GEDIT_FIND_IN_FILES_PLUGIN_TYPE_BOYER_MOORE_HORSPOOL, pattern_, ignore_case_);
}


static gboolean
gedit_find_in_files_plugin_boyer_moore_horspool_real_has_match (GeditFindInFilesPluginIMatcher* base,
                                                                guint8* text,
                                                                gsize text_length,
                                                                gsize pos,
                                                                GeditFindInFilesPluginRange* match)
{
	GeditFindInFilesPluginBoyerMooreHorspool * self;
	gboolean result = FALSE;
	guint i = 0U;
	const gchar* _tmp0_;
	gint _tmp1_;
	gint _tmp2_;
	self = (GeditFindInFilesPluginBoyerMooreHorspool*) base;
	g_return_val_if_fail (match != NULL, FALSE);
	i = (guint) 0;
	text = text + pos;
	text_length = text_length - pos;
	_tmp0_ = self->priv->pattern;
	_tmp1_ = strlen (_tmp0_);
	_tmp2_ = _tmp1_;
	if (text_length < ((gsize) _tmp2_)) {
		result = FALSE;
		return result;
	}
	while (TRUE) {
		guint _tmp3_;
		const gchar* _tmp4_;
		gint _tmp5_;
		gint _tmp6_;
		guint _tmp31_;
		guint _tmp32_;
		const gchar* _tmp33_;
		gint _tmp34_;
		gint _tmp35_;
		guint8 _tmp36_;
		gint _tmp37_;
		_tmp3_ = i;
		_tmp4_ = self->priv->pattern;
		_tmp5_ = strlen (_tmp4_);
		_tmp6_ = _tmp5_;
		if (!(((gsize) _tmp3_) <= (text_length - _tmp6_))) {
			break;
		}
		{
			gint j = 0;
			const gchar* _tmp7_;
			gint _tmp8_;
			gint _tmp9_;
			_tmp7_ = self->priv->pattern;
			_tmp8_ = strlen (_tmp7_);
			_tmp9_ = _tmp8_;
			j = _tmp9_ - 1;
			{
				gboolean _tmp10_ = FALSE;
				_tmp10_ = TRUE;
				while (TRUE) {
					gint _tmp12_;
					gboolean _tmp13_;
					gint _tmp24_;
					if (!_tmp10_) {
						gint _tmp11_;
						_tmp11_ = j;
						j = _tmp11_ - 1;
					}
					_tmp10_ = FALSE;
					_tmp12_ = j;
					if (!(_tmp12_ >= 0)) {
						break;
					}
					_tmp13_ = self->priv->ignore_case;
					if (_tmp13_) {
						guint _tmp14_;
						gint _tmp15_;
						guint8 _tmp16_;
						const gchar* _tmp17_;
						gint _tmp18_;
						_tmp14_ = i;
						_tmp15_ = j;
						_tmp16_ = text[_tmp14_ + _tmp15_];
						_tmp17_ = self->priv->pattern;
						_tmp18_ = j;
						if (tolower ((gint) _tmp16_) != tolower ((gint) string_get (_tmp17_, (glong) _tmp18_))) {
							break;
						}
					} else {
						guint _tmp19_;
						gint _tmp20_;
						guint8 _tmp21_;
						const gchar* _tmp22_;
						gint _tmp23_;
						_tmp19_ = i;
						_tmp20_ = j;
						_tmp21_ = text[_tmp19_ + _tmp20_];
						_tmp22_ = self->priv->pattern;
						_tmp23_ = j;
						if (_tmp21_ != ((guint8) string_get (_tmp22_, (glong) _tmp23_))) {
							break;
						}
					}
					_tmp24_ = j;
					if (_tmp24_ == 0) {
						guint _tmp25_;
						GeditFindInFilesPluginRange _tmp26_;
						gsize _tmp27_;
						const gchar* _tmp28_;
						gint _tmp29_;
						gint _tmp30_;
						_tmp25_ = i;
						(*match).from = pos + _tmp25_;
						_tmp26_ = *match;
						_tmp27_ = _tmp26_.from;
						_tmp28_ = self->priv->pattern;
						_tmp29_ = strlen (_tmp28_);
						_tmp30_ = _tmp29_;
						(*match).to = _tmp27_ + _tmp30_;
						result = TRUE;
						return result;
					}
				}
			}
		}
		_tmp31_ = i;
		_tmp32_ = i;
		_tmp33_ = self->priv->pattern;
		_tmp34_ = strlen (_tmp33_);
		_tmp35_ = _tmp34_;
		_tmp36_ = text[(_tmp32_ + _tmp35_) - 1];
		_tmp37_ = self->priv->bad_char_shift[_tmp36_];
		i = _tmp31_ + _tmp37_;
	}
	result = FALSE;
	return result;
}


static void
gedit_find_in_files_plugin_boyer_moore_horspool_class_init (GeditFindInFilesPluginBoyerMooreHorspoolClass * klass)
{
	gedit_find_in_files_plugin_boyer_moore_horspool_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (GeditFindInFilesPluginBoyerMooreHorspoolPrivate));
	G_OBJECT_CLASS (klass)->finalize = gedit_find_in_files_plugin_boyer_moore_horspool_finalize;
}


static void
gedit_find_in_files_plugin_boyer_moore_horspool_gedit_find_in_files_plugin_imatcher_interface_init (GeditFindInFilesPluginIMatcherIface * iface)
{
	gedit_find_in_files_plugin_boyer_moore_horspool_gedit_find_in_files_plugin_imatcher_parent_iface = g_type_interface_peek_parent (iface);
	iface->has_match = (gboolean (*) (GeditFindInFilesPluginIMatcher *, guint8*, gsize, gsize, GeditFindInFilesPluginRange*)) gedit_find_in_files_plugin_boyer_moore_horspool_real_has_match;
}


static void
gedit_find_in_files_plugin_boyer_moore_horspool_instance_init (GeditFindInFilesPluginBoyerMooreHorspool * self)
{
	self->priv = GEDIT_FIND_IN_FILES_PLUGIN_BOYER_MOORE_HORSPOOL_GET_PRIVATE (self);
}


static void
gedit_find_in_files_plugin_boyer_moore_horspool_finalize (GObject * obj)
{
	GeditFindInFilesPluginBoyerMooreHorspool * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GEDIT_FIND_IN_FILES_PLUGIN_TYPE_BOYER_MOORE_HORSPOOL, GeditFindInFilesPluginBoyerMooreHorspool);
	_g_free0 (self->priv->pattern);
	G_OBJECT_CLASS (gedit_find_in_files_plugin_boyer_moore_horspool_parent_class)->finalize (obj);
}


GType
gedit_find_in_files_plugin_boyer_moore_horspool_get_type (void)
{
	return gedit_find_in_files_plugin_boyer_moore_horspool_type_id;
}


GType
gedit_find_in_files_plugin_boyer_moore_horspool_register_type (GTypeModule * module)
{
	static const GTypeInfo g_define_type_info = { sizeof (GeditFindInFilesPluginBoyerMooreHorspoolClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) gedit_find_in_files_plugin_boyer_moore_horspool_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GeditFindInFilesPluginBoyerMooreHorspool), 0, (GInstanceInitFunc) gedit_find_in_files_plugin_boyer_moore_horspool_instance_init, NULL };
	static const GInterfaceInfo gedit_find_in_files_plugin_imatcher_info = { (GInterfaceInitFunc) gedit_find_in_files_plugin_boyer_moore_horspool_gedit_find_in_files_plugin_imatcher_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
	gedit_find_in_files_plugin_boyer_moore_horspool_type_id = g_type_module_register_type (module, G_TYPE_OBJECT, "GeditFindInFilesPluginBoyerMooreHorspool", &g_define_type_info, 0);
	g_type_module_add_interface (module, gedit_find_in_files_plugin_boyer_moore_horspool_type_id, GEDIT_FIND_IN_FILES_PLUGIN_TYPE_IMATCHER, &gedit_find_in_files_plugin_imatcher_info);
	return gedit_find_in_files_plugin_boyer_moore_horspool_type_id;
}



