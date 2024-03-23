#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__RSASignaturePaddingMode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RSASignaturePadding)
namespace System::Security::Cryptography {
struct RSASignaturePaddingMode;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Security::Cryptography {
class RSASignaturePadding;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::RSASignaturePadding);
// Type: System.Security.Cryptography::RSASignaturePadding
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::RSASignaturePadding*
class CORDL_TYPE RSASignaturePadding : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Mode))::System::Security::Cryptography::RSASignaturePaddingMode Mode;

  /// @brief Field _mode, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__mode, put = __cordl_internal_set__mode))::System::Security::Cryptography::RSASignaturePaddingMode _mode;

  /// @brief Field s_pkcs1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_pkcs1, put = setStaticF_s_pkcs1))::System::Security::Cryptography::RSASignaturePadding* s_pkcs1;

  /// @brief Field s_pss, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_pss, put = setStaticF_s_pss))::System::Security::Cryptography::RSASignaturePadding* s_pss;

  /// @brief Convert operator to "::System::IEquatable_1<::System::Security::Cryptography::RSASignaturePadding*>"
  constexpr operator ::System::IEquatable_1<::System::Security::Cryptography::RSASignaturePadding*>*() noexcept;

  /// @brief Method Equals, addr 0x1d187e0, size 0x64, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x1d18844, size 0x8c, virtual true, abstract: false, final true
  inline bool Equals(::System::Security::Cryptography::RSASignaturePadding* other);

  /// @brief Method GetHashCode, addr 0x1d187d4, size 0xc, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Security::Cryptography::RSASignaturePadding* New_ctor();

  static inline ::System::Security::Cryptography::RSASignaturePadding* New_ctor(::System::Security::Cryptography::RSASignaturePaddingMode mode);

  /// @brief Method ToString, addr 0x1d18954, size 0x68, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::System::Security::Cryptography::RSASignaturePaddingMode const& __cordl_internal_get__mode() const;

  constexpr ::System::Security::Cryptography::RSASignaturePaddingMode& __cordl_internal_get__mode();

  constexpr void __cordl_internal_set__mode(::System::Security::Cryptography::RSASignaturePaddingMode value);

  /// @brief Method .ctor, addr 0x1d18a50, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1d186f4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::RSASignaturePaddingMode mode);

  static inline ::System::Security::Cryptography::RSASignaturePadding* getStaticF_s_pkcs1();

  static inline ::System::Security::Cryptography::RSASignaturePadding* getStaticF_s_pss();

  /// @brief Method get_Mode, addr 0x1d187cc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::RSASignaturePaddingMode get_Mode();

  /// @brief Method get_Pkcs1, addr 0x1d1871c, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSASignaturePadding* get_Pkcs1();

  /// @brief Method get_Pss, addr 0x1d18774, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSASignaturePadding* get_Pss();

  /// @brief Convert to "::System::IEquatable_1<::System::Security::Cryptography::RSASignaturePadding*>"
  constexpr ::System::IEquatable_1<::System::Security::Cryptography::RSASignaturePadding*>* i___System__IEquatable_1___System__Security__Cryptography__RSASignaturePadding__() noexcept;

  /// @brief Method op_Equality, addr 0x1d18940, size 0x14, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Security::Cryptography::RSASignaturePadding* left, ::System::Security::Cryptography::RSASignaturePadding* right);

  /// @brief Method op_Inequality, addr 0x1d188d0, size 0x70, virtual false, abstract: false, final false
  static inline bool op_Inequality(::System::Security::Cryptography::RSASignaturePadding* left, ::System::Security::Cryptography::RSASignaturePadding* right);

  static inline void setStaticF_s_pkcs1(::System::Security::Cryptography::RSASignaturePadding* value);

  static inline void setStaticF_s_pss(::System::Security::Cryptography::RSASignaturePadding* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RSASignaturePadding();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RSASignaturePadding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RSASignaturePadding(RSASignaturePadding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RSASignaturePadding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RSASignaturePadding(RSASignaturePadding const&) = delete;

  /// @brief Field _mode, offset: 0x10, size: 0x4, def value: None
  ::System::Security::Cryptography::RSASignaturePaddingMode ____mode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::RSASignaturePadding, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RSASignaturePadding, ____mode) == 0x10, "Offset mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::RSASignaturePadding);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RSASignaturePadding*, "System.Security.Cryptography", "RSASignaturePadding");
