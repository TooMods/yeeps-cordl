#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CSMConfig)
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace Amazon::Util {
class CSMConfig;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Util::CSMConfig);
// Type: Amazon.Util::CSMConfig
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 42, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util {
// Is value type: false
// CS Name: ::Amazon.Util::CSMConfig*
class CORDL_TYPE CSMConfig : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CSMClientId, put = set_CSMClientId))::StringW CSMClientId;

  __declspec(property(get = get_CSMEnabled, put = set_CSMEnabled))::System::Nullable_1<bool> CSMEnabled;

  __declspec(property(get = get_CSMHost, put = set_CSMHost))::StringW CSMHost;

  __declspec(property(get = get_CSMPort, put = set_CSMPort)) int32_t CSMPort;

  /// @brief Field <CSMClientId>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__CSMClientId_k__BackingField, put = __cordl_internal_set__CSMClientId_k__BackingField))::StringW _CSMClientId_k__BackingField;

  /// @brief Field <CSMEnabled>k__BackingField, offset 0x28, size 0x2
  __declspec(property(get = __cordl_internal_get__CSMEnabled_k__BackingField, put = __cordl_internal_set__CSMEnabled_k__BackingField))::System::Nullable_1<bool> _CSMEnabled_k__BackingField;

  /// @brief Field <CSMHost>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__CSMHost_k__BackingField, put = __cordl_internal_set__CSMHost_k__BackingField))::StringW _CSMHost_k__BackingField;

  /// @brief Field <CSMPort>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__CSMPort_k__BackingField, put = __cordl_internal_set__CSMPort_k__BackingField)) int32_t _CSMPort_k__BackingField;

  static inline ::Amazon::Util::CSMConfig* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__CSMClientId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__CSMClientId_k__BackingField();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__CSMEnabled_k__BackingField() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__CSMEnabled_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__CSMHost_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__CSMHost_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__CSMPort_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__CSMPort_k__BackingField();

  constexpr void __cordl_internal_set__CSMClientId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__CSMEnabled_k__BackingField(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__CSMHost_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__CSMPort_k__BackingField(int32_t value);

  /// @brief Method .ctor, addr 0x21fcdf0, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CSMClientId, addr 0x21fcdd0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_CSMClientId();

  /// @brief Method get_CSMEnabled, addr 0x21fcde0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<bool> get_CSMEnabled();

  /// @brief Method get_CSMHost, addr 0x21fcdb0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_CSMHost();

  /// @brief Method get_CSMPort, addr 0x21fcdc0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_CSMPort();

  /// @brief Method set_CSMClientId, addr 0x21fcdd8, size 0x8, virtual false, abstract: false, final false
  inline void set_CSMClientId(::StringW value);

  /// @brief Method set_CSMEnabled, addr 0x21fcde8, size 0x8, virtual false, abstract: false, final false
  inline void set_CSMEnabled(::System::Nullable_1<bool> value);

  /// @brief Method set_CSMHost, addr 0x21fcdb8, size 0x8, virtual false, abstract: false, final false
  inline void set_CSMHost(::StringW value);

  /// @brief Method set_CSMPort, addr 0x21fcdc8, size 0x8, virtual false, abstract: false, final false
  inline void set_CSMPort(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CSMConfig();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CSMConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CSMConfig(CSMConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CSMConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CSMConfig(CSMConfig const&) = delete;

  /// @brief Field <CSMHost>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____CSMHost_k__BackingField;

  /// @brief Field <CSMPort>k__BackingField, offset: 0x18, size: 0x4, def value: None
  int32_t ____CSMPort_k__BackingField;

  /// @brief Field <CSMClientId>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____CSMClientId_k__BackingField;

  /// @brief Field <CSMEnabled>k__BackingField, offset: 0x28, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____CSMEnabled_k__BackingField;

  /// @brief Field DEFAULT_HOST offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_HOST{ u"127.0.0.1" };

  /// @brief Field DEFAULT_PORT offset 0xffffffff size 0x4
  static constexpr int32_t DEFAULT_PORT{ static_cast<int32_t>(0x7918) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::CSMConfig, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::CSMConfig, ____CSMHost_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::CSMConfig, ____CSMPort_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::CSMConfig, ____CSMClientId_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::CSMConfig, ____CSMEnabled_k__BackingField) == 0x28, "Offset mismatch!");

} // namespace Amazon::Util
NEED_NO_BOX(::Amazon::Util::CSMConfig);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::CSMConfig*, "Amazon.Util", "CSMConfig");
