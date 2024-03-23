#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/Settings/zzzz__UserCrypto_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UserCrypto)
namespace Amazon::Runtime::Internal::Settings {
struct __UserCrypto__CRYPTPROTECT_PROMPTSTRUCT;
}
namespace Amazon::Runtime::Internal::Settings {
struct __UserCrypto__CryptProtectFlags;
}
namespace Amazon::Runtime::Internal::Settings {
struct __UserCrypto__CryptProtectPromptFlags;
}
namespace Amazon::Runtime::Internal::Settings {
struct __UserCrypto__DATA_BLOB;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Settings {
struct __UserCrypto__CryptProtectFlags;
}
namespace Amazon::Runtime::Internal::Settings {
struct __UserCrypto__CryptProtectPromptFlags;
}
namespace Amazon::Runtime::Internal::Settings {
class UserCrypto;
}
namespace Amazon::Runtime::Internal::Settings {
struct __UserCrypto__CRYPTPROTECT_PROMPTSTRUCT;
}
namespace Amazon::Runtime::Internal::Settings {
struct __UserCrypto__DATA_BLOB;
}
// Write type traits
MARK_VAL_T(::Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectFlags);
MARK_VAL_T(::Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectPromptFlags);
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Settings::UserCrypto);
MARK_VAL_T(::Amazon::Runtime::Internal::Settings::__UserCrypto__CRYPTPROTECT_PROMPTSTRUCT);
MARK_VAL_T(::Amazon::Runtime::Internal::Settings::__UserCrypto__DATA_BLOB);
// Type: ::DATA_BLOB
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Settings {
// Is value type: true
// CS Name: ::UserCrypto::DATA_BLOB
struct CORDL_TYPE __UserCrypto__DATA_BLOB {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UserCrypto__DATA_BLOB();

  // Ctor Parameters [CppParam { name: "cbData", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "pbData", ty: "void*", modifiers: "", def_value: None }]
  constexpr __UserCrypto__DATA_BLOB(int32_t cbData, void* pbData) noexcept;

  /// @brief Field cbData, offset: 0x0, size: 0x4, def value: None
  int32_t cbData;

  /// @brief Field pbData, offset: 0x8, size: 0x8, def value: None
  void* pbData;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Settings::__UserCrypto__DATA_BLOB, 0x10>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Settings::__UserCrypto__DATA_BLOB, cbData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Settings::__UserCrypto__DATA_BLOB, pbData) == 0x8, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Settings
// Type: ::CryptProtectPromptFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Settings {
// Is value type: true
// CS Name: ::UserCrypto::CryptProtectPromptFlags
struct CORDL_TYPE __UserCrypto__CryptProtectPromptFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____UserCrypto__CryptProtectPromptFlags_Unwrapped
  enum struct ____UserCrypto__CryptProtectPromptFlags_Unwrapped : int32_t {
    __E_CRYPTPROTECT_PROMPT_ON_UNPROTECT = static_cast<int32_t>(0x1),
    __E_CRYPTPROTECT_PROMPT_ON_PROTECT = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____UserCrypto__CryptProtectPromptFlags_Unwrapped() const noexcept {
    return static_cast<____UserCrypto__CryptProtectPromptFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __UserCrypto__CryptProtectPromptFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __UserCrypto__CryptProtectPromptFlags(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field CRYPTPROTECT_PROMPT_ON_PROTECT value: static_cast<int32_t>(0x2)
  static ::Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectPromptFlags const CRYPTPROTECT_PROMPT_ON_PROTECT;

  /// @brief Field CRYPTPROTECT_PROMPT_ON_UNPROTECT value: static_cast<int32_t>(0x1)
  static ::Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectPromptFlags const CRYPTPROTECT_PROMPT_ON_UNPROTECT;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectPromptFlags, 0x4>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectPromptFlags, value__) == 0x0, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Settings
// Type: ::CRYPTPROTECT_PROMPTSTRUCT
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Settings {
// Is value type: true
// CS Name: ::UserCrypto::CRYPTPROTECT_PROMPTSTRUCT
struct CORDL_TYPE __UserCrypto__CRYPTPROTECT_PROMPTSTRUCT {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UserCrypto__CRYPTPROTECT_PROMPTSTRUCT();

  // Ctor Parameters [CppParam { name: "cbSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "dwPromptFlags", ty:
  // "::Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectPromptFlags", modifiers: "", def_value: None }, CppParam { name: "hwndApp", ty: "void*", modifiers: "", def_value: None },
  // CppParam { name: "szPrompt", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr __UserCrypto__CRYPTPROTECT_PROMPTSTRUCT(int32_t cbSize, ::Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectPromptFlags dwPromptFlags, void* hwndApp,
                                                    ::StringW szPrompt) noexcept;

  /// @brief Field cbSize, offset: 0x0, size: 0x4, def value: None
  int32_t cbSize;

  /// @brief Field dwPromptFlags, offset: 0x4, size: 0x4, def value: None
  ::Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectPromptFlags dwPromptFlags;

  /// @brief Field hwndApp, offset: 0x8, size: 0x8, def value: None
  void* hwndApp;

  /// @brief Field szPrompt, offset: 0x10, size: 0x8, def value: None
  ::StringW szPrompt;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Settings::__UserCrypto__CRYPTPROTECT_PROMPTSTRUCT, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Settings::__UserCrypto__CRYPTPROTECT_PROMPTSTRUCT, cbSize) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Settings::__UserCrypto__CRYPTPROTECT_PROMPTSTRUCT, dwPromptFlags) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Settings::__UserCrypto__CRYPTPROTECT_PROMPTSTRUCT, hwndApp) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Settings::__UserCrypto__CRYPTPROTECT_PROMPTSTRUCT, szPrompt) == 0x10, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Settings
// Type: ::CryptProtectFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Settings {
// Is value type: true
// CS Name: ::UserCrypto::CryptProtectFlags
struct CORDL_TYPE __UserCrypto__CryptProtectFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____UserCrypto__CryptProtectFlags_Unwrapped
  enum struct ____UserCrypto__CryptProtectFlags_Unwrapped : int32_t {
    __E_CRYPTPROTECT_UI_FORBIDDEN = static_cast<int32_t>(0x1),
    __E_CRYPTPROTECT_LOCAL_MACHINE = static_cast<int32_t>(0x4),
    __E_CRYPTPROTECT_CRED_SYNC = static_cast<int32_t>(0x8),
    __E_CRYPTPROTECT_AUDIT = static_cast<int32_t>(0x10),
    __E_CRYPTPROTECT_NO_RECOVERY = static_cast<int32_t>(0x20),
    __E_CRYPTPROTECT_VERIFY_PROTECTION = static_cast<int32_t>(0x40),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____UserCrypto__CryptProtectFlags_Unwrapped() const noexcept {
    return static_cast<____UserCrypto__CryptProtectFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __UserCrypto__CryptProtectFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __UserCrypto__CryptProtectFlags(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field CRYPTPROTECT_AUDIT value: static_cast<int32_t>(0x10)
  static ::Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectFlags const CRYPTPROTECT_AUDIT;

  /// @brief Field CRYPTPROTECT_CRED_SYNC value: static_cast<int32_t>(0x8)
  static ::Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectFlags const CRYPTPROTECT_CRED_SYNC;

  /// @brief Field CRYPTPROTECT_LOCAL_MACHINE value: static_cast<int32_t>(0x4)
  static ::Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectFlags const CRYPTPROTECT_LOCAL_MACHINE;

  /// @brief Field CRYPTPROTECT_NO_RECOVERY value: static_cast<int32_t>(0x20)
  static ::Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectFlags const CRYPTPROTECT_NO_RECOVERY;

  /// @brief Field CRYPTPROTECT_UI_FORBIDDEN value: static_cast<int32_t>(0x1)
  static ::Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectFlags const CRYPTPROTECT_UI_FORBIDDEN;

  /// @brief Field CRYPTPROTECT_VERIFY_PROTECTION value: static_cast<int32_t>(0x40)
  static ::Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectFlags const CRYPTPROTECT_VERIFY_PROTECTION;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectFlags, 0x4>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectFlags, value__) == 0x0, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Settings
// Type: Amazon.Runtime.Internal.Settings::UserCrypto
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Settings {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Settings::UserCrypto*
class CORDL_TYPE UserCrypto : public ::System::Object {
public:
  // Declarations
  using CRYPTPROTECT_PROMPTSTRUCT = ::Amazon::Runtime::Internal::Settings::__UserCrypto__CRYPTPROTECT_PROMPTSTRUCT;

  using CryptProtectFlags = ::Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectFlags;

  using CryptProtectPromptFlags = ::Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectPromptFlags;

  using DATA_BLOB = ::Amazon::Runtime::Internal::Settings::__UserCrypto__DATA_BLOB;

  /// @brief Field _isUserCryptAvailable, offset 0xffffffff, size 0x2
  static __declspec(property(get = getStaticF__isUserCryptAvailable, put = setStaticF__isUserCryptAvailable))::System::Nullable_1<bool> _isUserCryptAvailable;

  /// @brief Method ConvertData, addr 0x2453a7c, size 0x8c, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::Internal::Settings::__UserCrypto__DATA_BLOB ConvertData(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method CryptProtectData, addr 0x2453c2c, size 0x124, virtual false, abstract: false, final false
  static inline bool CryptProtectData(ByRef<::Amazon::Runtime::Internal::Settings::__UserCrypto__DATA_BLOB> pDataIn, ::StringW szDataDescr,
                                      ByRef<::Amazon::Runtime::Internal::Settings::__UserCrypto__DATA_BLOB> pOptionalEntropy, void* pvReserved,
                                      ByRef<::Amazon::Runtime::Internal::Settings::__UserCrypto__CRYPTPROTECT_PROMPTSTRUCT> pPromptStruct,
                                      ::Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectFlags dwFlags, ByRef<::Amazon::Runtime::Internal::Settings::__UserCrypto__DATA_BLOB> pDataOut);

  /// @brief Method CryptUnprotectData, addr 0x2453b08, size 0x124, virtual false, abstract: false, final false
  static inline bool CryptUnprotectData(ByRef<::Amazon::Runtime::Internal::Settings::__UserCrypto__DATA_BLOB> pDataIn, ::StringW szDataDescr,
                                        ByRef<::Amazon::Runtime::Internal::Settings::__UserCrypto__DATA_BLOB> pOptionalEntropy, void* pvReserved,
                                        ByRef<::Amazon::Runtime::Internal::Settings::__UserCrypto__CRYPTPROTECT_PROMPTSTRUCT> pPromptStruct,
                                        ::Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectFlags dwFlags, ByRef<::Amazon::Runtime::Internal::Settings::__UserCrypto__DATA_BLOB> pDataOut);

  /// @brief Method Decrypt, addr 0x2452648, size 0x3b8, virtual false, abstract: false, final false
  static inline ::StringW Decrypt(::StringW encrypted);

  /// @brief Method Encrypt, addr 0x24533f4, size 0x3f0, virtual false, abstract: false, final false
  static inline ::StringW Encrypt(::StringW unencrypted);

  static inline ::System::Nullable_1<bool> getStaticF__isUserCryptAvailable();

  /// @brief Method get_IsUserCryptAvailable, addr 0x2453d50, size 0x27c, virtual false, abstract: false, final false
  static inline bool get_IsUserCryptAvailable();

  static inline void setStaticF__isUserCryptAvailable(::System::Nullable_1<bool> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UserCrypto();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UserCrypto", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UserCrypto(UserCrypto&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UserCrypto", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UserCrypto(UserCrypto const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Settings::UserCrypto, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal::Settings
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectFlags, "Amazon.Runtime.Internal.Settings", "UserCrypto/CryptProtectFlags");
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectPromptFlags, "Amazon.Runtime.Internal.Settings", "UserCrypto/CryptProtectPromptFlags");
NEED_NO_BOX(::Amazon::Runtime::Internal::Settings::UserCrypto);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Settings::UserCrypto*, "Amazon.Runtime.Internal.Settings", "UserCrypto");
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Settings::__UserCrypto__CRYPTPROTECT_PROMPTSTRUCT, "Amazon.Runtime.Internal.Settings", "UserCrypto/CRYPTPROTECT_PROMPTSTRUCT");
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Settings::__UserCrypto__DATA_BLOB, "Amazon.Runtime.Internal.Settings", "UserCrypto/DATA_BLOB");
