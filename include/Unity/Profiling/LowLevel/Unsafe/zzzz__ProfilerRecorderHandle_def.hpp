#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProfilerRecorderHandle)
namespace Unity::Profiling::LowLevel::Unsafe {
struct ProfilerRecorderDescription;
}
// Forward declare root types
namespace Unity::Profiling::LowLevel::Unsafe {
struct ProfilerRecorderHandle;
}
// Write type traits
MARK_VAL_T(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle);
// Type: Unity.Profiling.LowLevel.Unsafe::ProfilerRecorderHandle
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 1, natural_alignment: 8, packing: Some(1), specified_packing: Some(0) }
namespace Unity::Profiling::LowLevel::Unsafe {
// Is value type: true
// CS Name: ::Unity.Profiling.LowLevel.Unsafe::ProfilerRecorderHandle
#pragma pack(push, 0)
struct CORDL_TYPE ProfilerRecorderHandle {
public:
  // Declarations
  __declspec(property(get = get_Valid)) bool Valid;

  /// @brief Field handle, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_handle, put = __cordl_internal_set_handle)) uint64_t handle;

  /// @brief Method GetDescription, addr 0x27e0a9c, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription GetDescription(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle handle);

  /// @brief Method GetDescriptionInternal, addr 0x27e0b68, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription GetDescriptionInternal(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle handle);

  /// @brief Method GetDescriptionInternal_Injected, addr 0x27e0bec, size 0x44, virtual false, abstract: false, final false
  static inline void GetDescriptionInternal_Injected(ByRef<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle> handle,
                                                     ByRef<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription> ret);

  constexpr uint64_t const& __cordl_internal_get_handle() const;

  constexpr uint64_t& __cordl_internal_get_handle();

  constexpr void __cordl_internal_set_handle(uint64_t value);

  /// @brief Method .ctor, addr 0x27e0a80, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(uint64_t handle);

  /// @brief Method get_Valid, addr 0x27e0a88, size 0x14, virtual false, abstract: false, final false
  inline bool get_Valid();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProfilerRecorderHandle();

  // Ctor Parameters [CppParam { name: "handle", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr ProfilerRecorderHandle(uint64_t handle) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___handle_padding[0x0];
      /// @brief Field handle, offset: 0x0, size: 0x8, def value: None
      uint64_t ___handle;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___handle_padding_forAlignment[0x0];
      /// @brief Field handle, offset: 0x0, size: 0x8, def value: None
      uint64_t ___handle_forAlignment;
    };
  };

public:
  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle, 0x8>, "Size mismatch!");

} // namespace Unity::Profiling::LowLevel::Unsafe
DEFINE_IL2CPP_ARG_TYPE(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle, "Unity.Profiling.LowLevel.Unsafe", "ProfilerRecorderHandle");
