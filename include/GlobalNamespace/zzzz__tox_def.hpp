#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__tox_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(tox)
namespace GlobalNamespace {
struct __tox__NativeToxInstance;
}
namespace GlobalNamespace {
class __tox__PrintCallback;
}
namespace GlobalNamespace {
struct __tox__TOX_ERROR;
}
namespace GlobalNamespace {
struct __tox__TOX_PLAYER_DATA_TYPE;
}
namespace GlobalNamespace {
struct __tox__TOX_SESSION_DATA_TYPE;
}
namespace GlobalNamespace {
struct __tox__TOX_TRIAGE_SETTING;
}
namespace GlobalNamespace {
struct __tox__ToxConfig;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct __tox__TOX_ERROR;
}
namespace GlobalNamespace {
struct __tox__TOX_PLAYER_DATA_TYPE;
}
namespace GlobalNamespace {
struct __tox__TOX_SESSION_DATA_TYPE;
}
namespace GlobalNamespace {
struct __tox__TOX_TRIAGE_SETTING;
}
namespace GlobalNamespace {
class __tox__PrintCallback;
}
namespace GlobalNamespace {
class tox;
}
namespace GlobalNamespace {
struct __tox__NativeToxInstance;
}
namespace GlobalNamespace {
struct __tox__ToxConfig;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__tox__TOX_ERROR);
MARK_VAL_T(::GlobalNamespace::__tox__TOX_PLAYER_DATA_TYPE);
MARK_VAL_T(::GlobalNamespace::__tox__TOX_SESSION_DATA_TYPE);
MARK_VAL_T(::GlobalNamespace::__tox__TOX_TRIAGE_SETTING);
MARK_REF_PTR_T(::GlobalNamespace::__tox__PrintCallback);
MARK_REF_PTR_T(::GlobalNamespace::tox);
MARK_VAL_T(::GlobalNamespace::__tox__NativeToxInstance);
MARK_VAL_T(::GlobalNamespace::__tox__ToxConfig);
// Type: ::PrintCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::tox::PrintCallback*
class CORDL_TYPE __tox__PrintCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x28dde34, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(ByRefConst<::StringW> arg1, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x28dde54, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x28dde20, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(ByRefConst<::StringW> arg1);

  static inline ::GlobalNamespace::__tox__PrintCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x28ddd4c, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __tox__PrintCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__tox__PrintCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __tox__PrintCallback(__tox__PrintCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__tox__PrintCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __tox__PrintCallback(__tox__PrintCallback const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__tox__PrintCallback, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::TOX_ERROR
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::tox::TOX_ERROR
struct CORDL_TYPE __tox__TOX_ERROR {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____tox__TOX_ERROR_Unwrapped
  enum struct ____tox__TOX_ERROR_Unwrapped : int32_t {
    __E_TOX_NO_ERROR = static_cast<int32_t>(0x0),
    __E_TOX_UNKNOWN_ERROR = static_cast<int32_t>(0x1),
    __E_TOX_BAD_INSTANCE = static_cast<int32_t>(0x2),
    __E_TOX_BAD_CONFIG = static_cast<int32_t>(0x3),
    __E_TOX_BAD_ACCOUNT_UUID = static_cast<int32_t>(0x4),
    __E_TOX_BAD_API_KEY = static_cast<int32_t>(0x5),
    __E_TOX_BAD_PLAYER_NAME = static_cast<int32_t>(0x6),
    __E_TOX_BAD_SESSION_NAME = static_cast<int32_t>(0x7),
    __E_TOX_BAD_AUDIO = static_cast<int32_t>(0x8),
    __E_TOX_BAD_SAMPLE_RATE = static_cast<int32_t>(0x9),
    __E_TOX_SAMPLES_SKIPPED = static_cast<int32_t>(0xa),
    __E_TOX_NO_SESSION_SET = static_cast<int32_t>(0xb),
    __E_TOX_UPLOAD_METADATA_FAILED = static_cast<int32_t>(0xc),
    __E_TOX_BAD_TENANT_PREFIX = static_cast<int32_t>(0xd),
    __E_TOX_BAD_PLAYER_ALIAS = static_cast<int32_t>(0xe),
    __E_TOX_BAD_SESSION_ALIAS = static_cast<int32_t>(0xf),
    __E_TOX_BAD_SESSION_DATA = static_cast<int32_t>(0x10),
    __E_TOX_ALREADY_IN_SESSION = static_cast<int32_t>(0x11),
    __E_TOX_NOT_IN_SESSION = static_cast<int32_t>(0x12),
    __E_TOX_BAD_SESSION_DATA_TYPE = static_cast<int32_t>(0x13),
    __E_TOX_BAD_PLAYER_DATA_TYPE = static_cast<int32_t>(0x14),
    __E_TOX_BAD_PLAYER_DATA = static_cast<int32_t>(0x15),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____tox__TOX_ERROR_Unwrapped() const noexcept {
    return static_cast<____tox__TOX_ERROR_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __tox__TOX_ERROR();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __tox__TOX_ERROR(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field TOX_ALREADY_IN_SESSION value: static_cast<int32_t>(0x11)
  static ::GlobalNamespace::__tox__TOX_ERROR const TOX_ALREADY_IN_SESSION;

  /// @brief Field TOX_BAD_ACCOUNT_UUID value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__tox__TOX_ERROR const TOX_BAD_ACCOUNT_UUID;

  /// @brief Field TOX_BAD_API_KEY value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__tox__TOX_ERROR const TOX_BAD_API_KEY;

  /// @brief Field TOX_BAD_AUDIO value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__tox__TOX_ERROR const TOX_BAD_AUDIO;

  /// @brief Field TOX_BAD_CONFIG value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__tox__TOX_ERROR const TOX_BAD_CONFIG;

  /// @brief Field TOX_BAD_INSTANCE value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__tox__TOX_ERROR const TOX_BAD_INSTANCE;

  /// @brief Field TOX_BAD_PLAYER_ALIAS value: static_cast<int32_t>(0xe)
  static ::GlobalNamespace::__tox__TOX_ERROR const TOX_BAD_PLAYER_ALIAS;

  /// @brief Field TOX_BAD_PLAYER_DATA value: static_cast<int32_t>(0x15)
  static ::GlobalNamespace::__tox__TOX_ERROR const TOX_BAD_PLAYER_DATA;

  /// @brief Field TOX_BAD_PLAYER_DATA_TYPE value: static_cast<int32_t>(0x14)
  static ::GlobalNamespace::__tox__TOX_ERROR const TOX_BAD_PLAYER_DATA_TYPE;

  /// @brief Field TOX_BAD_PLAYER_NAME value: static_cast<int32_t>(0x6)
  static ::GlobalNamespace::__tox__TOX_ERROR const TOX_BAD_PLAYER_NAME;

  /// @brief Field TOX_BAD_SAMPLE_RATE value: static_cast<int32_t>(0x9)
  static ::GlobalNamespace::__tox__TOX_ERROR const TOX_BAD_SAMPLE_RATE;

  /// @brief Field TOX_BAD_SESSION_ALIAS value: static_cast<int32_t>(0xf)
  static ::GlobalNamespace::__tox__TOX_ERROR const TOX_BAD_SESSION_ALIAS;

  /// @brief Field TOX_BAD_SESSION_DATA value: static_cast<int32_t>(0x10)
  static ::GlobalNamespace::__tox__TOX_ERROR const TOX_BAD_SESSION_DATA;

  /// @brief Field TOX_BAD_SESSION_DATA_TYPE value: static_cast<int32_t>(0x13)
  static ::GlobalNamespace::__tox__TOX_ERROR const TOX_BAD_SESSION_DATA_TYPE;

  /// @brief Field TOX_BAD_SESSION_NAME value: static_cast<int32_t>(0x7)
  static ::GlobalNamespace::__tox__TOX_ERROR const TOX_BAD_SESSION_NAME;

  /// @brief Field TOX_BAD_TENANT_PREFIX value: static_cast<int32_t>(0xd)
  static ::GlobalNamespace::__tox__TOX_ERROR const TOX_BAD_TENANT_PREFIX;

  /// @brief Field TOX_NOT_IN_SESSION value: static_cast<int32_t>(0x12)
  static ::GlobalNamespace::__tox__TOX_ERROR const TOX_NOT_IN_SESSION;

  /// @brief Field TOX_NO_ERROR value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__tox__TOX_ERROR const TOX_NO_ERROR;

  /// @brief Field TOX_NO_SESSION_SET value: static_cast<int32_t>(0xb)
  static ::GlobalNamespace::__tox__TOX_ERROR const TOX_NO_SESSION_SET;

  /// @brief Field TOX_SAMPLES_SKIPPED value: static_cast<int32_t>(0xa)
  static ::GlobalNamespace::__tox__TOX_ERROR const TOX_SAMPLES_SKIPPED;

  /// @brief Field TOX_UNKNOWN_ERROR value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__tox__TOX_ERROR const TOX_UNKNOWN_ERROR;

  /// @brief Field TOX_UPLOAD_METADATA_FAILED value: static_cast<int32_t>(0xc)
  static ::GlobalNamespace::__tox__TOX_ERROR const TOX_UPLOAD_METADATA_FAILED;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__tox__TOX_ERROR, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__tox__TOX_ERROR, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::TOX_TRIAGE_SETTING
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::tox::TOX_TRIAGE_SETTING
struct CORDL_TYPE __tox__TOX_TRIAGE_SETTING {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____tox__TOX_TRIAGE_SETTING_Unwrapped
  enum struct ____tox__TOX_TRIAGE_SETTING_Unwrapped : int32_t {
    __E_TOX_NONE = static_cast<int32_t>(0x0),
    __E_TOX_LIGHT = static_cast<int32_t>(0x1),
    __E_TOX_HEAVY = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____tox__TOX_TRIAGE_SETTING_Unwrapped() const noexcept {
    return static_cast<____tox__TOX_TRIAGE_SETTING_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __tox__TOX_TRIAGE_SETTING();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __tox__TOX_TRIAGE_SETTING(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field TOX_HEAVY value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__tox__TOX_TRIAGE_SETTING const TOX_HEAVY;

  /// @brief Field TOX_LIGHT value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__tox__TOX_TRIAGE_SETTING const TOX_LIGHT;

  /// @brief Field TOX_NONE value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__tox__TOX_TRIAGE_SETTING const TOX_NONE;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__tox__TOX_TRIAGE_SETTING, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__tox__TOX_TRIAGE_SETTING, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::TOX_PLAYER_DATA_TYPE
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::tox::TOX_PLAYER_DATA_TYPE
struct CORDL_TYPE __tox__TOX_PLAYER_DATA_TYPE {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____tox__TOX_PLAYER_DATA_TYPE_Unwrapped
  enum struct ____tox__TOX_PLAYER_DATA_TYPE_Unwrapped : int32_t {
    __E_TOX_PLAYER_LANGUAGE_PREFERENCE = static_cast<int32_t>(0x0),
    __E_TOX_PLAYER_PLATFORM_INFO = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____tox__TOX_PLAYER_DATA_TYPE_Unwrapped() const noexcept {
    return static_cast<____tox__TOX_PLAYER_DATA_TYPE_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __tox__TOX_PLAYER_DATA_TYPE();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __tox__TOX_PLAYER_DATA_TYPE(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field TOX_PLAYER_LANGUAGE_PREFERENCE value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__tox__TOX_PLAYER_DATA_TYPE const TOX_PLAYER_LANGUAGE_PREFERENCE;

  /// @brief Field TOX_PLAYER_PLATFORM_INFO value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__tox__TOX_PLAYER_DATA_TYPE const TOX_PLAYER_PLATFORM_INFO;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__tox__TOX_PLAYER_DATA_TYPE, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__tox__TOX_PLAYER_DATA_TYPE, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::TOX_SESSION_DATA_TYPE
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::tox::TOX_SESSION_DATA_TYPE
struct CORDL_TYPE __tox__TOX_SESSION_DATA_TYPE {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____tox__TOX_SESSION_DATA_TYPE_Unwrapped
  enum struct ____tox__TOX_SESSION_DATA_TYPE_Unwrapped : int32_t {
    __E_TOX_SESSION_TYPE = static_cast<int32_t>(0x0),
    __E_TOX_SESSION_PASSTHROUGH_DATA = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____tox__TOX_SESSION_DATA_TYPE_Unwrapped() const noexcept {
    return static_cast<____tox__TOX_SESSION_DATA_TYPE_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __tox__TOX_SESSION_DATA_TYPE();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __tox__TOX_SESSION_DATA_TYPE(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field TOX_SESSION_PASSTHROUGH_DATA value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__tox__TOX_SESSION_DATA_TYPE const TOX_SESSION_PASSTHROUGH_DATA;

  /// @brief Field TOX_SESSION_TYPE value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__tox__TOX_SESSION_DATA_TYPE const TOX_SESSION_TYPE;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__tox__TOX_SESSION_DATA_TYPE, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__tox__TOX_SESSION_DATA_TYPE, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ToxConfig
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::tox::ToxConfig
struct CORDL_TYPE __tox__ToxConfig {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __tox__ToxConfig();

  // Ctor Parameters [CppParam { name: "account_uuid", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "api_key", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "player_name_unique", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "verbose", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "disable_upload_after_delay", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "triage_setting", ty: "::GlobalNamespace::__tox__TOX_TRIAGE_SETTING", modifiers: "", def_value:
  // None }, CppParam { name: "obscure_names", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "single_tenant_prefix", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "enable_proximity_chat", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __tox__ToxConfig(::StringW account_uuid, ::StringW api_key, ::StringW player_name_unique, int32_t verbose, int32_t disable_upload_after_delay,
                             ::GlobalNamespace::__tox__TOX_TRIAGE_SETTING triage_setting, int32_t obscure_names, ::StringW single_tenant_prefix, int32_t enable_proximity_chat) noexcept;

  /// @brief Field account_uuid, offset: 0x0, size: 0x8, def value: None
  ::StringW account_uuid;

  /// @brief Field api_key, offset: 0x8, size: 0x8, def value: None
  ::StringW api_key;

  /// @brief Field player_name_unique, offset: 0x10, size: 0x8, def value: None
  ::StringW player_name_unique;

  /// @brief Field verbose, offset: 0x18, size: 0x4, def value: None
  int32_t verbose;

  /// @brief Field disable_upload_after_delay, offset: 0x1c, size: 0x4, def value: None
  int32_t disable_upload_after_delay;

  /// @brief Field triage_setting, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::__tox__TOX_TRIAGE_SETTING triage_setting;

  /// @brief Field obscure_names, offset: 0x24, size: 0x4, def value: None
  int32_t obscure_names;

  /// @brief Field single_tenant_prefix, offset: 0x28, size: 0x8, def value: None
  ::StringW single_tenant_prefix;

  /// @brief Field enable_proximity_chat, offset: 0x30, size: 0x4, def value: None
  int32_t enable_proximity_chat;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__tox__ToxConfig, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__tox__ToxConfig, account_uuid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__tox__ToxConfig, api_key) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__tox__ToxConfig, player_name_unique) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__tox__ToxConfig, verbose) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__tox__ToxConfig, disable_upload_after_delay) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__tox__ToxConfig, triage_setting) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__tox__ToxConfig, obscure_names) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__tox__ToxConfig, single_tenant_prefix) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__tox__ToxConfig, enable_proximity_chat) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::NativeToxInstance
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::tox::NativeToxInstance
struct CORDL_TYPE __tox__NativeToxInstance {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __tox__NativeToxInstance();

  // Ctor Parameters [CppParam { name: "tox_internal_ptr", ty: "void*", modifiers: "", def_value: None }]
  constexpr __tox__NativeToxInstance(void* tox_internal_ptr) noexcept;

  /// @brief Field tox_internal_ptr, offset: 0x0, size: 0x8, def value: None
  void* tox_internal_ptr;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__tox__NativeToxInstance, 0x8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__tox__NativeToxInstance, tox_internal_ptr) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::tox
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::tox*
class CORDL_TYPE tox : public ::System::Object {
public:
  // Declarations
  using NativeToxInstance = ::GlobalNamespace::__tox__NativeToxInstance;

  using PrintCallback = ::GlobalNamespace::__tox__PrintCallback;

  using TOX_ERROR = ::GlobalNamespace::__tox__TOX_ERROR;

  using TOX_PLAYER_DATA_TYPE = ::GlobalNamespace::__tox__TOX_PLAYER_DATA_TYPE;

  using TOX_SESSION_DATA_TYPE = ::GlobalNamespace::__tox__TOX_SESSION_DATA_TYPE;

  using TOX_TRIAGE_SETTING = ::GlobalNamespace::__tox__TOX_TRIAGE_SETTING;

  using ToxConfig = ::GlobalNamespace::__tox__ToxConfig;

  static inline ::GlobalNamespace::tox* New_ctor();

  /// @brief Method .ctor, addr 0x28ddd44, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method tox_add_audio_float, addr 0x28dd24c, size 0xb8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__tox__TOX_ERROR tox_add_audio_float(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr, ByRefConst<::ArrayW<float_t, ::Array<float_t>*>> audio,
                                                                        uint32_t num_samples, uint32_t sample_rate, uint32_t num_channels);

  /// @brief Method tox_add_audio_float_raw, addr 0x28dd304, size 0xb0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__tox__TOX_ERROR tox_add_audio_float_raw(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr, void* audio, uint32_t num_samples,
                                                                            uint32_t sample_rate, uint32_t num_channels);

  /// @brief Method tox_add_audio_nonrealtime_float, addr 0x28dd51c, size 0xb8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__tox__TOX_ERROR tox_add_audio_nonrealtime_float(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr,
                                                                                    ByRefConst<::ArrayW<float_t, ::Array<float_t>*>> audio, uint32_t num_samples, uint32_t sample_rate,
                                                                                    uint32_t num_channels);

  /// @brief Method tox_add_audio_nonrealtime_short, addr 0x28dd5d4, size 0xb8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__tox__TOX_ERROR tox_add_audio_nonrealtime_short(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr,
                                                                                    ByRefConst<::ArrayW<int16_t, ::Array<int16_t>*>> audio, uint32_t num_samples, uint32_t sample_rate,
                                                                                    uint32_t num_channels);

  /// @brief Method tox_add_audio_short, addr 0x28dd464, size 0xb8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__tox__TOX_ERROR tox_add_audio_short(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr, ByRefConst<::ArrayW<int16_t, ::Array<int16_t>*>> audio,
                                                                        uint32_t num_samples, uint32_t sample_rate, uint32_t num_channels);

  /// @brief Method tox_add_audio_short_raw, addr 0x28dd3b4, size 0xb0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__tox__TOX_ERROR tox_add_audio_short_raw(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr, void* audio, uint32_t num_samples,
                                                                            uint32_t sample_rate, uint32_t num_channels);

  /// @brief Method tox_add_session_data, addr 0x28dcc44, size 0xa4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__tox__TOX_ERROR tox_add_session_data(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr, ::StringW session_data);

  /// @brief Method tox_add_structured_player_data, addr 0x28dda78, size 0xb4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__tox__TOX_ERROR tox_add_structured_player_data(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr,
                                                                                   ::GlobalNamespace::__tox__TOX_PLAYER_DATA_TYPE data_type, ::StringW player_data);

  /// @brief Method tox_add_structured_session_data, addr 0x28dd9c4, size 0xb4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__tox__TOX_ERROR tox_add_structured_session_data(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr,
                                                                                    ::GlobalNamespace::__tox__TOX_SESSION_DATA_TYPE data_type, ::StringW session_data);

  /// @brief Method tox_create_instance, addr 0x28dc7e0, size 0xe8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__tox__TOX_ERROR tox_create_instance(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr, ByRef<::GlobalNamespace::__tox__ToxConfig> tox_config_ptr);

  /// @brief Method tox_destroy_instance, addr 0x28dc8c8, size 0x80, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__tox__TOX_ERROR tox_destroy_instance(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr);

  /// @brief Method tox_error_name, addr 0x28dc760, size 0x80, virtual false, abstract: false, final false
  static inline void* tox_error_name(::GlobalNamespace::__tox__TOX_ERROR error);

  /// @brief Method tox_get_internal_player_uuid, addr 0x28ddc68, size 0xdc, virtual false, abstract: false, final false
  static inline ::StringW tox_get_internal_player_uuid(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr);

  /// @brief Method tox_get_internal_player_uuid_raw, addr 0x28dc9ec, size 0x88, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__tox__TOX_ERROR tox_get_internal_player_uuid_raw(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr, ByRef<void*> internal_player_uuid);

  /// @brief Method tox_get_internal_session_uuid, addr 0x28ddb8c, size 0xdc, virtual false, abstract: false, final false
  static inline ::StringW tox_get_internal_session_uuid(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr);

  /// @brief Method tox_get_internal_session_uuid_raw, addr 0x28dcb18, size 0x88, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__tox__TOX_ERROR tox_get_internal_session_uuid_raw(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr, ByRef<void*> internal_session_uuid);

  /// @brief Method tox_get_version, addr 0x28ddb2c, size 0x60, virtual false, abstract: false, final false
  static inline ::StringW tox_get_version();

  /// @brief Method tox_get_version_raw, addr 0x28dd838, size 0x6c, virtual false, abstract: false, final false
  static inline void* tox_get_version_raw();

  /// @brief Method tox_global_cleanup, addr 0x28dc6f4, size 0x6c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__tox__TOX_ERROR tox_global_cleanup();

  /// @brief Method tox_global_init, addr 0x28dc688, size 0x6c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__tox__TOX_ERROR tox_global_init();

  /// @brief Method tox_join_session, addr 0x28dd8a4, size 0xa0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__tox__TOX_ERROR tox_join_session(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr, ::StringW session_name_unique);

  /// @brief Method tox_leave_session, addr 0x28dd944, size 0x80, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__tox__TOX_ERROR tox_leave_session(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr);

  /// @brief Method tox_set_global_muted, addr 0x28dcfb0, size 0x88, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__tox__TOX_ERROR tox_set_global_muted(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr, int32_t muted);

  /// @brief Method tox_set_log_error_callback, addr 0x28dd7b4, size 0x84, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__tox__TOX_ERROR tox_set_log_error_callback(::GlobalNamespace::__tox__PrintCallback* log_error_callback);

  /// @brief Method tox_set_log_info_callback, addr 0x28dd730, size 0x84, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__tox__TOX_ERROR tox_set_log_info_callback(::GlobalNamespace::__tox__PrintCallback* log_info_callback);

  /// @brief Method tox_set_player_alias, addr 0x28dca74, size 0xa4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__tox__TOX_ERROR tox_set_player_alias(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr, ::StringW player_alias);

  /// @brief Method tox_set_player_muted, addr 0x28dd038, size 0xb0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__tox__TOX_ERROR tox_set_player_muted(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr, ::StringW player, int32_t muted);

  /// @brief Method tox_set_players_muted_at_join, addr 0x28dd0e8, size 0x164, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__tox__TOX_ERROR tox_set_players_muted_at_join(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr,
                                                                                  ByRefConst<::ArrayW<::StringW, ::Array<::StringW>*>> players, uint32_t num_players);

  /// @brief Method tox_set_proximity_chat_can_hear_player, addr 0x28dce4c, size 0x164, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__tox__TOX_ERROR tox_set_proximity_chat_can_hear_player(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr,
                                                                                           ByRefConst<::ArrayW<::StringW, ::Array<::StringW>*>> players, uint32_t num_players);

  /// @brief Method tox_set_proximity_chat_player_can_hear, addr 0x28dcce8, size 0x164, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__tox__TOX_ERROR tox_set_proximity_chat_player_can_hear(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr,
                                                                                           ByRefConst<::ArrayW<::StringW, ::Array<::StringW>*>> players, uint32_t num_players);

  /// @brief Method tox_set_session_alias, addr 0x28dcba0, size 0xa4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__tox__TOX_ERROR tox_set_session_alias(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr, ::StringW session_alias);

  /// @brief Method tox_set_session_name, addr 0x28dc948, size 0xa4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__tox__TOX_ERROR tox_set_session_name(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr, ::StringW session_name_unique);

  /// @brief Method tox_set_single_tenant_prefix, addr 0x28dd68c, size 0xa4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__tox__TOX_ERROR tox_set_single_tenant_prefix(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr, ::StringW prefix);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr tox();

public:
  // Ctor Parameters [CppParam { name: "", ty: "tox", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  tox(tox&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "tox", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  tox(tox const&) = delete;

  /// @brief Field dllName offset 0xffffffff size 0x8
  static constexpr ::ConstString dllName{ u"libtox" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::tox, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__tox__TOX_ERROR, "", "tox/TOX_ERROR");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__tox__TOX_PLAYER_DATA_TYPE, "", "tox/TOX_PLAYER_DATA_TYPE");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__tox__TOX_SESSION_DATA_TYPE, "", "tox/TOX_SESSION_DATA_TYPE");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__tox__TOX_TRIAGE_SETTING, "", "tox/TOX_TRIAGE_SETTING");
NEED_NO_BOX(::GlobalNamespace::__tox__PrintCallback);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__tox__PrintCallback*, "", "tox/PrintCallback");
NEED_NO_BOX(::GlobalNamespace::tox);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::tox*, "", "tox");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__tox__NativeToxInstance, "", "tox/NativeToxInstance");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__tox__ToxConfig, "", "tox/ToxConfig");
