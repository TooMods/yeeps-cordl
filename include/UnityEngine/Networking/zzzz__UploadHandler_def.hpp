#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UploadHandler)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine::Networking {
class UploadHandler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Networking::UploadHandler);
// Type: UnityEngine.Networking::UploadHandler
// SizeInfo { instance_size: 24, native_size: 8, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Networking {
// Is value type: false
// CS Name: ::UnityEngine.Networking::UploadHandler*
class CORDL_TYPE UploadHandler : public ::System::Object {
public:
  // Declarations
  __declspec(property(put = set_contentType))::StringW contentType;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) void* m_Ptr;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x30aa38c, size 0x94, virtual true, abstract: false, final false
  inline void Dispose();

  /// @brief Method Finalize, addr 0x30aa2f0, size 0x9c, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method InternalSetContentType, addr 0x30aa470, size 0x44, virtual false, abstract: false, final false
  inline void InternalSetContentType(::StringW newContentType);

  static inline ::UnityEngine::Networking::UploadHandler* New_ctor();

  /// @brief Method Release, addr 0x30aa2ac, size 0x3c, virtual false, abstract: false, final false
  inline void Release();

  /// @brief Method SetContentType, addr 0x30aa42c, size 0x44, virtual true, abstract: false, final false
  inline void SetContentType(::StringW newContentType);

  constexpr void* const& __cordl_internal_get_m_Ptr() const;

  constexpr void*& __cordl_internal_get_m_Ptr();

  constexpr void __cordl_internal_set_m_Ptr(void* value);

  /// @brief Method .ctor, addr 0x30aa2e8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_contentType, addr 0x30aa420, size 0xc, virtual false, abstract: false, final false
  inline void set_contentType(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UploadHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UploadHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UploadHandler(UploadHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UploadHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UploadHandler(UploadHandler const&) = delete;

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  void* ___m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::UploadHandler, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Networking::UploadHandler, ___m_Ptr) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::Networking
NEED_NO_BOX(::UnityEngine::Networking::UploadHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::UploadHandler*, "UnityEngine.Networking", "UploadHandler");
