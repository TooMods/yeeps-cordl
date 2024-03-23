#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CryptoConfig)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Security::Cryptography {
class CryptoConfig;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::CryptoConfig);
// Type: System.Security.Cryptography::CryptoConfig
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::CryptoConfig*
class CORDL_TYPE CryptoConfig : public ::System::Object {
public:
  // Declarations
  /// @brief Field algorithms, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_algorithms, put = setStaticF_algorithms))::System::Collections::Generic::Dictionary_2<::StringW, ::System::Type*>* algorithms;

  /// @brief Field lockObject, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_lockObject, put = setStaticF_lockObject))::System::Object* lockObject;

  /// @brief Method AddAlgorithm, addr 0x1c90768, size 0x3a0, virtual false, abstract: false, final false
  static inline void AddAlgorithm(::System::Type* algorithm, ::ArrayW<::StringW, ::Array<::StringW>*> names);

  /// @brief Method AddOID, addr 0x1c8de20, size 0x40, virtual false, abstract: false, final false
  static inline void AddOID(::StringW oid, ::ArrayW<::StringW, ::Array<::StringW>*> names);

  /// @brief Method CreateFromName, addr 0x1c80ea0, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Object* CreateFromName(::StringW name);

  /// @brief Method CreateFromName, addr 0x1c8de60, size 0x1f2c, virtual false, abstract: false, final false
  static inline ::System::Object* CreateFromName(::StringW name, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method EncodeLongNumber, addr 0x1c90f14, size 0x190, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodeLongNumber(int64_t x);

  /// @brief Method EncodeOID, addr 0x1c90b08, size 0x40c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodeOID(::StringW str);

  /// @brief Method Initialize, addr 0x1c90668, size 0x100, virtual false, abstract: false, final false
  static inline void Initialize();

  /// @brief Method MapNameToOID, addr 0x1c8feb4, size 0x7b4, virtual false, abstract: false, final false
  static inline ::StringW MapNameToOID(::StringW name);

  /// @brief Method MapNameToOID, addr 0x1c8fe60, size 0x54, virtual false, abstract: false, final false
  static inline ::StringW MapNameToOID(::StringW name, ::System::Object* arg);

  static inline ::System::Security::Cryptography::CryptoConfig* New_ctor();

  /// @brief Method .ctor, addr 0x1c910a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Type*>* getStaticF_algorithms();

  static inline ::System::Object* getStaticF_lockObject();

  /// @brief Method get_AllowOnlyFipsAlgorithms, addr 0x1c87784, size 0x8, virtual false, abstract: false, final false
  static inline bool get_AllowOnlyFipsAlgorithms();

  static inline void setStaticF_algorithms(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Type*>* value);

  static inline void setStaticF_lockObject(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CryptoConfig();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CryptoConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CryptoConfig(CryptoConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CryptoConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CryptoConfig(CryptoConfig const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::CryptoConfig, 0x10>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::CryptoConfig);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::CryptoConfig*, "System.Security.Cryptography", "CryptoConfig");
