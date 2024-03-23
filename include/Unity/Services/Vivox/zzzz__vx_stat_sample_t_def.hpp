#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(vx_stat_sample_t)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class vx_stat_sample_t;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::vx_stat_sample_t);
// Type: Unity.Services.Vivox::vx_stat_sample_t
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::vx_stat_sample_t*
class CORDL_TYPE vx_stat_sample_t : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_last, put = set_last)) double_t last;

  __declspec(property(get = get_max, put = set_max)) double_t max;

  __declspec(property(get = get_mean, put = set_mean)) double_t mean;

  __declspec(property(get = get_min, put = set_min)) double_t min;

  __declspec(property(get = get_sample_count, put = set_sample_count)) double_t sample_count;

  __declspec(property(get = get_stddev, put = set_stddev)) double_t stddev;

  __declspec(property(get = get_sum, put = set_sum)) double_t sum;

  __declspec(property(get = get_sum_of_squares, put = set_sum_of_squares)) double_t sum_of_squares;

  /// @brief Field swigCMemOwn, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_swigCMemOwn, put = __cordl_internal_set_swigCMemOwn)) bool swigCMemOwn;

  /// @brief Field swigCPtr, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_swigCPtr, put = __cordl_internal_set_swigCPtr))::System::Runtime::InteropServices::HandleRef swigCPtr;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x16cda7c, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x16cdb88, size 0x180, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x16cdae8, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::Unity::Services::Vivox::vx_stat_sample_t* New_ctor();

  static inline ::Unity::Services::Vivox::vx_stat_sample_t* New_ctor(void* cPtr, bool cMemoryOwn);

  constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

  constexpr bool& __cordl_internal_get_swigCMemOwn();

  constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

  constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr();

  constexpr void __cordl_internal_set_swigCMemOwn(bool value);

  constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef value);

  /// @brief Method .ctor, addr 0x16ce388, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x16cd8d0, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(void* cPtr, bool cMemoryOwn);

  /// @brief Method getCPtr, addr 0x16cd924, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Unity::Services::Vivox::vx_stat_sample_t* obj);

  /// @brief Method get_last, addr 0x16ce328, size 0x60, virtual false, abstract: false, final false
  inline double_t get_last();

  /// @brief Method get_max, addr 0x16ce258, size 0x60, virtual false, abstract: false, final false
  inline double_t get_max();

  /// @brief Method get_mean, addr 0x16cdfe8, size 0x60, virtual false, abstract: false, final false
  inline double_t get_mean();

  /// @brief Method get_min, addr 0x16ce188, size 0x60, virtual false, abstract: false, final false
  inline double_t get_min();

  /// @brief Method get_sample_count, addr 0x16cdd78, size 0x60, virtual false, abstract: false, final false
  inline double_t get_sample_count();

  /// @brief Method get_stddev, addr 0x16ce0b8, size 0x60, virtual false, abstract: false, final false
  inline double_t get_stddev();

  /// @brief Method get_sum, addr 0x16cde48, size 0x60, virtual false, abstract: false, final false
  inline double_t get_sum();

  /// @brief Method get_sum_of_squares, addr 0x16cdf18, size 0x60, virtual false, abstract: false, final false
  inline double_t get_sum_of_squares();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_last, addr 0x16ce2b8, size 0x70, virtual false, abstract: false, final false
  inline void set_last(double_t value);

  /// @brief Method set_max, addr 0x16ce1e8, size 0x70, virtual false, abstract: false, final false
  inline void set_max(double_t value);

  /// @brief Method set_mean, addr 0x16cdf78, size 0x70, virtual false, abstract: false, final false
  inline void set_mean(double_t value);

  /// @brief Method set_min, addr 0x16ce118, size 0x70, virtual false, abstract: false, final false
  inline void set_min(double_t value);

  /// @brief Method set_sample_count, addr 0x16cdd08, size 0x70, virtual false, abstract: false, final false
  inline void set_sample_count(double_t value);

  /// @brief Method set_stddev, addr 0x16ce048, size 0x70, virtual false, abstract: false, final false
  inline void set_stddev(double_t value);

  /// @brief Method set_sum, addr 0x16cddd8, size 0x70, virtual false, abstract: false, final false
  inline void set_sum(double_t value);

  /// @brief Method set_sum_of_squares, addr 0x16cdea8, size 0x70, virtual false, abstract: false, final false
  inline void set_sum_of_squares(double_t value);

  /// @brief Method swigRelease, addr 0x16cd9a0, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::Unity::Services::Vivox::vx_stat_sample_t* obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr vx_stat_sample_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "vx_stat_sample_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  vx_stat_sample_t(vx_stat_sample_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "vx_stat_sample_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  vx_stat_sample_t(vx_stat_sample_t const&) = delete;

  /// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
  ::System::Runtime::InteropServices::HandleRef ___swigCPtr;

  /// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
  bool ___swigCMemOwn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vx_stat_sample_t, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_stat_sample_t, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_stat_sample_t, ___swigCMemOwn) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::vx_stat_sample_t);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vx_stat_sample_t*, "Unity.Services.Vivox", "vx_stat_sample_t");
