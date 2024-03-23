#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HashAlgorithmName)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Security::Cryptography {
struct HashAlgorithmName;
}
// Write type traits
MARK_VAL_T(::System::Security::Cryptography::HashAlgorithmName);
// Type: System.Security.Cryptography::HashAlgorithmName
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: true
// CS Name: ::System.Security.Cryptography::HashAlgorithmName
struct CORDL_TYPE HashAlgorithmName {
public:
  // Declarations
  __declspec(property(get = get_Name))::StringW Name;

  /// @brief Convert operator to "::System::IEquatable_1<::System::Security::Cryptography::HashAlgorithmName>"
  constexpr operator ::System::IEquatable_1<::System::Security::Cryptography::HashAlgorithmName>*();

  /// @brief Method Equals, addr 0x1d17f28, size 0x7c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x1d17fa4, size 0xc, virtual true, abstract: false, final true
  inline bool Equals(::System::Security::Cryptography::HashAlgorithmName other);

  /// @brief Method GetHashCode, addr 0x1d17fb0, size 0x18, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x1d17ed4, size 0x54, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x1d17ec4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method get_MD5, addr 0x1d17d84, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::HashAlgorithmName get_MD5();

  /// @brief Method get_Name, addr 0x1d17ecc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_SHA1, addr 0x1d17dc4, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::HashAlgorithmName get_SHA1();

  /// @brief Method get_SHA256, addr 0x1d17e04, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::HashAlgorithmName get_SHA256();

  /// @brief Method get_SHA384, addr 0x1d17e44, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::HashAlgorithmName get_SHA384();

  /// @brief Method get_SHA512, addr 0x1d17e84, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::HashAlgorithmName get_SHA512();

  /// @brief Convert to "::System::IEquatable_1<::System::Security::Cryptography::HashAlgorithmName>"
  constexpr ::System::IEquatable_1<::System::Security::Cryptography::HashAlgorithmName>* i___System__IEquatable_1___System__Security__Cryptography__HashAlgorithmName_();

  /// @brief Method op_Equality, addr 0x1d17fc8, size 0x8, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Security::Cryptography::HashAlgorithmName left, ::System::Security::Cryptography::HashAlgorithmName right);

  /// @brief Method op_Inequality, addr 0x1d17fd0, size 0x1c, virtual false, abstract: false, final false
  static inline bool op_Inequality(::System::Security::Cryptography::HashAlgorithmName left, ::System::Security::Cryptography::HashAlgorithmName right);

  // Ctor Parameters []
  // @brief default ctor
  constexpr HashAlgorithmName();

  // Ctor Parameters [CppParam { name: "_name", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr HashAlgorithmName(::StringW _name) noexcept;

  /// @brief Field _name, offset: 0x0, size: 0x8, def value: None
  ::StringW _name;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::HashAlgorithmName, 0x8>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::HashAlgorithmName, _name) == 0x0, "Offset mismatch!");

} // namespace System::Security::Cryptography
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::HashAlgorithmName, "System.Security.Cryptography", "HashAlgorithmName");
