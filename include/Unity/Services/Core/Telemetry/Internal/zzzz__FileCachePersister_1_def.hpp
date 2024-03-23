#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Services/Core/Telemetry/Internal/zzzz__FileCachePersister_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FileCachePersister_1)
namespace Unity::Services::Core::Internal {
class CoreDiagnostics;
}
namespace Unity::Services::Core::Telemetry::Internal {
template <typename TPayload> class CachedPayload_1;
}
namespace Unity::Services::Core::Telemetry::Internal {
template <typename TPayload> class ICachePersister_1;
}
// Forward declare root types
namespace Unity::Services::Core::Telemetry::Internal {
template <typename TPayload> class FileCachePersister_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Services::Core::Telemetry::Internal::FileCachePersister_1);
// Type: Unity.Services.Core.Telemetry.Internal::FileCachePersister`1
// SizeInfo { instance_size: 40, native_size: 33, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Telemetry::Internal {
// cpp template
template <typename TPayload>
// Is value type: false
// CS Name: ::Unity.Services.Core.Telemetry.Internal::FileCachePersister`1<TPayload>*
class CORDL_TYPE FileCachePersister_1 : public ::Unity::Services::Core::Telemetry::Internal::FileCachePersister {
public:
  // Declarations
  __declspec(property(get = get_CanPersist)) bool CanPersist;

  __declspec(property(get = get_FilePath))::StringW FilePath;

  /// @brief Field <CanPersist>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__CanPersist_k__BackingField, put = __cordl_internal_set__CanPersist_k__BackingField)) bool _CanPersist_k__BackingField;

  /// @brief Field <FilePath>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__FilePath_k__BackingField, put = __cordl_internal_set__FilePath_k__BackingField))::StringW _FilePath_k__BackingField;

  /// @brief Field m_Diagnostics, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Diagnostics, put = __cordl_internal_set_m_Diagnostics))::Unity::Services::Core::Internal::CoreDiagnostics* m_Diagnostics;

  /// @brief Convert operator to "::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<TPayload>"
  constexpr operator ::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<TPayload>*() noexcept;

  /// @brief Method Delete, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Delete();

  static inline ::Unity::Services::Core::Telemetry::Internal::FileCachePersister_1<TPayload>* New_ctor(::StringW fileName, ::Unity::Services::Core::Internal::CoreDiagnostics* diagnostics);

  /// @brief Method Persist, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Persist(::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>* cache);

  /// @brief Method TryFetch, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool TryFetch(ByRef<::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>*> persistedCache);

  constexpr bool const& __cordl_internal_get__CanPersist_k__BackingField() const;

  constexpr bool& __cordl_internal_get__CanPersist_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__FilePath_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__FilePath_k__BackingField();

  constexpr ::Unity::Services::Core::Internal::CoreDiagnostics*& __cordl_internal_get_m_Diagnostics();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Internal::CoreDiagnostics*> const& __cordl_internal_get_m_Diagnostics() const;

  constexpr void __cordl_internal_set__CanPersist_k__BackingField(bool value);

  constexpr void __cordl_internal_set__FilePath_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set_m_Diagnostics(::Unity::Services::Core::Internal::CoreDiagnostics* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::StringW fileName, ::Unity::Services::Core::Internal::CoreDiagnostics* diagnostics);

  /// @brief Method get_CanPersist, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_CanPersist();

  /// @brief Method get_FilePath, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::StringW get_FilePath();

  /// @brief Convert to "::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<TPayload>"
  constexpr ::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<TPayload>* i___Unity__Services__Core__Telemetry__Internal__ICachePersister_1_TPayload_() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileCachePersister_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FileCachePersister_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileCachePersister_1(FileCachePersister_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileCachePersister_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileCachePersister_1(FileCachePersister_1 const&) = delete;

  /// @brief Field m_Diagnostics, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Core::Internal::CoreDiagnostics* ___m_Diagnostics;

  /// @brief Field <FilePath>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____FilePath_k__BackingField;

  /// @brief Field <CanPersist>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____CanPersist_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Core::Telemetry::Internal
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Services::Core::Telemetry::Internal::FileCachePersister_1, "Unity.Services.Core.Telemetry.Internal", "FileCachePersister`1");
