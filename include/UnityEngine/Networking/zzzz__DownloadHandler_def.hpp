#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DownloadHandler)
namespace System::Text {
class Encoding;
}
namespace System {
class IDisposable;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
// Forward declare root types
namespace UnityEngine::Networking {
class DownloadHandler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Networking::DownloadHandler);
// Type: UnityEngine.Networking::DownloadHandler
// SizeInfo { instance_size: 24, native_size: 8, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Networking {
// Is value type: false
// CS Name: ::UnityEngine.Networking::DownloadHandler*
class CORDL_TYPE DownloadHandler : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_data))::ArrayW<uint8_t, ::Array<uint8_t>*> data;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) void* m_Ptr;

  __declspec(property(get = get_text))::StringW text;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CreateNativeArrayForNativeData, addr 0x30aa1a0, size 0x68, virtual false, abstract: false, final false
  static inline void CreateNativeArrayForNativeData(ByRef<::Unity::Collections::NativeArray_1<uint8_t>> data, ::cordl_internals::Ptr<uint8_t> bytes, int32_t length);

  /// @brief Method Dispose, addr 0x30a9b48, size 0x94, virtual true, abstract: false, final false
  inline void Dispose();

  /// @brief Method DisposeNativeArray, addr 0x30aa14c, size 0x54, virtual false, abstract: false, final false
  static inline void DisposeNativeArray(ByRef<::Unity::Collections::NativeArray_1<uint8_t>> data);

  /// @brief Method Finalize, addr 0x30a9aac, size 0x9c, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetContentType, addr 0x30aa000, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW GetContentType();

  /// @brief Method GetData, addr 0x30a9c00, size 0x4, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetData();

  /// @brief Method GetNativeData, addr 0x30a9bf4, size 0xc, virtual true, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<uint8_t> GetNativeData();

  /// @brief Method GetText, addr 0x30a9ca8, size 0xe8, virtual true, abstract: false, final false
  inline ::StringW GetText();

  /// @brief Method GetTextEncoder, addr 0x30a9d90, size 0x270, virtual false, abstract: false, final false
  inline ::System::Text::Encoding* GetTextEncoder();

  /// @brief Method InternalGetByteArray, addr 0x30a9c04, size 0xa4, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> InternalGetByteArray(::UnityEngine::Networking::DownloadHandler* dh);

  /// @brief Method InternalGetByteArray, addr 0x30aa04c, size 0x44, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<uint8_t> InternalGetByteArray(::UnityEngine::Networking::DownloadHandler* dh, ByRef<int32_t> length);

  /// @brief Method InternalGetNativeArray, addr 0x30aa090, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Collections::NativeArray_1<uint8_t> InternalGetNativeArray(::UnityEngine::Networking::DownloadHandler* dh, ByRef<::Unity::Collections::NativeArray_1<uint8_t>> nativeArray);

  static inline ::UnityEngine::Networking::DownloadHandler* New_ctor();

  /// @brief Method ReceiveContentLength, addr 0x30aa048, size 0x4, virtual true, abstract: false, final false
  inline void ReceiveContentLength(int32_t contentLength);

  /// @brief Method ReceiveContentLengthHeader, addr 0x30aa03c, size 0xc, virtual true, abstract: false, final false
  inline void ReceiveContentLengthHeader(uint64_t contentLength);

  /// @brief Method Release, addr 0x30a9a68, size 0x3c, virtual false, abstract: false, final false
  inline void Release();

  constexpr void* const& __cordl_internal_get_m_Ptr() const;

  constexpr void*& __cordl_internal_get_m_Ptr();

  constexpr void __cordl_internal_set_m_Ptr(void* value);

  /// @brief Method .ctor, addr 0x30a9aa4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_data, addr 0x30a9bdc, size 0xc, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_data();

  /// @brief Method get_text, addr 0x30a9be8, size 0xc, virtual false, abstract: false, final false
  inline ::StringW get_text();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DownloadHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DownloadHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DownloadHandler(DownloadHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DownloadHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DownloadHandler(DownloadHandler const&) = delete;

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  void* ___m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::DownloadHandler, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Networking::DownloadHandler, ___m_Ptr) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::Networking
NEED_NO_BOX(::UnityEngine::Networking::DownloadHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::DownloadHandler*, "UnityEngine.Networking", "DownloadHandler");
