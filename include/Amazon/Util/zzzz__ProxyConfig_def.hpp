#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ProxyConfig)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace Amazon::Util {
class ProxyConfig;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Util::ProxyConfig);
// Type: Amazon.Util::ProxyConfig
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 57, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util {
// Is value type: false
// CS Name: ::Amazon.Util::ProxyConfig*
class CORDL_TYPE ProxyConfig : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_BypassList, put = set_BypassList))::System::Collections::Generic::List_1<::StringW>* BypassList;

  __declspec(property(get = get_BypassOnLocal, put = set_BypassOnLocal)) bool BypassOnLocal;

  __declspec(property(get = get_Host, put = set_Host))::StringW Host;

  __declspec(property(get = get_Password, put = set_Password))::StringW Password;

  __declspec(property(get = get_Port, put = set_Port))::System::Nullable_1<int32_t> Port;

  __declspec(property(get = get_Username, put = set_Username))::StringW Username;

  /// @brief Field <BypassList>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__BypassList_k__BackingField,
                      put = __cordl_internal_set__BypassList_k__BackingField))::System::Collections::Generic::List_1<::StringW>* _BypassList_k__BackingField;

  /// @brief Field <BypassOnLocal>k__BackingField, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__BypassOnLocal_k__BackingField, put = __cordl_internal_set__BypassOnLocal_k__BackingField)) bool _BypassOnLocal_k__BackingField;

  /// @brief Field <Host>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Host_k__BackingField, put = __cordl_internal_set__Host_k__BackingField))::StringW _Host_k__BackingField;

  /// @brief Field <Password>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__Password_k__BackingField, put = __cordl_internal_set__Password_k__BackingField))::StringW _Password_k__BackingField;

  /// @brief Field <Port>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Port_k__BackingField, put = __cordl_internal_set__Port_k__BackingField))::System::Nullable_1<int32_t> _Port_k__BackingField;

  /// @brief Field <Username>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Username_k__BackingField, put = __cordl_internal_set__Username_k__BackingField))::StringW _Username_k__BackingField;

  static inline ::Amazon::Util::ProxyConfig* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__BypassList_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__BypassList_k__BackingField() const;

  constexpr bool const& __cordl_internal_get__BypassOnLocal_k__BackingField() const;

  constexpr bool& __cordl_internal_get__BypassOnLocal_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Host_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Host_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Password_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Password_k__BackingField();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__Port_k__BackingField() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__Port_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Username_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Username_k__BackingField();

  constexpr void __cordl_internal_set__BypassList_k__BackingField(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set__BypassOnLocal_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Host_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Password_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Port_k__BackingField(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__Username_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x21fcc3c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BypassList, addr 0x21fcc18, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_BypassList();

  /// @brief Method get_BypassOnLocal, addr 0x21fcc28, size 0x8, virtual false, abstract: false, final false
  inline bool get_BypassOnLocal();

  /// @brief Method get_Host, addr 0x21fcbd8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Host();

  /// @brief Method get_Password, addr 0x21fcc08, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Password();

  /// @brief Method get_Port, addr 0x21fcbe8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int32_t> get_Port();

  /// @brief Method get_Username, addr 0x21fcbf8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Username();

  /// @brief Method set_BypassList, addr 0x21fcc20, size 0x8, virtual false, abstract: false, final false
  inline void set_BypassList(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method set_BypassOnLocal, addr 0x21fcc30, size 0xc, virtual false, abstract: false, final false
  inline void set_BypassOnLocal(bool value);

  /// @brief Method set_Host, addr 0x21fcbe0, size 0x8, virtual false, abstract: false, final false
  inline void set_Host(::StringW value);

  /// @brief Method set_Password, addr 0x21fcc10, size 0x8, virtual false, abstract: false, final false
  inline void set_Password(::StringW value);

  /// @brief Method set_Port, addr 0x21fcbf0, size 0x8, virtual false, abstract: false, final false
  inline void set_Port(::System::Nullable_1<int32_t> value);

  /// @brief Method set_Username, addr 0x21fcc00, size 0x8, virtual false, abstract: false, final false
  inline void set_Username(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProxyConfig();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProxyConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProxyConfig(ProxyConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProxyConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProxyConfig(ProxyConfig const&) = delete;

  /// @brief Field <Host>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Host_k__BackingField;

  /// @brief Field <Port>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____Port_k__BackingField;

  /// @brief Field <Username>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____Username_k__BackingField;

  /// @brief Field <Password>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____Password_k__BackingField;

  /// @brief Field <BypassList>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____BypassList_k__BackingField;

  /// @brief Field <BypassOnLocal>k__BackingField, offset: 0x38, size: 0x1, def value: None
  bool ____BypassOnLocal_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::ProxyConfig, 0x40>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::ProxyConfig, ____Host_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::ProxyConfig, ____Port_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::ProxyConfig, ____Username_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::ProxyConfig, ____Password_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::ProxyConfig, ____BypassList_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::ProxyConfig, ____BypassOnLocal_k__BackingField) == 0x38, "Offset mismatch!");

} // namespace Amazon::Util
NEED_NO_BOX(::Amazon::Util::ProxyConfig);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::ProxyConfig*, "Amazon.Util", "ProxyConfig");
