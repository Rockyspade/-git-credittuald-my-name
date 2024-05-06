#ifndef FEATUREFLAG_H
#define FEATUREFLAG_H

#define SESSION_FF_URL_ENCRYPTION "session_ff_url_encryption"

#include <libxml/tree.h>
#include <stdbool.h>

struct feature_flag {
	bool url_encryption_enabled;
};

void feature_flag_load_xml_attr(struct feature_flag *feature_flag, xmlDoc *doc, xmlAttrPtr attr);
void feature_flag_save(const struct feature_flag *feature_flag, unsigned const char key[KDF_HASH_LEN]);
void feature_flag_load(struct feature_flag *feature_flag, unsigned const char key[KDF_HASH_LEN]);
void feature_flag_cleanup();

#endif
