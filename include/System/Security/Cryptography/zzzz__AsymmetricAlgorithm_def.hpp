#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsymmetricAlgorithm)
namespace System::Security::Cryptography {
class KeySizes;
}
namespace System::Security::Cryptography {
class PbeParameters;
}
namespace System {
class IDisposable;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
template <typename T> struct Span_1;
}
// Forward declare root types
namespace System::Security::Cryptography {
class AsymmetricAlgorithm;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::AsymmetricAlgorithm);
// Type: System.Security.Cryptography::AsymmetricAlgorithm
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::AsymmetricAlgorithm*
class CORDL_TYPE AsymmetricAlgorithm : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_KeyExchangeAlgorithm))::StringW KeyExchangeAlgorithm;

  __declspec(property(get = get_KeySize, put = set_KeySize)) int32_t KeySize;

  /// @brief Field KeySizeValue, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_KeySizeValue, put = __cordl_internal_set_KeySizeValue)) int32_t KeySizeValue;

  __declspec(property(get = get_LegalKeySizes))::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> LegalKeySizes;

  /// @brief Field LegalKeySizesValue, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_LegalKeySizesValue,
                      put = __cordl_internal_set_LegalKeySizesValue))::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> LegalKeySizesValue;

  __declspec(property(get = get_SignatureAlgorithm))::StringW SignatureAlgorithm;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Clear, addr 0x1d18e08, size 0x6c, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Create, addr 0x1d1907c, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::AsymmetricAlgorithm* Create();

  /// @brief Method Create, addr 0x1d190d8, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::AsymmetricAlgorithm* Create(::StringW algName);

  /// @brief Method Dispose, addr 0x1d18e04, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x1d18e74, size 0x4, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method ExportEncryptedPkcs8PrivateKey, addr 0x1d1923c, size 0x40, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ExportEncryptedPkcs8PrivateKey(::System::ReadOnlySpan_1<char16_t> password, ::System::Security::Cryptography::PbeParameters* pbeParameters);

  /// @brief Method ExportEncryptedPkcs8PrivateKey, addr 0x1d191fc, size 0x40, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ExportEncryptedPkcs8PrivateKey(::System::ReadOnlySpan_1<uint8_t> passwordBytes, ::System::Security::Cryptography::PbeParameters* pbeParameters);

  /// @brief Method ExportPkcs8PrivateKey, addr 0x1d1927c, size 0x40, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ExportPkcs8PrivateKey();

  /// @brief Method ExportSubjectPublicKeyInfo, addr 0x1d192bc, size 0x40, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ExportSubjectPublicKeyInfo();

  /// @brief Method FromXmlString, addr 0x1d1917c, size 0x40, virtual true, abstract: false, final false
  inline void FromXmlString(::StringW xmlString);

  /// @brief Method ImportEncryptedPkcs8PrivateKey, addr 0x1d1933c, size 0x40, virtual true, abstract: false, final false
  inline void ImportEncryptedPkcs8PrivateKey(::System::ReadOnlySpan_1<char16_t> password, ::System::ReadOnlySpan_1<uint8_t> source, ByRef<int32_t> bytesRead);

  /// @brief Method ImportEncryptedPkcs8PrivateKey, addr 0x1d192fc, size 0x40, virtual true, abstract: false, final false
  inline void ImportEncryptedPkcs8PrivateKey(::System::ReadOnlySpan_1<uint8_t> passwordBytes, ::System::ReadOnlySpan_1<uint8_t> source, ByRef<int32_t> bytesRead);

  /// @brief Method ImportPkcs8PrivateKey, addr 0x1d1937c, size 0x40, virtual true, abstract: false, final false
  inline void ImportPkcs8PrivateKey(::System::ReadOnlySpan_1<uint8_t> source, ByRef<int32_t> bytesRead);

  /// @brief Method ImportSubjectPublicKeyInfo, addr 0x1d193bc, size 0x40, virtual true, abstract: false, final false
  inline void ImportSubjectPublicKeyInfo(::System::ReadOnlySpan_1<uint8_t> source, ByRef<int32_t> bytesRead);

  static inline ::System::Security::Cryptography::AsymmetricAlgorithm* New_ctor();

  /// @brief Method ToXmlString, addr 0x1d191bc, size 0x40, virtual true, abstract: false, final false
  inline ::StringW ToXmlString(bool includePrivateParameters);

  /// @brief Method TryExportEncryptedPkcs8PrivateKey, addr 0x1d1943c, size 0x40, virtual true, abstract: false, final false
  inline bool TryExportEncryptedPkcs8PrivateKey(::System::ReadOnlySpan_1<char16_t> password, ::System::Security::Cryptography::PbeParameters* pbeParameters, ::System::Span_1<uint8_t> destination,
                                                ByRef<int32_t> bytesWritten);

  /// @brief Method TryExportEncryptedPkcs8PrivateKey, addr 0x1d193fc, size 0x40, virtual true, abstract: false, final false
  inline bool TryExportEncryptedPkcs8PrivateKey(::System::ReadOnlySpan_1<uint8_t> passwordBytes, ::System::Security::Cryptography::PbeParameters* pbeParameters, ::System::Span_1<uint8_t> destination,
                                                ByRef<int32_t> bytesWritten);

  /// @brief Method TryExportPkcs8PrivateKey, addr 0x1d1947c, size 0x40, virtual true, abstract: false, final false
  inline bool TryExportPkcs8PrivateKey(::System::Span_1<uint8_t> destination, ByRef<int32_t> bytesWritten);

  /// @brief Method TryExportSubjectPublicKeyInfo, addr 0x1d194bc, size 0x40, virtual true, abstract: false, final false
  inline bool TryExportSubjectPublicKeyInfo(::System::Span_1<uint8_t> destination, ByRef<int32_t> bytesWritten);

  constexpr int32_t const& __cordl_internal_get_KeySizeValue() const;

  constexpr int32_t& __cordl_internal_get_KeySizeValue();

  constexpr ::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> const& __cordl_internal_get_LegalKeySizesValue() const;

  constexpr ::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*>& __cordl_internal_get_LegalKeySizesValue();

  constexpr void __cordl_internal_set_KeySizeValue(int32_t value);

  constexpr void __cordl_internal_set_LegalKeySizesValue(::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> value);

  /// @brief Method .ctor, addr 0x1d18dfc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_KeyExchangeAlgorithm, addr 0x1d1903c, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_KeyExchangeAlgorithm();

  /// @brief Method get_KeySize, addr 0x1d18e78, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_KeySize();

  /// @brief Method get_LegalKeySizes, addr 0x1d18f84, size 0x78, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> get_LegalKeySizes();

  /// @brief Method get_SignatureAlgorithm, addr 0x1d18ffc, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_SignatureAlgorithm();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_KeySize, addr 0x1d18e80, size 0xdc, virtual true, abstract: false, final false
  inline void set_KeySize(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsymmetricAlgorithm();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsymmetricAlgorithm", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsymmetricAlgorithm(AsymmetricAlgorithm&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsymmetricAlgorithm", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsymmetricAlgorithm(AsymmetricAlgorithm const&) = delete;

  /// @brief Field KeySizeValue, offset: 0x10, size: 0x4, def value: None
  int32_t ___KeySizeValue;

  /// @brief Field LegalKeySizesValue, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> ___LegalKeySizesValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::AsymmetricAlgorithm, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::AsymmetricAlgorithm, ___KeySizeValue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::AsymmetricAlgorithm, ___LegalKeySizesValue) == 0x18, "Offset mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::AsymmetricAlgorithm);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::AsymmetricAlgorithm*, "System.Security.Cryptography", "AsymmetricAlgorithm");
