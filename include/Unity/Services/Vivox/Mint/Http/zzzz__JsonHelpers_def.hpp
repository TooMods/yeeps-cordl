#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(JsonHelpers)
namespace Newtonsoft::Json::Serialization {
class ErrorEventArgs;
}
namespace System {
class Object;
}
namespace Unity::Services::Vivox::Mint::Http {
template <typename T> class __JsonHelpers____c__DisplayClass1_0_1;
}
// Forward declare root types
namespace Unity::Services::Vivox::Mint::Http {
class JsonHelpers;
}
namespace Unity::Services::Vivox::Mint::Http {
template <typename T> class __JsonHelpers____c__DisplayClass1_0_1;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::Mint::Http::JsonHelpers);
MARK_GEN_REF_PTR_T(::Unity::Services::Vivox::Mint::Http::__JsonHelpers____c__DisplayClass1_0_1);
// Type: ::<>c__DisplayClass1_0`1
// SizeInfo { instance_size: 24, native_size: 17, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::Http {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::JsonHelpers::<>c__DisplayClass1_0`1<T>*
class CORDL_TYPE __JsonHelpers____c__DisplayClass1_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field success, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_success, put = __cordl_internal_set_success)) bool success;

  static inline ::Unity::Services::Vivox::Mint::Http::__JsonHelpers____c__DisplayClass1_0_1<T>* New_ctor();

  /// @brief Method <TryParseJson>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _TryParseJson_b__0(::System::Object* sender, ::Newtonsoft::Json::Serialization::ErrorEventArgs* args);

  constexpr bool const& __cordl_internal_get_success() const;

  constexpr bool& __cordl_internal_get_success();

  constexpr void __cordl_internal_set_success(bool value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JsonHelpers____c__DisplayClass1_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__JsonHelpers____c__DisplayClass1_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JsonHelpers____c__DisplayClass1_0_1(__JsonHelpers____c__DisplayClass1_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JsonHelpers____c__DisplayClass1_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JsonHelpers____c__DisplayClass1_0_1(__JsonHelpers____c__DisplayClass1_0_1 const&) = delete;

  /// @brief Field success, offset: 0x10, size: 0x1, def value: None
  bool ___success;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Vivox::Mint::Http
// Type: Unity.Services.Vivox.Mint.Http::JsonHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::Http {
// Is value type: false
// CS Name: ::Unity.Services.Vivox.Mint.Http::JsonHelpers*
class CORDL_TYPE JsonHelpers : public ::System::Object {
public:
  // Declarations
  template <typename T> using __c__DisplayClass1_0_1 = ::Unity::Services::Vivox::Mint::Http::__JsonHelpers____c__DisplayClass1_0_1<T>;

  /// @brief Method RegisterTypesForAOT, addr 0x1704d0c, size 0x80, virtual false, abstract: false, final false
  static inline void RegisterTypesForAOT();

  /// @brief Method TryParseJson, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool TryParseJson(::StringW _cordl_this, ByRef<T> result);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonHelpers(JsonHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonHelpers(JsonHelpers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::Mint::Http::JsonHelpers, 0x10>, "Size mismatch!");

} // namespace Unity::Services::Vivox::Mint::Http
NEED_NO_BOX(::Unity::Services::Vivox::Mint::Http::JsonHelpers);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::Mint::Http::JsonHelpers*, "Unity.Services.Vivox.Mint.Http", "JsonHelpers");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Services::Vivox::Mint::Http::__JsonHelpers____c__DisplayClass1_0_1, "Unity.Services.Vivox.Mint.Http", "JsonHelpers/<>c__DisplayClass1_0`1");
