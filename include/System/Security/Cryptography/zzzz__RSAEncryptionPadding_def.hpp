#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__HashAlgorithmName_def.hpp"
#include "System/Security/Cryptography/zzzz__RSAEncryptionPaddingMode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RSAEncryptionPadding)
namespace System::Security::Cryptography {
struct HashAlgorithmName;
}
namespace System::Security::Cryptography {
struct RSAEncryptionPaddingMode;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Security::Cryptography {
class RSAEncryptionPadding;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::RSAEncryptionPadding);
// Type: System.Security.Cryptography::RSAEncryptionPadding
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::RSAEncryptionPadding*
class CORDL_TYPE RSAEncryptionPadding : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Mode))::System::Security::Cryptography::RSAEncryptionPaddingMode Mode;

  __declspec(property(get = get_OaepHashAlgorithm))::System::Security::Cryptography::HashAlgorithmName OaepHashAlgorithm;

  /// @brief Field _mode, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__mode, put = __cordl_internal_set__mode))::System::Security::Cryptography::RSAEncryptionPaddingMode _mode;

  /// @brief Field _oaepHashAlgorithm, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__oaepHashAlgorithm, put = __cordl_internal_set__oaepHashAlgorithm))::System::Security::Cryptography::HashAlgorithmName _oaepHashAlgorithm;

  /// @brief Field s_oaepSHA1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_oaepSHA1, put = setStaticF_s_oaepSHA1))::System::Security::Cryptography::RSAEncryptionPadding* s_oaepSHA1;

  /// @brief Field s_oaepSHA256, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_oaepSHA256, put = setStaticF_s_oaepSHA256))::System::Security::Cryptography::RSAEncryptionPadding* s_oaepSHA256;

  /// @brief Field s_oaepSHA384, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_oaepSHA384, put = setStaticF_s_oaepSHA384))::System::Security::Cryptography::RSAEncryptionPadding* s_oaepSHA384;

  /// @brief Field s_oaepSHA512, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_oaepSHA512, put = setStaticF_s_oaepSHA512))::System::Security::Cryptography::RSAEncryptionPadding* s_oaepSHA512;

  /// @brief Field s_pkcs1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_pkcs1, put = setStaticF_s_pkcs1))::System::Security::Cryptography::RSAEncryptionPadding* s_pkcs1;

  /// @brief Convert operator to "::System::IEquatable_1<::System::Security::Cryptography::RSAEncryptionPadding*>"
  constexpr operator ::System::IEquatable_1<::System::Security::Cryptography::RSAEncryptionPadding*>*() noexcept;

  /// @brief Method CombineHashCodes, addr 0x1d18354, size 0xc, virtual false, abstract: false, final false
  static inline int32_t CombineHashCodes(int32_t h1, int32_t h2);

  /// @brief Method CreateOaep, addr 0x1d181d4, size 0xe4, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSAEncryptionPadding* CreateOaep(::System::Security::Cryptography::HashAlgorithmName hashAlgorithm);

  /// @brief Method Equals, addr 0x1d18360, size 0x64, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x1d183c4, size 0xa4, virtual true, abstract: false, final true
  inline bool Equals(::System::Security::Cryptography::RSAEncryptionPadding* other);

  /// @brief Method GetHashCode, addr 0x1d182c8, size 0x8c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Security::Cryptography::RSAEncryptionPadding* New_ctor();

  static inline ::System::Security::Cryptography::RSAEncryptionPadding* New_ctor(::System::Security::Cryptography::RSAEncryptionPaddingMode mode,
                                                                                 ::System::Security::Cryptography::HashAlgorithmName oaepHashAlgorithm);

  /// @brief Method ToString, addr 0x1d184ec, size 0x74, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::System::Security::Cryptography::RSAEncryptionPaddingMode const& __cordl_internal_get__mode() const;

  constexpr ::System::Security::Cryptography::RSAEncryptionPaddingMode& __cordl_internal_get__mode();

  constexpr ::System::Security::Cryptography::HashAlgorithmName const& __cordl_internal_get__oaepHashAlgorithm() const;

  constexpr ::System::Security::Cryptography::HashAlgorithmName& __cordl_internal_get__oaepHashAlgorithm();

  constexpr void __cordl_internal_set__mode(::System::Security::Cryptography::RSAEncryptionPaddingMode value);

  constexpr void __cordl_internal_set__oaepHashAlgorithm(::System::Security::Cryptography::HashAlgorithmName value);

  /// @brief Method .ctor, addr 0x1d186bc, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1d181a4, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::RSAEncryptionPaddingMode mode, ::System::Security::Cryptography::HashAlgorithmName oaepHashAlgorithm);

  static inline ::System::Security::Cryptography::RSAEncryptionPadding* getStaticF_s_oaepSHA1();

  static inline ::System::Security::Cryptography::RSAEncryptionPadding* getStaticF_s_oaepSHA256();

  static inline ::System::Security::Cryptography::RSAEncryptionPadding* getStaticF_s_oaepSHA384();

  static inline ::System::Security::Cryptography::RSAEncryptionPadding* getStaticF_s_oaepSHA512();

  static inline ::System::Security::Cryptography::RSAEncryptionPadding* getStaticF_s_pkcs1();

  /// @brief Method get_Mode, addr 0x1d182b8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::RSAEncryptionPaddingMode get_Mode();

  /// @brief Method get_OaepHashAlgorithm, addr 0x1d182c0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::HashAlgorithmName get_OaepHashAlgorithm();

  /// @brief Method get_OaepSHA1, addr 0x1d18044, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSAEncryptionPadding* get_OaepSHA1();

  /// @brief Method get_OaepSHA256, addr 0x1d1809c, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSAEncryptionPadding* get_OaepSHA256();

  /// @brief Method get_OaepSHA384, addr 0x1d180f4, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSAEncryptionPadding* get_OaepSHA384();

  /// @brief Method get_OaepSHA512, addr 0x1d1814c, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSAEncryptionPadding* get_OaepSHA512();

  /// @brief Method get_Pkcs1, addr 0x1d17fec, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSAEncryptionPadding* get_Pkcs1();

  /// @brief Convert to "::System::IEquatable_1<::System::Security::Cryptography::RSAEncryptionPadding*>"
  constexpr ::System::IEquatable_1<::System::Security::Cryptography::RSAEncryptionPadding*>* i___System__IEquatable_1___System__Security__Cryptography__RSAEncryptionPadding__() noexcept;

  /// @brief Method op_Equality, addr 0x1d184d8, size 0x14, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Security::Cryptography::RSAEncryptionPadding* left, ::System::Security::Cryptography::RSAEncryptionPadding* right);

  /// @brief Method op_Inequality, addr 0x1d18468, size 0x70, virtual false, abstract: false, final false
  static inline bool op_Inequality(::System::Security::Cryptography::RSAEncryptionPadding* left, ::System::Security::Cryptography::RSAEncryptionPadding* right);

  static inline void setStaticF_s_oaepSHA1(::System::Security::Cryptography::RSAEncryptionPadding* value);

  static inline void setStaticF_s_oaepSHA256(::System::Security::Cryptography::RSAEncryptionPadding* value);

  static inline void setStaticF_s_oaepSHA384(::System::Security::Cryptography::RSAEncryptionPadding* value);

  static inline void setStaticF_s_oaepSHA512(::System::Security::Cryptography::RSAEncryptionPadding* value);

  static inline void setStaticF_s_pkcs1(::System::Security::Cryptography::RSAEncryptionPadding* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RSAEncryptionPadding();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RSAEncryptionPadding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RSAEncryptionPadding(RSAEncryptionPadding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RSAEncryptionPadding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RSAEncryptionPadding(RSAEncryptionPadding const&) = delete;

  /// @brief Field _mode, offset: 0x10, size: 0x4, def value: None
  ::System::Security::Cryptography::RSAEncryptionPaddingMode ____mode;

  /// @brief Field _oaepHashAlgorithm, offset: 0x18, size: 0x8, def value: None
  ::System::Security::Cryptography::HashAlgorithmName ____oaepHashAlgorithm;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::RSAEncryptionPadding, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RSAEncryptionPadding, ____mode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RSAEncryptionPadding, ____oaepHashAlgorithm) == 0x18, "Offset mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::RSAEncryptionPadding);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RSAEncryptionPadding*, "System.Security.Cryptography", "RSAEncryptionPadding");
