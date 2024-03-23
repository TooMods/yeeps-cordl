#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WriterContext)
// Forward declare root types
namespace ThirdParty::Json::LitJson {
class WriterContext;
}
// Write type traits
MARK_REF_PTR_T(::ThirdParty::Json::LitJson::WriterContext);
// Type: ThirdParty.Json.LitJson::WriterContext
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace ThirdParty::Json::LitJson {
// Is value type: false
// CS Name: ::ThirdParty.Json.LitJson::WriterContext*
class CORDL_TYPE WriterContext : public ::System::Object {
public:
  // Declarations
  /// @brief Field Count, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_Count, put = __cordl_internal_set_Count)) int32_t Count;

  /// @brief Field ExpectingValue, offset 0x16, size 0x1
  __declspec(property(get = __cordl_internal_get_ExpectingValue, put = __cordl_internal_set_ExpectingValue)) bool ExpectingValue;

  /// @brief Field InArray, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_InArray, put = __cordl_internal_set_InArray)) bool InArray;

  /// @brief Field InObject, offset 0x15, size 0x1
  __declspec(property(get = __cordl_internal_get_InObject, put = __cordl_internal_set_InObject)) bool InObject;

  /// @brief Field Padding, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_Padding, put = __cordl_internal_set_Padding)) int32_t Padding;

  static inline ::ThirdParty::Json::LitJson::WriterContext* New_ctor();

  constexpr int32_t const& __cordl_internal_get_Count() const;

  constexpr int32_t& __cordl_internal_get_Count();

  constexpr bool const& __cordl_internal_get_ExpectingValue() const;

  constexpr bool& __cordl_internal_get_ExpectingValue();

  constexpr bool const& __cordl_internal_get_InArray() const;

  constexpr bool& __cordl_internal_get_InArray();

  constexpr bool const& __cordl_internal_get_InObject() const;

  constexpr bool& __cordl_internal_get_InObject();

  constexpr int32_t const& __cordl_internal_get_Padding() const;

  constexpr int32_t& __cordl_internal_get_Padding();

  constexpr void __cordl_internal_set_Count(int32_t value);

  constexpr void __cordl_internal_set_ExpectingValue(bool value);

  constexpr void __cordl_internal_set_InArray(bool value);

  constexpr void __cordl_internal_set_InObject(bool value);

  constexpr void __cordl_internal_set_Padding(int32_t value);

  /// @brief Method .ctor, addr 0x14b0734, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WriterContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WriterContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WriterContext(WriterContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WriterContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WriterContext(WriterContext const&) = delete;

  /// @brief Field Count, offset: 0x10, size: 0x4, def value: None
  int32_t ___Count;

  /// @brief Field InArray, offset: 0x14, size: 0x1, def value: None
  bool ___InArray;

  /// @brief Field InObject, offset: 0x15, size: 0x1, def value: None
  bool ___InObject;

  /// @brief Field ExpectingValue, offset: 0x16, size: 0x1, def value: None
  bool ___ExpectingValue;

  /// @brief Field Padding, offset: 0x18, size: 0x4, def value: None
  int32_t ___Padding;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ThirdParty::Json::LitJson::WriterContext, 0x20>, "Size mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::WriterContext, ___Count) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::WriterContext, ___InArray) == 0x14, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::WriterContext, ___InObject) == 0x15, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::WriterContext, ___ExpectingValue) == 0x16, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::WriterContext, ___Padding) == 0x18, "Offset mismatch!");

} // namespace ThirdParty::Json::LitJson
NEED_NO_BOX(::ThirdParty::Json::LitJson::WriterContext);
DEFINE_IL2CPP_ARG_TYPE(::ThirdParty::Json::LitJson::WriterContext*, "ThirdParty.Json.LitJson", "WriterContext");
