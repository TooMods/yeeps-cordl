#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(JsonSelectSettings)
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class JsonSelectSettings;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JsonSelectSettings);
// Type: Newtonsoft.Json.Linq::JsonSelectSettings
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Linq::JsonSelectSettings*
class CORDL_TYPE JsonSelectSettings : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ErrorWhenNoMatch, put = set_ErrorWhenNoMatch)) bool ErrorWhenNoMatch;

  /// @brief Field <ErrorWhenNoMatch>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__ErrorWhenNoMatch_k__BackingField, put = __cordl_internal_set__ErrorWhenNoMatch_k__BackingField)) bool _ErrorWhenNoMatch_k__BackingField;

  static inline ::Newtonsoft::Json::Linq::JsonSelectSettings* New_ctor();

  constexpr bool const& __cordl_internal_get__ErrorWhenNoMatch_k__BackingField() const;

  constexpr bool& __cordl_internal_get__ErrorWhenNoMatch_k__BackingField();

  constexpr void __cordl_internal_set__ErrorWhenNoMatch_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x13465f8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ErrorWhenNoMatch, addr 0x13465e4, size 0x8, virtual false, abstract: false, final false
  inline bool get_ErrorWhenNoMatch();

  /// @brief Method set_ErrorWhenNoMatch, addr 0x13465ec, size 0xc, virtual false, abstract: false, final false
  inline void set_ErrorWhenNoMatch(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonSelectSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonSelectSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonSelectSettings(JsonSelectSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonSelectSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonSelectSettings(JsonSelectSettings const&) = delete;

  /// @brief Field <ErrorWhenNoMatch>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____ErrorWhenNoMatch_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JsonSelectSettings, 0x18>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonSelectSettings, ____ErrorWhenNoMatch_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace Newtonsoft::Json::Linq
NEED_NO_BOX(::Newtonsoft::Json::Linq::JsonSelectSettings);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonSelectSettings*, "Newtonsoft.Json.Linq", "JsonSelectSettings");
